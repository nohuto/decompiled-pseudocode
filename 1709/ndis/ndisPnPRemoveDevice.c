/*
 * XREFs of ndisPnPRemoveDevice @ 0x1C00FE208
 * Callers:
 *     ndisPnPRemoveDeviceEx @ 0x1C00AA814 (ndisPnPRemoveDeviceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0001988 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisReferenceDriver @ 0x1C0002828 (ndisReferenceDriver.c)
 *     ndisSetupWmiNode @ 0x1C0005800 (ndisSetupWmiNode.c)
 *     NdisResetEvent @ 0x1C001B140 (NdisResetEvent.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005F0F4 (ndisIMDeleteIfStackEntry.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C00AA8A0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00AB714 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMHaltMiniport @ 0x1C00AB944 (ndisMHaltMiniport.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ndisIovTeardownVf @ 0x1C00EFB7C (ndisIovTeardownVf.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *BugCheckParameter2, unsigned __int8 a2)
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
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x55u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)BugCheckParameter2, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  DriverHandle = (__int64)BugCheckParameter2->DriverHandle;
  if ( DriverHandle )
  {
    if ( (*(_BYTE *)(DriverHandle + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(DriverHandle + 416), Executive, 0, 0, 0LL);
      v3 = 1;
      *(_QWORD *)(DriverHandle + 472) = KeGetCurrentThread();
    }
    ndisCancelWaitWake((__int64)BugCheckParameter2);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DriverHandle + 392));
    for ( i = *(struct _NDIS_MINIPORT_BLOCK **)(DriverHandle + 16); i && i != BugCheckParameter2; i = i->NextMiniport )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)(DriverHandle + 392), v6);
    if ( i != BugCheckParameter2 || BugCheckParameter2->Ref.Closing == 1 )
    {
      BugCheckParameter2->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle);
      NdisResetEvent(&BugCheckParameter2->OpenReadyEvent);
      pAdapterInstanceName = (const void **)BugCheckParameter2->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        ndisSetupWmiNode(
          (__int64)BugCheckParameter2,
          pAdapterInstanceName,
          BugCheckParameter2->MiniportName.Length + 2,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          WnodeEventItem);
        v9 = WnodeEventItem[0];
        if ( WnodeEventItem[0] )
        {
          v10 = (unsigned __int16 *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
          *v10 = BugCheckParameter2->MiniportName.Length;
          memmove(v10 + 1, BugCheckParameter2->MiniportName.Buffer, BugCheckParameter2->MiniportName.Length);
          v11 = IoWMIWriteEvent(v9);
          v13 = v11;
          if ( v11 < 0 )
          {
            if ( (unsigned __int8)byte_1C0098759 >= 2u )
              WPP_SF_(0x56u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
              McTemplateK0jqxq(
                v12,
                &IndicateAdapterRemovalFailed,
                &BugCheckParameter2->InterfaceGuid,
                (__int64)&BugCheckParameter2->InterfaceGuid,
                BugCheckParameter2->IfIndex,
                BugCheckParameter2->NetLuid.Value,
                v13);
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&BugCheckParameter2->BindEngine);
      if ( Ndis::BindState::SetPause(
             &BugCheckParameter2->Bindings.Miniport,
             DatapathPaused,
             PauseReason_RemovingMiniport)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(BugCheckParameter2, (struct NDIS_PNPTRACE_LOCALS *)v17);
        WPP_SF_Zq(0x57u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (const wchar_t *)v17[1], v17[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates(&BugCheckParameter2->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&BugCheckParameter2->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = BugCheckParameter2->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf((__int64)BugCheckParameter2);
      ndisMSetMiniportReadyForBinding((__int64)BugCheckParameter2, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (BugCheckParameter2->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry((__int64)BugCheckParameter2);
      ndisIovDeleteDefaultNicSwitch(BugCheckParameter2);
      ndisMHaltMiniport((ULONG_PTR)BugCheckParameter2);
      ndisMCleanupMiniportBlockOnStop((__int64)BugCheckParameter2);
      ndisDereferenceDriver(DriverHandle, 0);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v18;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &BugCheckParameter2->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      *(_QWORD *)(DriverHandle + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DriverHandle + 416), 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice((__int64)BugCheckParameter2);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x58u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)BugCheckParameter2);
}
