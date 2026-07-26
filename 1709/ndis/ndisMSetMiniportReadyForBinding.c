/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00C103C
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 *     ndisPnPPortActivation @ 0x1C003C5AC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003CB2C (ndisPnPPortDeactivation.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C0B70 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E43B8 (ndisIMInitializeDeviceInstance_ea_1C00E43B8.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisPmHaltMiniport @ 0x1C010DDEC (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C0012CC8 (ndisInitialBindCompleted.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        __int64 a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  int v8; // r8d
  int v9; // r9d
  bool v10; // cf
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
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v9);
      v10 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)(a1 + 5064) + 5240LL) = 1;
      if ( !v10 )
      {
        if ( a1 )
          v11 = *(const wchar_t **)(a1 + 3880);
        else
          v11 = 0LL;
        v12 = 258;
LABEL_23:
        WPP_SF_DZq(v12, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a3, v11, a1);
      }
    }
  }
  else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5064), BindingDisabled, a3)
         && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    if ( a1 )
      v11 = *(const wchar_t **)(a1 + 3880);
    else
      v11 = 0LL;
    v12 = 259;
    goto LABEL_23;
  }
  Ndis::BindEngine::ApplyRules((Ndis::BindEngine *)(a1 + 5136));
  ExReleasePushLockExclusiveEx(a1 + 5160, 0LL);
  KeLeaveCriticalRegion();
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5136), a4, 0);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
}
