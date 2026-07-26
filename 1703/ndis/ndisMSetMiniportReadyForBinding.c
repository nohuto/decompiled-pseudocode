/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00255B4 (ndisIfDeregisterInterfaceEx.c)
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003FFFC (ndisPnPPortDeactivation.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AB7AC (ndisStartDeviceSynchronous.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00AC760 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00DA398 (ndisIMInitializeDeviceInstance_ea_1C00DA398.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C0104E6C (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C0016010 (ndisInitialBindCompleted.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        __int64 a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  int v8; // r8d
  int v9; // r9d
  char v10; // cl
  const wchar_t *v11; // r9
  unsigned __int16 v12; // cx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5160, 0LL);
  if ( a2 )
  {
    v8 = *(_DWORD *)(a1 + 5096);
    v9 = v8 & ~a3;
    *(_DWORD *)(a1 + 5096) = v9;
    if ( (v8 != 0) != (v9 != 0) || !*(_QWORD *)(a1 + 5064) )
    {
      v10 = byte_1C0092623;
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
      {
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v9);
        v10 = byte_1C0092623;
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 5064) + 5240LL) = 1;
      if ( (unsigned __int8)v10 >= 4u )
      {
        if ( a1 )
          v11 = *(const wchar_t **)(a1 + 3880);
        else
          v11 = 0LL;
        v12 = 243;
LABEL_23:
        WPP_SF_DZq(v12, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a3, v11, a1);
      }
    }
  }
  else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5064), BindingDisabled, a3)
         && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    if ( a1 )
      v11 = *(const wchar_t **)(a1 + 3880);
    else
      v11 = 0LL;
    v12 = 244;
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
