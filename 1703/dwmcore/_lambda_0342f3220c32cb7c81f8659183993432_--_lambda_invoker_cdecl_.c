/*
 * XREFs of _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x180189D60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18004E3CC (-OnInput@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_(CManipulationManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_18023E7E8);
  byte_18023E7E4 = 1;
  LeaveCriticalSection(&stru_18023E7E8);
  EnterCriticalSection(&stru_18023E7A8);
  byte_18023E7A4 = 1;
  LeaveCriticalSection(&stru_18023E7A8);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput((unsigned __int64)this, v2, v3);
  return 0LL;
}
