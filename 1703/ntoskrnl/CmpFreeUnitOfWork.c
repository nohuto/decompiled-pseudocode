/*
 * XREFs of CmpFreeUnitOfWork @ 0x140673C98
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeUnitOfWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x77554D43u);
}
