/*
 * XREFs of CmpFreeUnitOfWork @ 0x140703F14
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeUnitOfWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x77554D43u);
}
