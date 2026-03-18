/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C0084F68
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0084F98 (-CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084FD8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C018E8C8);
  CitpParametersCleanup((struct _CIT_PARAMETERS *)&unk_1C018E858);
  byte_1C018E851 = 1;
}
