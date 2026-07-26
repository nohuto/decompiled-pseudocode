/*
 * XREFs of ndisDevicePowerDown @ 0x1C00F58C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012034 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012060 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C001C410 (NdisMIndicateStatusEx.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00A75FC (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00B91E8 (ndisSetDeviceInterfaceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00B9F64 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisMiniportFatalError @ 0x1C00E122C (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14D8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(__int64 a1, __int64 a2)
{
  int v2; // esi
  _IRP *v5; // r13
  int Status; // r12d
  POWER_STATE v7; // ebx
  __int64 v8; // rcx
  KIRQL v9; // al
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  int v16; // ebx
  __int64 v17; // rcx
  int SetMiniportDeviceState; // eax
  int v19; // edi
  __int64 v20; // rcx
  KIRQL v21; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v23; // di
  unsigned __int8 v24; // al
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+54h] [rbp-ACh]
  _QWORD v32[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v34; // [rsp+170h] [rbp+70h] BYREF
  int v35; // [rsp+178h] [rbp+78h]

  v2 = 0;
  v31 = 0;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x4Eu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    v7.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v5 = *(_IRP **)(a1 + 80);
    Status = v5->IoStatus.Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) || *(_DWORD *)(a2 + 1520) != 1 )
      goto LABEL_22;
    v15 = byte_1C0092615;
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
    {
      WPP_SF_qD(0x50u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v5->IoStatus.Status);
      v15 = byte_1C0092615;
    }
    v16 = *(_DWORD *)(a2 + 3892);
    if ( (unsigned __int8)v15 >= 4u )
      WPP_SF_qD(0x51u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v16);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, *(_DWORD *)(a2 + 3892));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v17,
        &DevicePowerStateChange,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        1,
        *(_DWORD *)(a2 + 3892));
    if ( (*(_DWORD *)(a2 + 124) & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a2, v16, -50265855, 1u);
      v19 = SetMiniportDeviceState;
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
      {
        LODWORD(v29) = SetMiniportDeviceState;
        WPP_SF_qdD(0x52u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v16, v29);
      }
    }
    else
    {
      v19 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)a2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5256);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(0x54u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        Template_jqxqqq(
          v20,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(a2 + 4032),
          a2 + 4032,
          *(_DWORD *)(a2 + 4080),
          *(_QWORD *)(a2 + 4048),
          v19,
          28,
          0);
      if ( ndisMReferenceIfBlock(a2, 0xFu) )
      {
        v27 = *(_QWORD *)(a2 + 4064);
        *(_QWORD *)(a2 + 4088) = 2LL;
        if ( *(_DWORD *)(v27 + 1112) != 2 )
        {
          *(_DWORD *)(v27 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(a2);
          v31 = 1;
        }
        ndisMDereferenceIfBlock(a2, 0xFu);
      }
      ndisMiniportFatalError(a2, 0x4Bu);
      if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
        Status = -1073741823;
      else
        v5->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
      if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5064), DatapathRunning, PauseReason_LowPower)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v32);
        WPP_SF_Zq(0x53u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (const wchar_t *)v32[1], v32[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5136));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5136), RunSynchronous, 0);
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(a2 + 520) = CurrentThread;
      v23 = v21;
      LOBYTE(CurrentThread) = 4;
      *(_DWORD *)(a2 + 1856) = 1706811;
      ndisMRestoreOpenHandlers(a2, (__int64)CurrentThread);
      v24 = ndisIfSetInterfaceState((const struct _TlgProvider_t *)a2, 1, v23);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      v31 = v24;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v23);
      _m_prefetchw((const void *)(a2 + 4456));
      v25 = *(_DWORD *)(a2 + 4456);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4456), v25, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(a2, 1u);
        _InterlockedAnd((volatile signed __int32 *)(a2 + 4456), 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(a2, v16);
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)a2, v16, 1);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qD(0x4Fu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, v7.SystemState);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, v7.SystemState);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v8,
        &DevicePowerStateChange,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        1,
        v7.SystemState);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    NewIrql = v9;
    v10 = *(_DWORD *)(a2 + 4092) & 0xFEFFFFF7 | 8;
    *(_DWORD *)(a2 + 1856) = 1706655;
    *(_DWORD *)(a2 + 4092) = v10;
    *(_DWORD *)(a2 + 4088) = 5;
    if ( ndisMReferenceIfBlock(a2, 0xEu) )
    {
      v11 = *(_QWORD *)(a2 + 4064);
      if ( *(_DWORD *)(v11 + 1112) != 5 )
      {
        *(_DWORD *)(v11 + 1112) = 5;
        v2 = 1;
        v31 = 1;
        *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = *(_DWORD *)(a2 + 4092);
      }
      ndisMDereferenceIfBlock(a2, 0xEu);
    }
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), NewIrql);
    if ( v2 )
      ndisNsiSyncMiniportOperStatusNotification(a2);
    v13 = *(_DWORD *)(a2 + 120);
    *(POWER_STATE *)(a2 + 3892) = v7;
    if ( (v13 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 3848), DevicePowerState, v7);
  }
  if ( v31 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) && *(_DWORD *)(a2 + 1520) == 1 )
  {
    v14 = *(_QWORD *)(a2 + 4064);
    v35 = 0;
    v34 = 786816LL;
    HIDWORD(v34) = *(_DWORD *)(v14 + 1112);
    v35 = *(_DWORD *)(v14 + 1116);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v34;
    StatusIndication.SourceHandle = (void *)a2;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
  }
LABEL_22:
  *(_DWORD *)(a2 + 4496) = 65534;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    Template_jqxq(
      v12,
      &DevicePowerDownComplete,
      (const GUID *)(a2 + 4032),
      a2 + 4032,
      *(_DWORD *)(a2 + 4080),
      *(_QWORD *)(a2 + 4048),
      Status);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
    IofCompleteRequest(v5, 0);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v28 = *(struct _KEVENT **)(a2 + 5400);
    *(_DWORD *)(a2 + 5408) = Status;
    KeSetEvent(v28, 0, 0);
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x55u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
