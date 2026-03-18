/*
 * XREFs of ?_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z @ 0x1C009FC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C009F7B4 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_SleepStudyWnfCallback(
        _MX_WNF_SUBSCRIPTION_CONTEXT *SubscriptionContext,
        FxPkgPnp *CallbackContext)
{
  FxPkgPnp::SleepStudyEvaluateDripsConstraint(CallbackContext, 0);
  return 0LL;
}
