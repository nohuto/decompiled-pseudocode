/*
 * XREFs of Simulator_TestNotify @ 0x1C005B98C
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C005B3AC (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005B63C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005B734 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C005B804 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C005B8A8 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AF294 (Simulator_NotifyTablesAreLoaded.c)
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
