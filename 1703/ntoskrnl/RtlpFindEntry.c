/*
 * XREFs of RtlpFindEntry @ 0x14001031C
 * Callers:
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14000EAF4 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x14000EDEC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x1406EB360 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x140010390 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  int v5; // ecx
  __int64 result; // rax
  __int64 *v7; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  if ( a2 >= *((unsigned int *)v2 + 2) )
  {
    while ( 1 )
    {
      v7 = (__int64 *)*v2;
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
      if ( a2 < *((unsigned int *)v7 + 2) )
        goto LABEL_2;
    }
    v5 = *((_DWORD *)v2 + 2) - 1;
  }
  else
  {
LABEL_2:
    v5 = a2;
  }
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v5, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v5 = *((_DWORD *)v2 + 6);
  }
  return result;
}
