/*
 * XREFs of sub_18008A338 @ 0x18008A338
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045CA4 @ 0x180045CA4 (sub_180045CA4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180058398 @ 0x180058398 (sub_180058398.c)
 *     sub_1800583CC @ 0x1800583CC (sub_1800583CC.c)
 *     sub_18005845C @ 0x18005845C (sub_18005845C.c)
 */

__int64 sub_18008A338(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  WCHAR *Heap; // rsi
  int v9; // ebx
  __int16 v10; // di
  unsigned __int16 v11; // dx
  __int16 v12; // dx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  BaseAddress = 0LL;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_19;
  }
  v9 = sub_18005845C(&BaseAddress);
  if ( v9 >= 0 )
  {
    if ( !sub_1800583CC(a2, (__int64)BaseAddress, a3, a4, 0, 42) )
    {
      v9 = -1073741823;
      goto LABEL_21;
    }
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    if ( !Heap )
    {
      v9 = -1073741801;
      goto LABEL_21;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *((_DWORD *)BaseAddress + 2 * v10 + 1) )
      {
        v11 = *((_WORD *)BaseAddress + 4 * v10);
        if ( v11 )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, &DestinationString) )
          {
LABEL_18:
            v9 = -1073741595;
LABEL_19:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            break;
          }
        }
        else
        {
          v12 = *((_WORD *)BaseAddress + 4 * v10 + 1);
          if ( v12 < 0 )
            goto LABEL_18;
          RtlInitUnicodeString(
            &DestinationString,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2LL * v12)));
        }
        v9 = sub_180045CA4(a1, a3, 0, (__int16 *)va, DestinationString.Buffer);
        if ( v9 < 0 )
          goto LABEL_19;
      }
      if ( ++v10 >= 42 )
        goto LABEL_19;
    }
  }
LABEL_21:
  if ( BaseAddress )
    sub_180058398(BaseAddress);
  return (unsigned int)v9;
}
