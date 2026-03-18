/*
 * XREFs of CmpFree @ 0x140479E90
 * Callers:
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x140479EB8 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
