/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800D6570
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

void __fastcall LdrpQueryIllegalCWDDevices(__int64 a1)
{
  char *v1; // rdi
  int ValueKey; // eax
  int v3; // ebx
  unsigned __int64 v4; // rsi
  int v5; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // [rsp+30h] [rbp-D0h]
  int v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-B8h]
  char v15; // [rsp+50h] [rbp-B0h] BYREF

  if ( a1 && (int)RtlInitUnicodeStringEx((__int64)v13, (__int64)L"CWDIllegalInDLLSearch") >= 0 )
  {
    v1 = &v15;
    ValueKey = NtQueryValueKey();
    v3 = ValueKey;
    if ( ValueKey >= 0 )
    {
      v4 = 0LL;
LABEL_5:
      v5 = *((_DWORD *)v1 + 1);
      if ( ((v5 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v5 )
        {
          case 4:
            if ( *((_DWORD *)v1 + 2) == 4 )
              v12[0] = *((_DWORD *)v1 + 3);
            else
              v3 = -1073741820;
            break;
          case 11:
            v3 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)v12 & 3) != 0 )
            {
              v3 = -2147483646;
            }
            else
            {
              v14 = v1 + 12;
              v13[0] = *((_WORD *)v1 + 4);
              v13[1] = *((_WORD *)v1 + 4);
              v3 = RtlUnicodeStringToInteger(v13, 0, v12);
            }
            break;
          default:
            v3 = -1073741788;
            break;
        }
      }
      else if ( v5 == 4 )
      {
        v9 = *((_DWORD *)v1 + 2);
        if ( v9 > 4 )
          v3 = -2147483643;
        else
          memmove(v12, v1 + 12, v9);
      }
      else
      {
        v3 = -1073741788;
      }
LABEL_28:
      if ( v4 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
LABEL_30:
      if ( v3 >= 0 && (unsigned int)(v12[0] + 1) <= 3 )
        goto LABEL_33;
      goto LABEL_32;
    }
    if ( ValueKey != -2147483643 )
      goto LABEL_30;
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v11);
      v4 = Heap;
      if ( !Heap )
        break;
      v1 = (char *)Heap;
      v8 = NtQueryValueKey();
      v3 = v8;
      if ( v8 >= 0 )
        goto LABEL_5;
      if ( v8 != -2147483643 )
        goto LABEL_28;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v1);
    }
  }
LABEL_32:
  v12[0] = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( v12[0] == 3 )
  {
LABEL_39:
    LdrpIllegalCWDDevices = -1;
    return;
  }
LABEL_33:
  if ( v12[0] == -1 )
    goto LABEL_39;
  if ( v12[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    v10 = 16;
    if ( v12[0] != 2 )
      v10 = 0;
    LdrpIllegalCWDDevices = v10;
  }
}
