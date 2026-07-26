/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00E4E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 5160, 0LL);
  if ( Ndis::BindState::SetBinding(*((Ndis::BindState **)a1 + 119), BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    WPP_SF_Zq(
      0xEu,
      &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids,
      *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)a1 + 119) + 80LL) + 24LL),
      **((_QWORD **)a1 + 119));
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5136), RunSynchronous, 0);
}
