/*
 * XREFs of CmpFree @ 0x1404D28F0
 * Callers:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1404D2918 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(void *a1, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(a1, 0);
}
