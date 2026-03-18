/*
 * XREFs of Simulator_TestNotify @ 0x1C005C4A4
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C005BF20 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005C154 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005C24C (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C005C31C (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C005C3C0 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00B12F8 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotify(PVOID Argument1)
{
  if ( !g_SimulatorCallbackObject )
    return 3221225473LL;
  ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
  return 0LL;
}
