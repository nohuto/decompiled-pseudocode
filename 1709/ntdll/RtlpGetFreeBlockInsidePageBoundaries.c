/*
 * XREFs of RtlpGetFreeBlockInsidePageBoundaries @ 0x18004A5E4
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpDecommitBlock @ 0x18004A4B4 (RtlpDecommitBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetFreeBlockInsidePageBoundaries(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v4 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *a3 = v4;
  if ( v4 == a2 + 80 )
    *a3 = v4 + 4096;
  v5 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 <= *a3 )
    return 0;
  *a4 = v5 - *a3;
  return 1;
}
