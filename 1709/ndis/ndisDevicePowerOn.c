/*
 * XREFs of ndisDevicePowerOn @ 0x1C01053F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C0002968 (ndisSetWakeUpTimer.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     NdisSetEvent @ 0x1C0012C50 (NdisSetEvent.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001EADC (ndisSetMediaDisconnectTimer.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F72C (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSignalD0RequestComplete @ 0x1C001F758 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C001F938 (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F9A8 (ndisMRestoreOpenHandlers.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0065A10 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00AEDDC (ndisSetDeviceInterfaceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00AEFC8 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C6398 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00C641C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00C64C0 (ndisNotifyDevicePowerStateChange.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00C6640 (ndisQuerySetMiniportDeviceState.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00EBF20 (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 v4; // rcx
  _IRP *v5; // r15
  int Status; // r13d
  POWER_STATE v7; // r12d
  char v8; // bl
  int SetMiniportDeviceState; // eax
  int v10; // r14d
  KIRQL v11; // al
  KIRQL v12; // bl
  KIRQL v13; // di
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int v17; // eax
  __int64 v18; // rcx
  _DEVICE_OBJECT *v19; // rcx
  POWER_STATE v20; // r8d
  unsigned __int8 v21; // al
  KIRQL v22; // al
  KIRQL v23; // bl
  KIRQL v24; // al
  KIRQL v25; // bl
  __int64 v26; // rax
  KIRQL v27; // al
  KIRQL v28; // bl
  KIRQL v29; // al
  KIRQL v30; // bl
  KSPIN_LOCK *v31; // rcx
  __int64 v32; // [rsp+28h] [rbp-E0h]
  __int16 v33; // [rsp+58h] [rbp-B0h]
  char v34; // [rsp+5Ah] [rbp-AEh]
  unsigned int i; // [rsp+5Ch] [rbp-ACh]
  int v36; // [rsp+60h] [rbp-A8h]
  BOOL v37; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v38[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v40; // [rsp+178h] [rbp+70h] BYREF
  int v41; // [rsp+180h] [rbp+78h]
  _QWORD v42[5]; // [rsp+188h] [rbp+80h] BYREF

  v1 = a1 - 5416;
  v2 = 0;
  v36 = 0;
  v34 = 0;
  v33 = 0;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    v7.SystemState = PowerSystemWorking;
  }
  else
  {
    v5 = *(_IRP **)(a1 + 32);
    Status = v5->IoStatus.Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_DWORD *)(v1 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x40u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        v4,
        &PowerOnMiniportNotStarted,
        (const GUID *)(v1 + 4032),
        v1 + 4032,
        *(_DWORD *)(v1 + 4080),
        *(_QWORD *)(v1 + 4048),
        36);
    v19 = *(_DEVICE_OBJECT **)(v1 + 3848);
    v20.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(v1 + 3892) = v20;
    PoSetPowerState(v19, DevicePowerState, v20);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5256);
    ndisScheduleD0CompleteSignalWorkItem(v1, 0);
    IofCompleteRequest(v5, 0);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(v1 + 124) & 0x10) == 0 )
  {
    v8 = 0;
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_qD(0x43u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(0x44u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
      if ( *(_DWORD *)(v1 + 3892) == 1 )
      {
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) && *(_DWORD *)(v1 + 1520) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(v1 + 3752));
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
          v28 = v27;
          *(_DWORD *)(v1 + 1856) = 1706317;
          ndisMRestoreOpenHandlers(v1, 4u);
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v28);
          v2 = 1;
          HIBYTE(v33) = 0;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098755 >= 4u )
          WPP_SF_q(0x45u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          McTemplateK0jqxq(
            v4,
            &MiniportPoweringUp,
            (const GUID *)(v1 + 4032),
            v1 + 4032,
            *(_DWORD *)(v1 + 4080),
            *(_QWORD *)(v1 + 4048),
            124);
        if ( (*(_DWORD *)(v1 + 124) & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            v21 = *(_BYTE *)(v1 + 32);
            if ( v21 > 6u || v21 == 6 && *(_BYTE *)(v1 + 33) >= 0x1Eu )
            {
              v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
              v23 = v22;
              *(_DWORD *)(v1 + 1856) = 1706123;
              ndisMRestoreOpenHandlers(v1, 4u);
              *(_QWORD *)(v1 + 520) = 0LL;
              *(_DWORD *)(v1 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v23);
              v8 = 1;
              LOBYTE(v33) = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v1, v7.SystemState, -50265855, 1u);
          v10 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
          {
            LODWORD(v32) = SetMiniportDeviceState;
            WPP_SF_qdD(0x46u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1, v7.SystemState, v32);
          }
          if ( v10 )
          {
            if ( v8 )
            {
              v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
              *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
              v25 = v24;
              *(_DWORD *)(v1 + 1856) = 1706149;
              ndisMSwapOpenHandlers(v1, 4u);
              *(_QWORD *)(v1 + 520) = 0LL;
              *(_DWORD *)(v1 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v25);
              LOBYTE(v33) = 0;
            }
          }
          else
          {
            *(POWER_STATE *)(v1 + 3892) = v7;
          }
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
          *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
          v12 = v11;
          *(_DWORD *)(v1 + 1856) = 1706158;
          ndisSetWakeUpTimer(v1);
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        }
        else if ( (*(_WORD *)(*(_QWORD *)(v1 + 3784) + 26LL) & 1) == 0 && (*(_DWORD *)(v1 + 124) & 0x4000) != 0 )
        {
          v10 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v1);
        }
        else
        {
          v10 = 0;
        }
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C0098755 >= 2u )
            WPP_SF_qD(0x48u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1, v10);
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) != 0 )
            Status = -1073741823;
          else
            v5->IoStatus.Status = -1073741823;
          *(_QWORD *)(v1 + 4088) = 2LL;
          if ( ndisMReferenceIfBlock(v1, 0xCu) )
          {
            v26 = *(_QWORD *)(v1 + 4064);
            if ( *(_DWORD *)(v26 + 1112) != 2 )
            {
              *(_DWORD *)(v26 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification(v1);
              v36 = 1;
            }
            ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v34 = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1) )
          {
            NdisSetEvent((PNDIS_EVENT)(v1 + 3752));
            v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
            *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
            *(_DWORD *)(v1 + 1856) = 1706189;
            if ( !(_BYTE)v33 )
              ndisMRestoreOpenHandlers(v1, 4u);
            v36 = (unsigned __int8)ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v1, 1, v13);
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v13);
            _m_prefetchw((const void *)(v1 + 4456));
            v15 = *(_DWORD *)(v1 + 4456);
            do
            {
              v16 = v15;
              v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4456), v15, v15);
            }
            while ( v16 != v15 );
            if ( (v15 & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState(v1, 1u);
              _InterlockedAnd((volatile signed __int32 *)(v1 + 4456), 0xFFFFFFEF);
            }
            HIBYTE(v33) = 1;
            v37 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports((struct _NDIS_MINIPORT_BLOCK *)v1, v14, &v37);
            if ( *(_BYTE *)(v1 + 32) < 6u )
              ndisQueryMediaStatus((void *)v1);
          }
          *(POWER_STATE *)(v1 + 3892) = v7;
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
            WPP_SF_qD(0x47u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1, v7.SystemState);
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, v7.SystemState);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            McTemplateK0jqxqq(
              v4,
              &DevicePowerStateChange,
              (const GUID *)(v1 + 4032),
              v1 + 4032,
              *(_DWORD *)(v1 + 4080),
              *(_QWORD *)(v1 + 4048),
              1,
              v7.SystemState);
          if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3848), DevicePowerState, v7);
        }
        v2 = HIBYTE(v33);
      }
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
    {
      Status = v5->IoStatus.Status;
      IofCompleteRequest(v5, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 2u )
        WPP_SF_qD(0x49u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        McTemplateK0jqxqqq(
          v4,
          &DevicePowerOnFailed,
          (const GUID *)(v1 + 4032),
          v1 + 4032,
          *(_DWORD *)(v1 + 4080),
          *(_QWORD *)(v1 + 4048),
          Status,
          120,
          0);
      ndisMiniportFatalError(v1, 0x4Au);
    }
    if ( *(int *)(v1 + 1872) < 0 )
      ndisReturnQueuedLowPowerNbls(v1, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5256);
    if ( !v2 )
      goto LABEL_50;
    ndisIssueNetEventSetPowerEvent(
      (struct _NDIS_MINIPORT_BLOCK *)v1,
      v7.SystemState,
      (*(_DWORD *)(v1 + 120) & 0x80) == 0);
    ndisNotifyDevicePowerStateChange(v1, v7.SystemState);
    if ( (*(_DWORD *)(v1 + 124) & 0x10000000) != 0 )
    {
      if ( (*(_DWORD *)(v1 + 120) & 0x20000000) == 0 )
        goto LABEL_48;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      v30 = v29;
      while ( 1 )
      {
        *(_DWORD *)(v1 + 1856) = 1706401;
        v31 = (KSPIN_LOCK *)(v1 + 96);
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock(v31, v30);
        for ( i = 0; i < 0x32; ++i )
          ;
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1860) = 1706401;
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel(v31);
      *(_DWORD *)(v1 + 120) &= ~0x20000000u;
      memset(v42, 0, sizeof(v42));
      LODWORD(v42[1]) = *(_DWORD *)(v1 + 348);
      v42[2] = *(_QWORD *)(v1 + 2768);
      v42[3] = *(_QWORD *)(v1 + 2776);
      v42[4] = *(_QWORD *)(v1 + 812);
      v42[0] = 0x100280180LL;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Flags |= 8u;
      StatusIndication.StatusBuffer = v42;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = (void *)v1;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = 40;
      NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1860) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
      if ( v30 != 2 )
        KeLowerIrql(v30);
    }
    if ( (*(_DWORD *)(v1 + 120) & 0x20000000) != 0 )
    {
LABEL_50:
      ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, Status);
      ndisMSetMiniportReadyForBinding(v1, 1, Reason_MiniportLowPower, RunAsynchronous);
      if ( v34 )
      {
        v17 = *(_DWORD *)(v1 + 2692);
        if ( (v17 & 0x100) != 0 )
        {
          *(_DWORD *)(v1 + 2692) = v17 & 0xFFFFFEFF;
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v1 + 5136));
          if ( Ndis::BindState::SetPause((Ndis::BindState *)(v1 + 5064), DatapathRunning, PauseReason_LowPower)
            && (unsigned __int8)byte_1C0098763 >= 4u )
          {
            ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v1, (struct NDIS_PNPTRACE_LOCALS *)v38);
            WPP_SF_Zq(0x4Au, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (const wchar_t *)v38[1], v38[0]);
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5136));
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5136), RunSynchronous, 1);
        }
      }
      if ( (!ndisAoAcCapable && !ndisAoAcTest || v36)
        && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v1)
        && *(_DWORD *)(v1 + 1520) == 1
        && ndisMReferenceIfBlock(v1, 0xDu) )
      {
        v18 = *(_QWORD *)(v1 + 4064);
        v41 = 0;
        v40 = 786816LL;
        HIDWORD(v40) = *(_DWORD *)(v18 + 1112);
        v41 = *(_DWORD *)(v18 + 1116);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v40;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807395;
        StatusIndication.StatusBufferSize = 12;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        ndisMDereferenceIfBlock(v1, MPIFREF_DEVPOWERUP);
      }
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
LABEL_60:
      ndisDereferenceMiniport(v1, 0xCu);
      ndisDereferencePackage((__int64)&ndisPkgs);
      return;
    }
LABEL_48:
    if ( HIBYTE(v33) )
      ndisSetMediaDisconnectTimer(v1);
    goto LABEL_50;
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x41u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    McTemplateK0jqxq(
      v4,
      &PowerOnMiniportRemoved,
      (const GUID *)(v1 + 4032),
      v1 + 4032,
      *(_DWORD *)(v1 + 4080),
      *(_QWORD *)(v1 + 4048),
      78);
  IofCompleteRequest(v5, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v1 + 5256);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, 0);
  ndisDereferenceMiniport(v1, 0xCu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x42u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v1);
}
