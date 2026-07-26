/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00C67C8
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00121B4 (ndisIfDeregisterInterfaceEx.c)
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 *     NdisWdfMiniportStarted @ 0x1C0062410 (NdisWdfMiniportStarted.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C6274 (ndisStartDeviceSynchronous.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C6320 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E5C1C (ndisIMInitializeDeviceInstance_ea_1C00E5C1C.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C0020E18 (ndisInitialBindCompleted.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        __int64 a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  bool v11; // cf
  const wchar_t *v12; // r9
  unsigned __int16 v13; // cx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5160, 0LL);
  v8 = a1 + 5064;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a1 + 5096);
    v10 = v9 & ~a3;
    *(_DWORD *)(a1 + 5096) = v10;
    if ( (v9 != 0) != (v10 != 0) || !*(_QWORD *)v8 )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v9, v10);
      v11 = (unsigned __int8)byte_1C0099623 < 4u;
      *(_BYTE *)(*(_QWORD *)v8 + 5240LL) = 1;
      if ( !v11 )
      {
        if ( a1 )
          v12 = *(const wchar_t **)(a1 + 3880);
        else
          v12 = 0LL;
        v13 = 261;
LABEL_23:
        WPP_SF_DZq(v13, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a3, v12, a1);
      }
    }
  }
  else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5064), BindingDisabled, a3)
         && (unsigned __int8)byte_1C0099623 >= 4u )
  {
    if ( a1 )
      v12 = *(const wchar_t **)(a1 + 3880);
    else
      v12 = 0LL;
    v13 = 262;
    goto LABEL_23;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5136), a4, 0);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
}
