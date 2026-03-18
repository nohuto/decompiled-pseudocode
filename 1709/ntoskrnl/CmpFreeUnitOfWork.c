/*
 * XREFs of CmpFreeUnitOfWork @ 0x14069EC3C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeUnitOfWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x77554D43u);
}
