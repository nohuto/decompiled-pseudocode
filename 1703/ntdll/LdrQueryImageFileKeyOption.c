/*
 * XREFs of LdrQueryImageFileKeyOption @ 0x18007C560
 * Callers:
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl LdrQueryImageFileKeyOption(
        HANDLE KeyHandle,
        PCWSTR ValueName,
        ULONG Type,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  NTSTATUS result; // eax
  ULONG v10; // r14d
  _BYTE *v11; // rsi
  NTSTATUS v12; // ebx
  void *v13; // r13
  ULONG Length; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v17; // eax
  ULONG v18; // edi
  int v19; // ecx
  size_t v20; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  PULONG v23; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v23 = ReturnedLength;
  result = RtlInitUnicodeStringEx(&DestinationString, ValueName);
  if ( result < 0 )
    return result;
  v10 = BufferSize;
  if ( BufferSize >= 0x3F4 )
  {
    Length = BufferSize + 12;
    goto LABEL_9;
  }
  v11 = KeyValueInformation;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v12 = result;
  if ( result >= 0 )
  {
    v13 = 0LL;
LABEL_14:
    if ( !Type )
    {
      v18 = *((_DWORD *)v11 + 2);
      if ( v18 > BufferSize )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_17;
      }
      Type = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v19 = *((_DWORD *)v11 + 1);
    if ( ((v19 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v19 == 4 )
      {
        if ( Type == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( Buffer )
            {
              *(_DWORD *)Buffer = *((_DWORD *)v11 + 3);
              goto LABEL_18;
            }
LABEL_17:
            v12 = -2147483643;
LABEL_18:
            if ( v23 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v23 = v18;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
LABEL_56:
        v12 = -1073741788;
        goto LABEL_22;
      }
      if ( v19 == 11 )
      {
        if ( Type != 11 )
          goto LABEL_56;
        v18 = 8;
        if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
        {
          ResultLength = 8;
          if ( Buffer )
          {
            *(_QWORD *)Buffer = *(_QWORD *)(v11 + 12);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
LABEL_33:
        v12 = -1073741820;
LABEL_22:
        if ( v13 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        return v12;
      }
      if ( v19 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_42;
      }
      if ( Type == 4 )
      {
        if ( v10 != 4 )
          goto LABEL_33;
        if ( ((unsigned __int8)Buffer & 3) != 0 )
        {
          v12 = -2147483646;
          goto LABEL_22;
        }
        ResultLength = 4;
        if ( !Buffer )
          goto LABEL_17;
        DestinationString.Buffer = (PWCH)(v11 + 12);
        DestinationString.Length = *((_WORD *)v11 + 4);
        DestinationString.MaximumLength = *((_WORD *)v11 + 4);
        v12 = RtlUnicodeStringToInteger(&DestinationString, 0, (PULONG)Buffer);
LABEL_42:
        v18 = ResultLength;
        goto LABEL_18;
      }
      v18 = *((_DWORD *)v11 + 2);
      ResultLength = v18;
      if ( v18 > v10 )
        goto LABEL_17;
      v20 = v18;
    }
    else
    {
      if ( Type != v19 )
        goto LABEL_56;
      v18 = *((_DWORD *)v11 + 2);
      ResultLength = v18;
      if ( !Buffer || *((_DWORD *)v11 + 2) > v10 )
        goto LABEL_17;
      v20 = *((unsigned int *)v11 + 2);
    }
    memmove(Buffer, v11 + 12, v20);
    goto LABEL_18;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, Length);
      v13 = Heap;
      if ( !Heap )
        return -1073741801;
      v11 = Heap;
      v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v12 = v17;
      if ( v17 >= 0 )
        goto LABEL_14;
      if ( v17 != -2147483643 )
        goto LABEL_22;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
  }
  return result;
}
