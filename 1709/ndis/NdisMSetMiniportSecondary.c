/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1C00E7B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C007952C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  NDIS_STATUS v4; // esi

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x61u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  if ( *((_QWORD *)MiniportHandle + 473) == *((_QWORD *)PrimaryMiniportHandle + 473)
    && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    *((_DWORD *)MiniportHandle + 30) |= 0x10000000u;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)MiniportHandle + 5160, 0LL);
    if ( Ndis::BindState::SetBinding(
           (Ndis::BindState *)((char *)MiniportHandle + 5064),
           BindingDisabled,
           Reason_SecondaryMiniport)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_Zq(
        0x62u,
        &WPP_89f39f5878d93d725c4978a535989123_Traceguids,
        *((const wchar_t **)MiniportHandle + 485),
        MiniportHandle);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5136));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5136), RunSynchronous, 0);
    *((_QWORD *)MiniportHandle + 22) = PrimaryMiniportHandle;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x63u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  NdisTraceLoggingRareMiniportPath();
  return v4;
}
