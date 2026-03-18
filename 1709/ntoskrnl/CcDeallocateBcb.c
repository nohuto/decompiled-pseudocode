/*
 * XREFs of CcDeallocateBcb @ 0x14001ED04
 * Callers:
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x14012F610 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
