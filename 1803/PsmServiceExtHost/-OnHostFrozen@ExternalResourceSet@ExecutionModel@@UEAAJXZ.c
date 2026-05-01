/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18005C490
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800032E8 (-CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18005C618 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(this);
  ExecutionModel::ExternalResourceSet::RunWatchdog(this);
  return 0LL;
}
