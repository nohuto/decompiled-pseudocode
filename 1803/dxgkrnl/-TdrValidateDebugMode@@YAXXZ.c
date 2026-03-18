/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C0031638
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C00316D4 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C0198A10 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C019AB3C (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
