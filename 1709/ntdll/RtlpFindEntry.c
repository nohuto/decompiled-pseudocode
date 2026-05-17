/*
 * XREFs of RtlpFindEntry @ 0x18000955C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x1800095D0 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  __int64 *v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  if ( a2 < *((unsigned int *)v2 + 2) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = (__int64 *)*v2;
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
      if ( a2 < *((unsigned int *)v5 + 2) )
        goto LABEL_4;
    }
    v6 = *((_DWORD *)v2 + 2) - 1;
  }
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v6, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
  }
  return result;
}
