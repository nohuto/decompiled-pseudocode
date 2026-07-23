/*
 * XREFs of sub_18010220C @ 0x18010220C
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall sub_18010220C(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  int v5; // esi

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)a1 != 1 )
    return 0LL;
  if ( *(_WORD *)(a1 + 2) != 80 )
    return 0LL;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  if ( RtlCompareMemoryUlong((PVOID)(a1 + 48), 0x20uLL, 0) != 32 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 8) )
    return 0LL;
  if ( (unsigned int)(v2 - 1) > 0xE )
    return 0LL;
  if ( (v2 & 2) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 16) != -1 )
    return 0LL;
  if ( RtlCompareMemoryUlong((PVOID)(a1 + 32), 0x10uLL, 0) != 16 )
    return 0LL;
  v4 = v2 & 0xFFFFFFF3;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( v4 )
      return 0LL;
  }
  v5 = v2 & 0xC;
  if ( v5 == 8 )
    return 0LL;
  LOBYTE(v3) = v5 == 0 || v4 == 0;
  return v3;
}
