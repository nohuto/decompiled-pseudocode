/*
 * XREFs of ndisSetDevicePower @ 0x1C0012104
 * Callers:
 *     ndisSetPower @ 0x1C00A7918 (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011DF4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012890 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00129C0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C00239AC (ndisCancelWakeUpDpcTimer.c)
 *     ndisWaitForResetCompletion @ 0x1C0023A5C (ndisWaitForResetCompletion.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C004A968 (WPP_SF_LqZ.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0072130 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072E18 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0072E58 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A75C8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00B91E8 (ndisSetDeviceInterfaceState.c)
 *     ndisSetPowerResume @ 0x1C00E9A20 (ndisSetPowerResume.c)
 *     ndisSetPowerSuspend @ 0x1C00E9AA4 (ndisSetPowerSuspend.c)
 *     ndisPmHaltMiniport @ 0x1C0104E6C (ndisPmHaltMiniport.c)
 */

__int64 __fastcall ndisSetDevicePower(PIRP Irp, __int64 a2, union _POWER_STATE a3, ULONG_PTR a4, int a5)
{
  int v8; // r15d
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // r9
  unsigned int SetMiniportDeviceState; // eax
  int v13; // ecx
  unsigned int v14; // ebx
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  __int64 v18; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v20; // rax
  KIRQL v22; // al
  int v23; // ecx
  __int64 v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  KIRQL v27; // al
  int v28; // ecx

  if ( (unsigned __int8)byte_1C0092610 >= 4u )
    WPP_SF_LqZ(96LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxqq(
      (_DWORD)Irp,
      (unsigned int)&MiniportPowerDeviceState,
      a4 + 4032,
      a4 + 4032,
      *(_DWORD *)(a4 + 4080),
      *(_QWORD *)(a4 + 4048),
      1,
      a3.SystemState);
  v8 = *(_DWORD *)(a4 + 120) & 0x80;
  if ( a3.SystemState == PowerSystemWorking )
  {
    _m_prefetchw((const void *)(a4 + 4456));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFFD) & 2) == 0 )
      goto LABEL_32;
    if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4488) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
    {
      ndisWdfRequestNicActive((NDIS_HANDLE)a4, RunAsynchronous, NdisAoAcTempRefWake);
      goto LABEL_29;
    }
    v18 = *(_QWORD *)(a4 + 4480);
    if ( !v18 )
    {
LABEL_29:
      if ( !v8 )
      {
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                                   + 24);
        CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
        CurrentStackLocation[-1].Control = 0;
        v20 = Irp->Tail.Overlay.CurrentStackLocation;
        v20[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
        v20[-1].Context = (void *)a4;
        v20[-1].Control = -32;
        if ( (unsigned __int8)byte_1C0092615 >= 4u )
          WPP_SF_q(97LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a4);
        goto LABEL_24;
      }
      return (unsigned int)ndisSetDevicePowerOnComplete(*(_QWORD *)(a4 + 3856), 0LL, a4);
    }
    v27 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4480));
    v28 = *(_DWORD *)(v18 + 504);
    if ( (v28 & 0x100) == 0 )
    {
      if ( !v8 )
      {
        if ( (v28 & 0x20) == 0 )
          goto LABEL_74;
LABEL_73:
        KeReleaseSpinLock((PKSPIN_LOCK)v18, v27);
        return (unsigned int)ndisSetPowerResume(Irp);
      }
      if ( a5 == 10 )
        goto LABEL_73;
    }
LABEL_74:
    KeReleaseSpinLock((PKSPIN_LOCK)v18, v27);
    goto LABEL_29;
  }
  if ( (unsigned int)(a3.SystemState - 2) > 2 )
  {
    v14 = -1073741811;
    goto LABEL_63;
  }
  _m_prefetchw((const void *)(a4 + 4456));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_32:
    _InterlockedOr((volatile signed __int32 *)(a4 + 4456), 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3864), Irp);
  }
  if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4488) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
  {
    ndisNicQuietRequestComplete(0LL, 2u, a3, (void *)a4, 0LL);
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(a4 + 4480);
  if ( !v9 )
    goto LABEL_10;
  v22 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4480));
  v23 = *(_DWORD *)(v9 + 504);
  if ( (v23 & 0x100) == 0 )
  {
    if ( !v8 )
    {
      if ( (v23 & 8) == 0 )
        goto LABEL_43;
LABEL_42:
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v22);
      return (unsigned int)ndisSetPowerSuspend(Irp);
    }
    if ( a5 == 10 )
      goto LABEL_42;
  }
LABEL_43:
  KeReleaseSpinLock((PKSPIN_LOCK)v9, v22);
LABEL_10:
  if ( !(unsigned __int8)ndisIsMiniportStarted(a4) || *(_DWORD *)(a4 + 1520) != 1 )
    goto LABEL_20;
  if ( (*(_DWORD *)(a4 + 124) & 0x800) == 0 )
  {
    KeClearEvent((PRKEVENT)(a4 + 3752));
    ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a4, a3.SystemState);
  }
  if ( (*(_DWORD *)(a4 + 124) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a4 + 3784) + 26LL) & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(100LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a4);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        Template_jqxq(
          v10,
          (unsigned int)&PowerHaltMiniport,
          a4 + 4032,
          a4 + 4032,
          *(_DWORD *)(a4 + 4080),
          *(_QWORD *)(a4 + 4048),
          208);
      if ( (*(_DWORD *)(a4 + 124) & 0x100) == 0 )
      {
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5256);
        ndisPmHaltMiniport(a4);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(a4 + 5256, 1LL);
      }
    }
    goto LABEL_20;
  }
  ndisCancelWakeUpDpcTimer(a4);
  ndisWaitForResetCompletion(a4);
  if ( (*(_DWORD *)(a4 + 124) & 0x800) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a4 + 4456), 0x10u);
  }
  LOBYTE(v11) = 1;
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (unsigned int)a3.SystemState, 4244701441LL, v11);
  v14 = SetMiniportDeviceState;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qdD(
      98LL,
      &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids,
      a4,
      (unsigned int)a3.SystemState,
      SetMiniportDeviceState);
  if ( !v14 )
  {
LABEL_20:
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(101LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a4);
    if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
    {
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v15->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v15[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v15->Parameters.SetLock + 24);
      v15[-1].FileObject = v15->FileObject;
      v15[-1].Control = 0;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
      v16[-1].Context = (void *)a4;
      v16[-1].Control = -32;
LABEL_24:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3864), Irp);
      return 259;
    }
    return (unsigned int)ndisSetDevicePowerDownComplete(*(struct _DEVICE_OBJECT **)(a4 + 3856), 0LL, (void *)a4);
  }
  if ( (unsigned __int8)byte_1C0092615 >= 2u )
    WPP_SF_q(99LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a4);
  if ( (Microsoft_Windows_NDISEnableBits & 0x40000000) != 0 )
    Template_jqxqqq(
      v13,
      (unsigned int)&PowerDownFailed,
      a4 + 4032,
      a4 + 4032,
      *(_DWORD *)(a4 + 4080),
      *(_QWORD *)(a4 + 4048),
      v14,
      170,
      0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5256);
  _m_prefetchw((const void *)(a4 + 4456));
  v25 = *(_DWORD *)(a4 + 4456);
  do
  {
    v26 = v25;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 4456), v25, v25);
  }
  while ( v26 != v25 );
  if ( (v25 & 0x10) != 0 )
  {
    LOBYTE(v24) = 1;
    ndisSetDeviceInterfaceState(a4, v24);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFEF);
  }
  if ( !v8 )
  {
LABEL_63:
    Irp->IoStatus.Status = v14;
    IofCompleteRequest(Irp, 0);
  }
  return v14;
}
