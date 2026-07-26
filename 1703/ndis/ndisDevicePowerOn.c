/*
 * XREFs of ndisDevicePowerOn @ 0x1C00F5400
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetEvent @ 0x1C00107C0 (NdisSetEvent.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisSignalD0RequestComplete @ 0x1C0011EF8 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0011FC4 (ndisReturnQueuedLowPowerNbls.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012034 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012060 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C474 (ndisMSwapOpenHandlers.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     ndisSetWakeUpTimer @ 0x1C0022E88 (ndisSetWakeUpTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0023B5C (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00653C4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00A75FC (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC (ndisMSetMiniportReadyForBinding.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00B91E8 (ndisSetDeviceInterfaceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00B9F64 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisMiniportFatalError @ 0x1C00E122C (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00E2060 (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14D8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v5; // rcx
  _IRP *v6; // r15
  int Status; // r13d
  POWER_STATE v8; // r12d
  char v9; // bl
  int SetMiniportDeviceState; // eax
  int v11; // r14d
  KIRQL v12; // al
  KIRQL v13; // bl
  __int64 v14; // rdx
  KIRQL v15; // di
  __int64 v16; // rdx
  __int64 v17; // r9
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  int v20; // eax
  __int64 v21; // rcx
  _DEVICE_OBJECT *v22; // rcx
  POWER_STATE v23; // r8d
  unsigned __int8 v24; // al
  KIRQL v25; // al
  struct _KTHREAD *v26; // rdx
  KIRQL v27; // bl
  KIRQL v28; // al
  KIRQL v29; // bl
  __int64 v30; // rax
  KIRQL v31; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v33; // bl
  KIRQL v34; // al
  KIRQL v35; // bl
  KSPIN_LOCK *v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+50h] [rbp-B0h]
  char v39; // [rsp+51h] [rbp-AFh]
  char v40; // [rsp+52h] [rbp-AEh]
  unsigned int i; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+58h] [rbp-A8h]
  BOOL v43; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v44[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+170h] [rbp+70h] BYREF
  int v47; // [rsp+178h] [rbp+78h]
  _QWORD v48[5]; // [rsp+180h] [rbp+80h] BYREF

  v39 = 0;
  v3 = 0;
  v42 = 0;
  v40 = 0;
  v38 = 0;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v6 = 0LL;
    Status = 0;
    v8.SystemState = PowerSystemWorking;
  }
  else
  {
    v6 = *(_IRP **)(a1 + 80);
    Status = v6->IoStatus.Status;
    v8.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( *(_DWORD *)(a2 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x40u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v5,
        &PowerOnMiniportNotStarted,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        44);
    v22 = *(_DEVICE_OBJECT **)(a2 + 3848);
    v23.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(a2 + 3892) = v23;
    PoSetPowerState(v22, DevicePowerState, v23);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5256);
    ndisScheduleD0CompleteSignalWorkItem(a2, 0);
    IofCompleteRequest(v6, 0);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(a2 + 124) & 0x10) == 0 )
  {
    v9 = 0;
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_qD(0x43u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(0x44u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
      if ( *(_DWORD *)(a2 + 3892) == 1 )
      {
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) && *(_DWORD *)(a2 + 1520) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(a2 + 3752));
          v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(a2 + 520) = CurrentThread;
          v33 = v31;
          LOBYTE(CurrentThread) = 4;
          *(_DWORD *)(a2 + 1856) = 1706325;
          ndisMRestoreOpenHandlers(a2, (__int64)CurrentThread);
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v33);
          v3 = 1;
          v39 = 0;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092615 >= 4u )
          WPP_SF_q(0x45u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            v5,
            &MiniportPoweringUp,
            (const GUID *)(a2 + 4032),
            a2 + 4032,
            *(_DWORD *)(a2 + 4080),
            *(_QWORD *)(a2 + 4048),
            132);
        if ( (*(_DWORD *)(a2 + 124) & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            v24 = *(_BYTE *)(a2 + 32);
            if ( v24 > 6u || v24 == 6 && *(_BYTE *)(a2 + 33) >= 0x1Eu )
            {
              v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              v26 = KeGetCurrentThread();
              *(_QWORD *)(a2 + 520) = v26;
              v27 = v25;
              LOBYTE(v26) = 4;
              *(_DWORD *)(a2 + 1856) = 1706131;
              ndisMRestoreOpenHandlers(a2, (__int64)v26);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v27);
              v9 = 1;
              v38 = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a2, v8.SystemState, -50265855, 1u);
          v11 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C0092615 >= 4u )
          {
            LODWORD(v37) = SetMiniportDeviceState;
            WPP_SF_qdD(0x46u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v8.SystemState, v37);
          }
          if ( v11 )
          {
            if ( v9 )
            {
              v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
              v29 = v28;
              *(_DWORD *)(a2 + 1856) = 1706157;
              ndisMSwapOpenHandlers(a2, 4u);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v29);
              v38 = 0;
            }
          }
          else
          {
            *(POWER_STATE *)(a2 + 3892) = v8;
          }
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
          v13 = v12;
          *(_DWORD *)(a2 + 1856) = 1706166;
          ndisSetWakeUpTimer(a2);
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v13);
        }
        else if ( (*(_WORD *)(*(_QWORD *)(a2 + 3784) + 26LL) & 1) == 0 && (*(_DWORD *)(a2 + 124) & 0x4000) != 0 )
        {
          v11 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)a2);
        }
        else
        {
          v11 = 0;
        }
        if ( v11 )
        {
          if ( (unsigned __int8)byte_1C0092615 >= 2u )
            WPP_SF_qD(0x48u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v11);
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
            Status = -1073741823;
          else
            v6->IoStatus.Status = -1073741823;
          *(_QWORD *)(a2 + 4088) = 2LL;
          if ( ndisMReferenceIfBlock(a2, 0xCu) )
          {
            v30 = *(_QWORD *)(a2 + 4064);
            if ( *(_DWORD *)(v30 + 1112) != 2 )
            {
              *(_DWORD *)(v30 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification(a2);
              v42 = 1;
            }
            ndisMDereferenceIfBlock(a2, 0xCu);
          }
        }
        else
        {
          v40 = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
          {
            NdisSetEvent((PNDIS_EVENT)(a2 + 3752));
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
            *(_DWORD *)(a2 + 1856) = 1706197;
            if ( !v38 )
            {
              LOBYTE(v14) = 4;
              ndisMRestoreOpenHandlers(a2, v14);
            }
            v42 = (unsigned __int8)ndisIfSetInterfaceState((const struct _TlgProvider_t *)a2, 1, v15);
            *(_QWORD *)(a2 + 520) = 0LL;
            *(_DWORD *)(a2 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v15);
            _m_prefetchw((const void *)(a2 + 4456));
            v18 = *(_DWORD *)(a2 + 4456);
            do
            {
              v19 = v18;
              v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4456), v18, v18);
            }
            while ( v19 != v18 );
            if ( (v18 & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState(a2, 1u);
              _InterlockedAnd((volatile signed __int32 *)(a2 + 4456), 0xFFFFFFEF);
            }
            v39 = 1;
            v43 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v16, &v43, v17);
            if ( *(_BYTE *)(a2 + 32) < 6u )
              ndisQueryMediaStatus((void *)a2);
          }
          *(POWER_STATE *)(a2 + 3892) = v8;
          if ( (unsigned __int8)byte_1C0092615 >= 4u )
            WPP_SF_qD(0x47u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v8.SystemState);
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, v8.SystemState);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            Template_jqxqq(
              v5,
              &DevicePowerStateChange,
              (const GUID *)(a2 + 4032),
              a2 + 4032,
              *(_DWORD *)(a2 + 4080),
              *(_QWORD *)(a2 + 4048),
              1,
              v8.SystemState);
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 3848), DevicePowerState, v8);
        }
        v3 = v39;
      }
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
    {
      Status = v6->IoStatus.Status;
      IofCompleteRequest(v6, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 2u )
        WPP_SF_qD(0x49u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        Template_jqxqqq(
          v5,
          &DevicePowerOnFailed,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          Status,
          128,
          0);
      ndisMiniportFatalError(a2, 0x4Au);
    }
    if ( *(int *)(a2 + 1872) < 0 )
      ndisReturnQueuedLowPowerNbls(a2, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5256);
    if ( v3 )
    {
      ndisIssueNetEventSetPowerEvent(
        (struct _NDIS_MINIPORT_BLOCK *)a2,
        v8.SystemState,
        (*(_DWORD *)(a2 + 120) & 0x80) == 0);
      ndisNotifyDevicePowerStateChange(a2, v8.SystemState);
      if ( (*(_DWORD *)(a2 + 124) & 0x10000000) != 0 && (*(_DWORD *)(a2 + 120) & 0x20000000) != 0 )
      {
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        v35 = v34;
        while ( 1 )
        {
          *(_DWORD *)(a2 + 1856) = 1706409;
          v36 = (KSPIN_LOCK *)(a2 + 96);
          if ( !*(_BYTE *)(a2 + 89) )
            break;
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock(v36, v35);
          for ( i = 0; i < 0x32; ++i )
            ;
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        }
        *(_BYTE *)(a2 + 89) = 1;
        *(_DWORD *)(a2 + 1860) = 1706409;
        *(_QWORD *)(a2 + 1864) = KeGetCurrentThread();
        *(_QWORD *)(a2 + 520) = 0LL;
        *(_DWORD *)(a2 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel(v36);
        *(_DWORD *)(a2 + 120) &= ~0x20000000u;
        memset(v48, 0, sizeof(v48));
        LODWORD(v48[1]) = *(_DWORD *)(a2 + 348);
        v48[2] = *(_QWORD *)(a2 + 2768);
        v48[3] = *(_QWORD *)(a2 + 2776);
        v48[4] = *(_QWORD *)(a2 + 812);
        v48[0] = 0x100280180LL;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Flags |= 8u;
        StatusIndication.StatusBuffer = v48;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = (void *)a2;
        StatusIndication.StatusCode = 1073807383;
        StatusIndication.StatusBufferSize = 40;
        NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
        *(_BYTE *)(a2 + 89) = 0;
        *(_DWORD *)(a2 + 1860) = 0;
        *(_QWORD *)(a2 + 1864) = 0LL;
        if ( v35 != 2 )
          KeLowerIrql(v35);
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x20000000) == 0 && v39 )
        ndisSetMediaDisconnectTimer(a2);
    }
    ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)a2, Status);
    ndisMSetMiniportReadyForBinding(a2, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v40 )
    {
      v20 = *(_DWORD *)(a2 + 2688);
      if ( (v20 & 0x100) != 0 )
      {
        *(_DWORD *)(a2 + 2688) = v20 & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
        if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5064), DatapathRunning, PauseReason_LowPower)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v44);
          WPP_SF_Zq(0x4Au, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (const wchar_t *)v44[1], v44[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 1);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v42)
      && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
      && *(_DWORD *)(a2 + 1520) == 1
      && ndisMReferenceIfBlock(a2, 0xDu) )
    {
      v21 = *(_QWORD *)(a2 + 4064);
      v47 = 0;
      v46 = 786816LL;
      HIDWORD(v46) = *(_DWORD *)(v21 + 1112);
      v47 = *(_DWORD *)(v21 + 1116);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v46;
      StatusIndication.SourceHandle = (void *)a2;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
      ndisMDereferenceIfBlock(a2, 0xDu);
    }
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x4Bu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
LABEL_60:
    ndisDereferenceMiniport(a2, 0xCu);
    ndisDereferencePackage((__int64)&ndisPkgs);
    return;
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x41u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxq(
      v5,
      &PowerOnMiniportRemoved,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      86);
  IofCompleteRequest(v6, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5256);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)a2, 0);
  ndisDereferenceMiniport(a2, 0xCu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x42u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
}
