/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x14077660C
 * Callers:
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14001A9C8 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140192F40 (memset.c)
 */

PVOID __fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  PVOID result; // rax
  PVOID v3; // rbx

  result = AuthzBasepMemAlloc(0x260uLL, a2, 0x74416553u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}
