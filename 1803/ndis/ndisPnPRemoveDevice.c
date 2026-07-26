/*
 * XREFs of ndisPnPRemoveDevice @ 0x1C0101968
 * Callers:
 *     ndisPnPRemoveDeviceEx @ 0x1C00B1DD0 (ndisPnPRemoveDeviceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008CE0 (NdisResetEvent.c)
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0012634 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     ndisReferenceDriver @ 0x1C0025174 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005FBBC (ndisIMDeleteIfStackEntry.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C00B1E5C (ndisPnPCompleteRemoveDevice.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00B1FFC (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMHaltMiniport @ 0x1C00B2E4C (ndisMHaltMiniport.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisIovTeardownVf @ 0x1C00F279C (ndisIovTeardownVf.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4F0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle, unsigned __int8 a2)
{
  char v3; // r12
  __int64 DriverHandle; // rdi
  KIRQL v6; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rsi
  const void **pAdapterInstanceName; // rdx
  PVOID v9; // rsi
  unsigned __int16 *v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  char v13; // r14
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PVOID WnodeEventItem[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v18; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x59u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportAdapterHandle, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  DriverHandle = (__int64)MiniportAdapterHandle->DriverHandle;
  if ( DriverHandle )
  {
    if ( (*(_BYTE *)(DriverHandle + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(DriverHandle + 416), Executive, 0, 0, 0LL);
      v3 = 1;
      *(_QWORD *)(DriverHandle + 472) = KeGetCurrentThread();
    }
    ndisCancelWaitWake((__int64)MiniportAdapterHandle);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DriverHandle + 392));
    for ( i = *(struct _NDIS_MINIPORT_BLOCK **)(DriverHandle + 16); i && i != MiniportAdapterHandle; i = i->NextMiniport )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)(DriverHandle + 392), v6);
    if ( i != MiniportAdapterHandle || MiniportAdapterHandle->Ref.Closing == 1 )
    {
      MiniportAdapterHandle->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle, 1u);
      NdisResetEvent(&MiniportAdapterHandle->OpenReadyEvent);
      pAdapterInstanceName = (const void **)MiniportAdapterHandle->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        ndisSetupWmiNode(
          (__int64)MiniportAdapterHandle,
          pAdapterInstanceName,
          MiniportAdapterHandle->MiniportName.Length + 2,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          WnodeEventItem);
        v9 = WnodeEventItem[0];
        if ( WnodeEventItem[0] )
        {
          v10 = (unsigned __int16 *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
          *v10 = MiniportAdapterHandle->MiniportName.Length;
          memmove(v10 + 1, MiniportAdapterHandle->MiniportName.Buffer, MiniportAdapterHandle->MiniportName.Length);
          v11 = IoWMIWriteEvent(v9);
          v13 = v11;
          if ( v11 < 0 )
          {
            if ( (unsigned __int8)byte_1C0099619 >= 2u )
              WPP_SF_(0x5Au, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
              McTemplateK0jqxq(
                v12,
                &IndicateAdapterRemovalFailed,
                &MiniportAdapterHandle->InterfaceGuid,
                (__int64)&MiniportAdapterHandle->InterfaceGuid,
                MiniportAdapterHandle->IfIndex,
                MiniportAdapterHandle->NetLuid.Value,
                v13);
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&MiniportAdapterHandle->BindEngine);
      if ( Ndis::BindState::SetPause(
             &MiniportAdapterHandle->Bindings.Miniport,
             DatapathPaused,
             PauseReason_RemovingMiniport)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(MiniportAdapterHandle, (struct NDIS_PNPTRACE_LOCALS *)v17);
        WPP_SF_Zq(0x5Bu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (const wchar_t *)v17[1], v17[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates(&MiniportAdapterHandle->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&MiniportAdapterHandle->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = MiniportAdapterHandle->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf((__int64)MiniportAdapterHandle);
      ndisMSetMiniportReadyForBinding((__int64)MiniportAdapterHandle, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (MiniportAdapterHandle->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry((__int64)MiniportAdapterHandle);
      ndisIovDeleteDefaultNicSwitch(MiniportAdapterHandle);
      ndisMHaltMiniport((ULONG_PTR)MiniportAdapterHandle);
      ndisMCleanupMiniportBlockOnStop((__int64)MiniportAdapterHandle);
      ndisDereferenceDriver(DriverHandle, 0);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v18;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &MiniportAdapterHandle->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      *(_QWORD *)(DriverHandle + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DriverHandle + 416), 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice((__int64)MiniportAdapterHandle);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x5Cu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportAdapterHandle);
}
