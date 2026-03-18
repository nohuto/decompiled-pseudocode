/*
 * XREFs of CcDeallocateBcb @ 0x14011B160
 * Callers:
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140136248 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 */

void __fastcall CcDeallocateBcb(char *a1)
{
  if ( *(_WORD *)a1 == 765 )
    ExDeleteResourceLite((PERESOURCE)(a1 + 72));
  ExFreePoolWithTag(a1, 0);
}
