/*
 * XREFs of ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x1800CA210
 * Callers:
 *     <none>
 * Callees:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180025D68 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 */

__int64 __fastcall CManipulationManager::s_ThreadMain(CManipulationManager *Parameter)
{
  CManipulationManager::ManipulationThreadMain(Parameter);
  return 0LL;
}
