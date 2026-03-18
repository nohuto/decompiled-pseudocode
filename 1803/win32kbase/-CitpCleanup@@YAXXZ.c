/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C0160358
 * Callers:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C016427C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603B0 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C01A16B0);
  word_1C01A16A8 = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C01A1681 )
  {
    EtwUnregister(qword_1C019A330);
    qword_1C019A330 = 0LL;
    dword_1C019A310 = 0;
  }
  byte_1C01A1681 = 1;
}
