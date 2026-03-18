/*
 * XREFs of RtlpFindEntry @ 0x1402939E8
 * Callers:
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x140293BB8 (RtlpHeapFindListLookupEntry.c)
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
