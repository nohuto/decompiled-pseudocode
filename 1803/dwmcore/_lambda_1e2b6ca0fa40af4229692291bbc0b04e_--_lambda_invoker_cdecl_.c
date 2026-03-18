/*
 * XREFs of _lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_ @ 0x1801CE0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180025BC0 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801CF1C4 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_(CManipulationManager *this)
{
  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&CriticalSection);
  byte_1802D66F4 = 1;
  LeaveCriticalSection(&CriticalSection);
  EnterCriticalSection(&stru_1802D66B8);
  byte_1802D66B4 = 1;
  LeaveCriticalSection(&stru_1802D66B8);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput(this);
  return 0LL;
}
