/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00DAE60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 5160, 0LL);
  if ( Ndis::BindState::SetBinding(*((Ndis::BindState **)a1 + 119), BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    WPP_SF_Zq(
      0xEu,
      &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids,
      *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)a1 + 119) + 80LL) + 32LL),
      **((_QWORD **)a1 + 119));
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5136), RunSynchronous, 0);
}
