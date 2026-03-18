/*
 * XREFs of CcDeallocateBcb @ 0x1400E297C
 * Callers:
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
