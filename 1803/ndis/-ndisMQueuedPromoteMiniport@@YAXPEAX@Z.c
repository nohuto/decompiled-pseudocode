/*
 * XREFs of ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00E92A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMQueuedPromoteMiniport(char *a1)
{
  bool v2; // al
  const wchar_t *v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5160, 0LL);
  v2 = Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5064), BindingEnabled, Reason_SecondaryMiniport);
  v3 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C0099623 >= 4u )
  {
    if ( a1 )
      v3 = (const wchar_t *)*((_QWORD *)a1 + 485);
    WPP_SF_Zq(0x67u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v3, a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5136), RunSynchronous, 0);
  IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), 1u);
  ndisDereferenceMiniport((__int64)a1, 0x21u, v4, v5);
}
