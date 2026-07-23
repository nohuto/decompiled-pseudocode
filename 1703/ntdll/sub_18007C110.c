/*
 * XREFs of sub_18007C110 @ 0x18007C110
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

void __fastcall sub_18007C110(HANDLE KeyHandle)
{
  _BYTE *v2; // rsi
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  void *v5; // r14
  ULONG Length; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  if ( KeyHandle && RtlInitUnicodeStringEx(&DestinationString, L"CWDIllegalInDLLSearch") >= 0 )
  {
    v2 = KeyValueInformation;
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0LL;
LABEL_15:
      v10 = *((_DWORD *)v2 + 1);
      if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v10 )
        {
          case 4:
            if ( *((_DWORD *)v2 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v2 + 3);
            }
            else
            {
              v4 = -1073741820;
            }
            break;
          case 11:
            v4 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Value & 3) != 0 )
            {
              v4 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (PWCH)(v2 + 12);
              DestinationString.Length = *((_WORD *)v2 + 4);
              DestinationString.MaximumLength = *((_WORD *)v2 + 4);
              v4 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
            }
            break;
          default:
            v4 = -1073741788;
            break;
        }
      }
      else if ( v10 == 4 )
      {
        ResultLength = *((_DWORD *)v2 + 2);
        v11 = *((_DWORD *)v2 + 2);
        if ( v11 > 4 )
          v4 = -2147483643;
        else
          memmove(&Value, v2 + 12, v11);
      }
      else
      {
        v4 = -1073741788;
      }
LABEL_32:
      if ( v5 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_5:
      if ( v4 >= 0 && Value + 1 <= 3 )
        goto LABEL_34;
      goto LABEL_7;
    }
    if ( v3 != -2147483643 )
      goto LABEL_5;
    while ( 1 )
    {
      Length = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, ResultLength);
      v5 = Heap;
      if ( !Heap )
        break;
      v2 = Heap;
      v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v4 = v9;
      if ( v9 >= 0 )
        goto LABEL_15;
      if ( v9 != -2147483643 )
        goto LABEL_32;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
  }
LABEL_7:
  Value = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( Value == 3 )
  {
LABEL_40:
    dword_18015C448 = -1;
    return;
  }
LABEL_34:
  if ( Value == -1 )
    goto LABEL_40;
  if ( Value == 1 )
  {
    dword_18015C448 = 0x2000;
  }
  else
  {
    v12 = 16;
    if ( Value != 2 )
      v12 = 0;
    dword_18015C448 = v12;
  }
}
