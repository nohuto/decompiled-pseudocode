/*
 * XREFs of ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x1800CC260
 * Callers:
 *     <none>
 * Callees:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x18004E478 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 */

__int64 __fastcall CManipulationManager::s_ThreadMain(CManipulationManager *Parameter)
{
  CManipulationManager::ManipulationThreadMain(Parameter);
  return 0LL;
}
