/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C00271F0
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C0027288 (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z @ 0x1C01A62D0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C01A7EBC (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
