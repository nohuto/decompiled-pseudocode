/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C0081E88
 * Callers:
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EB4 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C0193750);
  WORD2(qword_1C0193740) = 0;
  byte_1C0193721 = 1;
}
