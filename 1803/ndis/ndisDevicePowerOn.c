/*
 * XREFs of ndisDevicePowerOn @ 0x1C0100560
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetEvent @ 0x1C0008C90 (NdisSetEvent.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisSignalD0RequestComplete @ 0x1C000F564 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C000F744 (ndisReturnQueuedLowPowerNbls.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F7B4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0016890 (ndisSetMediaDisconnectTimer.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B05E4 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B068C (ndisNotifyDevicePowerStateChange.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B0810 (ndisQuerySetMiniportDeviceState.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00C129C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00C3A04 (ndisSetDeviceInterfaceState.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00EEAE0 (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4F0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  char v2; // bl
  __int64 v4; // rcx
  _IRP *v5; // r13
  int Status; // edi
  POWER_STATE v7; // r12d
  char v8; // bl
  int SetMiniportDeviceState; // eax
  int v10; // r15d
  KIRQL v11; // al
  KIRQL v12; // bl
  __int64 v13; // rdx
  KIRQL v14; // di
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  _DEVICE_OBJECT *v21; // rcx
  POWER_STATE v22; // r8d
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 v25; // al
  KIRQL v26; // al
  struct _KTHREAD *v27; // rdx
  KIRQL v28; // bl
  KIRQL v29; // al
  KIRQL v30; // bl
  __int64 v31; // rax
  KIRQL v32; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v34; // bl
  KIRQL v35; // al
  KIRQL v36; // bl
  KSPIN_LOCK *v37; // rcx
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int16 v39; // [rsp+58h] [rbp-B0h]
  char v40; // [rsp+5Ah] [rbp-AEh]
  int v41; // [rsp+5Ch] [rbp-ACh]
  unsigned int i; // [rsp+60h] [rbp-A8h]
  int v43; // [rsp+64h] [rbp-A4h]
  BOOL v44[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v45[20]; // [rsp+78h] [rbp-90h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+118h] [rbp+10h] BYREF
  __int64 v47; // [rsp+188h] [rbp+80h] BYREF
  int v48; // [rsp+190h] [rbp+88h]
  _QWORD v49[5]; // [rsp+198h] [rbp+90h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)(a1 - 5424);
  v2 = 0;
  v43 = 0;
  v40 = 0;
  v39 = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a1 - 5304) & 0x80u) != 0 )
  {
    v5 = 0LL;
    v41 = 0;
    Status = 0;
    v7.SystemState = PowerSystemWorking;
  }
  else
  {
    v5 = *(_IRP **)(a1 + 32);
    Status = v5->IoStatus.Status;
    v41 = Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_DWORD *)(a1 - 3904) != 1 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x40u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        v4,
        &PowerOnMiniportNotStarted,
        (const GUID *)(a1 - 1392),
        a1 - 1392,
        *(_DWORD *)(a1 - 1344),
        *(_QWORD *)(a1 - 1376),
        44);
    v21 = *(_DEVICE_OBJECT **)(a1 - 1576);
    v22.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(a1 - 1532) = v22;
    PoSetPowerState(v21, DevicePowerState, v22);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a1 - 168);
    ndisScheduleD0CompleteSignalWorkItem((__int64)v1, 0);
    IofCompleteRequest(v5, 0);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(a1 - 5300) & 0x10) == 0 )
  {
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_qD(0x43u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(0x44u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
      if ( *(_DWORD *)(a1 - 1532) == 1 )
      {
        if ( ndisIsMiniportStarted(v1) && *(_DWORD *)(a1 - 3904) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(a1 - 1672));
          v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(a1 - 4904) = CurrentThread;
          v34 = v32;
          LOBYTE(CurrentThread) = 4;
          *(_DWORD *)(a1 - 3568) = 1706325;
          ndisMRestoreOpenHandlers((__int64)v1, (__int64)CurrentThread);
          *(_QWORD *)(a1 - 4904) = 0LL;
          *(_DWORD *)(a1 - 3568) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 - 5328), v34);
          Status = v41;
          HIBYTE(v39) = 0;
          v2 = 1;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099615 >= 4u )
          WPP_SF_q(0x45u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          McTemplateK0jqxq(
            v4,
            &MiniportPoweringUp,
            (const GUID *)(a1 - 1392),
            a1 - 1392,
            *(_DWORD *)(a1 - 1344),
            *(_QWORD *)(a1 - 1376),
            132);
        if ( (*(_DWORD *)(a1 - 5300) & 0x20) != 0 )
        {
          if ( (ndisAoAcCapable || ndisAoAcTest)
            && ((v25 = *(_BYTE *)(a1 - 5392), v25 > 6u) || v25 == 6 && *(_BYTE *)(a1 - 5391) >= 0x1Eu) )
          {
            v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
            v27 = KeGetCurrentThread();
            *(_QWORD *)(a1 - 4904) = v27;
            v28 = v26;
            LOBYTE(v27) = 4;
            *(_DWORD *)(a1 - 3568) = 1706131;
            ndisMRestoreOpenHandlers((__int64)v1, (__int64)v27);
            *(_QWORD *)(a1 - 4904) = 0LL;
            *(_DWORD *)(a1 - 3568) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 - 5328), v28);
            v8 = 1;
            LOBYTE(v39) = 1;
          }
          else
          {
            v8 = 0;
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState((__int64)v1, v7.SystemState, -50265855, 1u);
          v10 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C0099615 >= 4u )
          {
            LODWORD(v38) = SetMiniportDeviceState;
            WPP_SF_qdD(0x46u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1, v7.SystemState, v38);
          }
          if ( v10 )
          {
            if ( v8 )
            {
              v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
              *(_QWORD *)(a1 - 4904) = KeGetCurrentThread();
              v30 = v29;
              *(_DWORD *)(a1 - 3568) = 1706157;
              ndisMSwapOpenHandlers((__int64)v1, 4u);
              *(_QWORD *)(a1 - 4904) = 0LL;
              *(_DWORD *)(a1 - 3568) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 - 5328), v30);
              LOBYTE(v39) = 0;
            }
          }
          else
          {
            *(POWER_STATE *)(a1 - 1532) = v7;
          }
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
          *(_QWORD *)(a1 - 4904) = KeGetCurrentThread();
          v12 = v11;
          *(_DWORD *)(a1 - 3568) = 1706166;
          ndisSetWakeUpTimer((__int64)v1);
          *(_QWORD *)(a1 - 4904) = 0LL;
          *(_DWORD *)(a1 - 3568) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 - 5328), v12);
          Status = v41;
        }
        else if ( (*(_WORD *)(*(_QWORD *)(a1 - 1640) + 26LL) & 1) == 0 && (*(_DWORD *)(a1 - 5300) & 0x4000) != 0 )
        {
          v10 = ndisPmInitializeMiniport(v1);
        }
        else
        {
          v10 = 0;
        }
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C0099615 >= 2u )
            WPP_SF_qD(0x48u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1, v10);
          if ( (*(_DWORD *)(a1 - 5304) & 0x80u) != 0 )
          {
            Status = -1073741823;
            v41 = -1073741823;
          }
          else
          {
            v5->IoStatus.Status = -1073741823;
          }
          *(_QWORD *)(a1 - 1336) = 2LL;
          if ( ndisMReferenceIfBlock((__int64)v1, 0xCu) )
          {
            v31 = *(_QWORD *)(a1 - 1360);
            if ( *(_DWORD *)(v31 + 1112) != 2 )
            {
              *(_DWORD *)(v31 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(a1 - 1360) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification((__int64)v1);
              v43 = 1;
            }
            ndisMDereferenceIfBlock((__int64)v1, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v40 = 1;
          if ( ndisIsMiniportStarted(v1) )
          {
            NdisSetEvent((PNDIS_EVENT)(a1 - 1672));
            v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
            *(_QWORD *)(a1 - 4904) = KeGetCurrentThread();
            *(_DWORD *)(a1 - 3568) = 1706197;
            if ( !(_BYTE)v39 )
            {
              LOBYTE(v13) = 4;
              ndisMRestoreOpenHandlers((__int64)v1, v13);
            }
            v43 = (unsigned __int8)ndisIfSetInterfaceState((__int64)v1, 1, v14);
            *(_QWORD *)(a1 - 4904) = 0LL;
            *(_DWORD *)(a1 - 3568) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 - 5328), v14);
            _m_prefetchw((const void *)(a1 - 968));
            if ( (_InterlockedOr((volatile signed __int32 *)(a1 - 968), 0) & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState((__int64)v1, 1u);
              _InterlockedAnd((volatile signed __int32 *)(a1 - 968), 0xFFFFFFEF);
            }
            HIBYTE(v39) = 1;
            v44[0] = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(v1, v15, v44, v16);
            if ( *(_BYTE *)(a1 - 5392) < 6u )
              ndisQueryMediaStatus(v1);
          }
          *(POWER_STATE *)(a1 - 1532) = v7;
          if ( (unsigned __int8)byte_1C0099615 >= 4u )
            WPP_SF_qD(0x47u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1, v7.SystemState);
          NDIS_COUNT_POWER_TRANSITION(v1, v7.SystemState);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            McTemplateK0jqxqq(
              v4,
              &DevicePowerStateChange,
              (const GUID *)(a1 - 1392),
              a1 - 1392,
              *(_DWORD *)(a1 - 1344),
              *(_QWORD *)(a1 - 1376),
              1,
              v7.SystemState);
          if ( (*(_DWORD *)(a1 - 5304) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(a1 - 1576), DevicePowerState, v7);
          Status = v41;
        }
        v2 = HIBYTE(v39);
      }
    }
    if ( (*(_DWORD *)(a1 - 5304) & 0x80u) == 0 )
    {
      Status = v5->IoStatus.Status;
      v41 = Status;
      IofCompleteRequest(v5, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_qD(0x49u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        McTemplateK0jqxqqq(
          v4,
          &DevicePowerOnFailed,
          (const GUID *)(a1 - 1392),
          a1 - 1392,
          *(_DWORD *)(a1 - 1344),
          *(_QWORD *)(a1 - 1376),
          Status,
          128,
          0);
      ndisMiniportFatalError((__int64)v1, 0x4Au);
    }
    if ( *(int *)(a1 - 3552) < 0 )
      ndisReturnQueuedLowPowerNbls((__int64)v1, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a1 - 168);
    if ( v2 )
    {
      ndisIssueNetEventSetPowerEvent(v1, v7.SystemState, (*(_DWORD *)(a1 - 5304) & 0x80) == 0);
      ndisNotifyDevicePowerStateChange((__int64)v1, v7.SystemState);
      if ( (*(_DWORD *)(a1 - 5300) & 0x10000000) != 0 && (*(_DWORD *)(a1 - 5304) & 0x20000000) != 0 )
      {
        v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
        *(_QWORD *)(a1 - 4904) = KeGetCurrentThread();
        v36 = v35;
        while ( 1 )
        {
          *(_DWORD *)(a1 - 3568) = 1706409;
          v37 = (KSPIN_LOCK *)(a1 - 5328);
          if ( !*(_BYTE *)(a1 - 5335) )
            break;
          *(_QWORD *)(a1 - 4904) = 0LL;
          *(_DWORD *)(a1 - 3568) = 0;
          KeReleaseSpinLock(v37, v36);
          for ( i = 0; i < 0x32; ++i )
            ;
          v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 5328));
          *(_QWORD *)(a1 - 4904) = KeGetCurrentThread();
        }
        *(_BYTE *)(a1 - 5335) = 1;
        *(_DWORD *)(a1 - 3564) = 1706409;
        *(_QWORD *)(a1 - 3560) = KeGetCurrentThread();
        *(_QWORD *)(a1 - 4904) = 0LL;
        *(_DWORD *)(a1 - 3568) = 0;
        KeReleaseSpinLockFromDpcLevel(v37);
        *(_DWORD *)(a1 - 5304) &= ~0x20000000u;
        memset(v49, 0, sizeof(v49));
        LODWORD(v49[1]) = *(_DWORD *)(a1 - 5076);
        v49[2] = *(_QWORD *)(a1 - 2656);
        v49[3] = *(_QWORD *)(a1 - 2648);
        v49[4] = *(_QWORD *)(a1 - 4612);
        v49[0] = 0x100280180LL;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Flags |= 8u;
        StatusIndication.StatusBuffer = v49;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = v1;
        StatusIndication.StatusCode = 1073807383;
        StatusIndication.StatusBufferSize = 40;
        NdisMIndicateStatusEx(v1, &StatusIndication);
        *(_BYTE *)(a1 - 5335) = 0;
        *(_DWORD *)(a1 - 3564) = 0;
        *(_QWORD *)(a1 - 3560) = 0LL;
        if ( v36 != 2 )
          KeLowerIrql(v36);
        Status = v41;
      }
      if ( (*(_DWORD *)(a1 - 5304) & 0x20000000) == 0 && HIBYTE(v39) )
        ndisSetMediaDisconnectTimer((__int64)v1);
    }
    ndisSignalD0RequestComplete(v1, Status);
    ndisMSetMiniportReadyForBinding((__int64)v1, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v40 )
    {
      v19 = *(_DWORD *)(a1 - 2732);
      if ( (v19 & 0x100) != 0 )
      {
        *(_DWORD *)(a1 - 2732) = v19 & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a1 - 288));
        if ( Ndis::BindState::SetPause((Ndis::BindState *)(a1 - 360), DatapathRunning, PauseReason_LowPower)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v1, (struct NDIS_PNPTRACE_LOCALS *)v45);
          WPP_SF_Zq(0x4Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (const wchar_t *)v45[1], v45[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 - 288));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 - 288), RunSynchronous, 1);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v43)
      && ndisIsMiniportStarted(v1)
      && *(_DWORD *)(a1 - 3904) == 1
      && ndisMReferenceIfBlock((__int64)v1, 0xDu) )
    {
      v20 = *(_QWORD *)(a1 - 1360);
      v48 = 0;
      v47 = 786816LL;
      HIDWORD(v47) = *(_DWORD *)(v20 + 1112);
      v48 = *(_DWORD *)(v20 + 1116);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v47;
      StatusIndication.SourceHandle = v1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(v1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)v1, MPIFREF_DEVPOWERUP);
    }
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x4Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
LABEL_60:
    ndisDereferenceMiniport((__int64)v1, 0xCu, v17, v18);
    ndisDereferencePackage((__int64)&ndisPkgs);
    return;
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x41u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    McTemplateK0jqxq(
      v4,
      &PowerOnMiniportRemoved,
      (const GUID *)(a1 - 1392),
      a1 - 1392,
      *(_DWORD *)(a1 - 1344),
      *(_QWORD *)(a1 - 1376),
      86);
  IofCompleteRequest(v5, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a1 - 168);
  ndisSignalD0RequestComplete(v1, 0);
  ndisDereferenceMiniport((__int64)v1, 0xCu, v23, v24);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x42u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
}
