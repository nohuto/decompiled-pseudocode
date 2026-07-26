/*
 * XREFs of ndisDevicePowerDown @ 0x1C0100A70
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F7B4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
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
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4F0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  _IRP *v4; // r13
  int Status; // r12d
  POWER_STATE v6; // ebx
  __int64 v7; // rcx
  KIRQL v8; // al
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // edx
  __int64 v16; // rcx
  int SetMiniportDeviceState; // eax
  int v18; // edi
  __int64 v19; // rcx
  KIRQL v20; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v22; // di
  unsigned __int8 v23; // al
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // rax
  struct _KEVENT *v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+58h] [rbp-B0h]
  int v30; // [rsp+5Ch] [rbp-ACh]
  _QWORD v31[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+108h] [rbp+0h] BYREF
  __int64 v33; // [rsp+178h] [rbp+70h] BYREF
  int v34; // [rsp+180h] [rbp+78h]

  v1 = 0;
  v2 = a1 - 5464;
  v30 = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x4Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    v4 = 0LL;
    Status = 0;
    v6.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v4 = *(_IRP **)(a1 + 32);
    Status = v4->IoStatus.Status;
    v6.SystemState = (_SYSTEM_POWER_STATE)v4->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) || *(_DWORD *)(v2 + 1520) != 1 )
      goto LABEL_22;
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_qD(0x50u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v4->IoStatus.Status);
    v14 = *(_DWORD *)(v2 + 3892);
    v15 = v14;
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
    {
      WPP_SF_qD(0x51u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v14);
      v15 = *(_DWORD *)(v2 + 3892);
    }
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v15);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxqq(
        v16,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4032),
        v2 + 4032,
        *(_DWORD *)(v2 + 4080),
        *(_QWORD *)(v2 + 4048),
        1,
        *(_DWORD *)(v2 + 3892));
    if ( (*(_DWORD *)(v2 + 124) & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(v2, v14, -50265855, 1u);
      v18 = SetMiniportDeviceState;
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
      {
        LODWORD(v28) = SetMiniportDeviceState;
        WPP_SF_qdD(0x52u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v14, v28);
      }
    }
    else
    {
      v18 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)v2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v2 + 5256);
    if ( v18 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(0x54u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        McTemplateK0jqxqqq(
          v19,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(v2 + 4032),
          v2 + 4032,
          *(_DWORD *)(v2 + 4080),
          *(_QWORD *)(v2 + 4048),
          v18,
          28,
          0);
      if ( ndisMReferenceIfBlock(v2, 0xFu) )
      {
        v26 = *(_QWORD *)(v2 + 4064);
        *(_DWORD *)(v2 + 4092) = 0;
        *(_DWORD *)(v2 + 4088) = 2;
        if ( *(_DWORD *)(v26 + 1112) != 2 )
        {
          *(_DWORD *)(v26 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(v2 + 4064) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(v2);
          v30 = 1;
        }
        ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(v2, 0x4Bu);
      if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
        Status = -1073741823;
      else
        v4->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
      if ( Ndis::BindState::SetPause((Ndis::BindState *)(v2 + 5064), DatapathRunning, PauseReason_LowPower)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)v2, (struct NDIS_PNPTRACE_LOCALS *)v31);
        WPP_SF_Zq(0x53u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (const wchar_t *)v31[1], v31[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v2 + 5136), RunSynchronous, 0);
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v2 + 520) = CurrentThread;
      v22 = v20;
      LOBYTE(CurrentThread) = 4;
      *(_DWORD *)(v2 + 1856) = 1706811;
      ndisMRestoreOpenHandlers(v2, (__int64)CurrentThread);
      v23 = ndisIfSetInterfaceState(v2, 1, v22);
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1856) = 0;
      v30 = v23;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v22);
      _m_prefetchw((const void *)(v2 + 4456));
      v24 = *(_DWORD *)(v2 + 4456);
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4456), v24, v24);
      }
      while ( v25 != v24 );
      if ( (v24 & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(v2, 1u);
        _InterlockedAnd((volatile signed __int32 *)(v2 + 4456), 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(v2, v14);
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)v2, v14, 1);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(0x4Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v6.SystemState);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v2, v6.SystemState);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxqq(
        v7,
        &DevicePowerStateChange,
        (const GUID *)(v2 + 4032),
        v2 + 4032,
        *(_DWORD *)(v2 + 4080),
        *(_QWORD *)(v2 + 4048),
        1,
        v6.SystemState);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    NewIrql = v8;
    v9 = *(_DWORD *)(v2 + 4092) & 0xFEFFFFF7 | 8;
    *(_DWORD *)(v2 + 1856) = 1706655;
    *(_DWORD *)(v2 + 4092) = v9;
    *(_DWORD *)(v2 + 4088) = 5;
    if ( ndisMReferenceIfBlock(v2, 0xEu) )
    {
      v10 = *(_QWORD *)(v2 + 4064);
      if ( *(_DWORD *)(v10 + 1112) != 5 )
      {
        *(_DWORD *)(v10 + 1112) = 5;
        v1 = 1;
        v30 = 1;
        *(_DWORD *)(*(_QWORD *)(v2 + 4064) + 1116LL) = *(_DWORD *)(v2 + 4092);
      }
      ndisMDereferenceIfBlock(v2, MPIFREF_POWERDOWN);
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), NewIrql);
    if ( v1 )
      ndisNsiSyncMiniportOperStatusNotification(v2);
    v12 = *(_DWORD *)(v2 + 120);
    *(POWER_STATE *)(v2 + 3892) = v6;
    if ( (v12 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)(v2 + 3848), DevicePowerState, v6);
  }
  if ( v30 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v2) && *(_DWORD *)(v2 + 1520) == 1 )
  {
    v13 = *(_QWORD *)(v2 + 4064);
    v34 = 0;
    v33 = 786816LL;
    HIDWORD(v33) = *(_DWORD *)(v13 + 1112);
    v34 = *(_DWORD *)(v13 + 1116);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v33;
    StatusIndication.SourceHandle = (void *)v2;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
  }
LABEL_22:
  *(_DWORD *)(v2 + 4496) = 65534;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0jqxq(
      v11,
      &DevicePowerDownComplete,
      (const GUID *)(v2 + 4032),
      v2 + 4032,
      *(_DWORD *)(v2 + 4080),
      *(_QWORD *)(v2 + 4048),
      Status);
  if ( (*(_DWORD *)(v2 + 120) & 0x80u) != 0 || (IofCompleteRequest(v4, 0), (*(_DWORD *)(v2 + 120) & 0x80u) != 0) )
  {
    v27 = *(struct _KEVENT **)(v2 + 5408);
    *(_DWORD *)(v2 + 5416) = Status;
    KeSetEvent(v27, 0, 0);
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x55u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
