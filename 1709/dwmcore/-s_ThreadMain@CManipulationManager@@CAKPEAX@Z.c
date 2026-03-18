/*
 * XREFs of ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x180198DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1801962CC (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 */

__int64 __fastcall CManipulationManager::s_ThreadMain(CManipulationManager *Parameter)
{
  CManipulationManager::ManipulationThreadMain(Parameter);
  return 0LL;
}
