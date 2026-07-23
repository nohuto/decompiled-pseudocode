/*
 * XREFs of sub_180078B20 @ 0x180078B20
 * Callers:
 *     sub_18004101C @ 0x18004101C (sub_18004101C.c)
 *     sub_1800FB084 @ 0x1800FB084 (sub_1800FB084.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047438 @ 0x180047438 (sub_180047438.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180078B20(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rbp
  WCHAR *Heap; // r12
  __int16 v12; // ax
  unsigned int v13; // edi
  LCID v15; // ecx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( Heap )
  {
    v12 = *(_WORD *)(a2 + 6);
    if ( v12 <= 0 )
    {
      v15 = *(unsigned __int16 *)(a2 + 4);
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      if ( !RtlLCIDToCultureName(v15, &DestinationString) )
      {
        v5 = -1073741595;
        goto LABEL_13;
      }
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v12)));
    }
    if ( *a3 && *a3 <= a5 && sub_180047438(a4, DestinationString.Buffer, *a3) )
      goto LABEL_13;
    v13 = v10 + (DestinationString.Length >> 1) + 1;
    if ( a4 && (unsigned int)v10 < v13 )
    {
      if ( v13 < a5 )
      {
        memmove(&a4[v10], DestinationString.Buffer, DestinationString.Length);
        a4[v13 - 1] = 0;
LABEL_12:
        *a3 = v13;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v5;
      }
    }
    else if ( v13 < a5 )
    {
      goto LABEL_12;
    }
    if ( a4 )
      v5 = -1073741789;
    goto LABEL_12;
  }
  return 3221225495LL;
}
