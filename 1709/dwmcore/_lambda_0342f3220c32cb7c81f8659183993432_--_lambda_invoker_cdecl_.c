/*
 * XREFs of _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x180195420
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180196BD4 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_(CManipulationManager *this)
{
  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_180272558);
  byte_180272554 = 1;
  LeaveCriticalSection(&stru_180272558);
  EnterCriticalSection(&stru_180272518);
  byte_180272514 = 1;
  LeaveCriticalSection(&stru_180272518);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput(this);
  return 0LL;
}
