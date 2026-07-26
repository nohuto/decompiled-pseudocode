/*
 * XREFs of ndisSetDevicePower @ 0x1C000F884
 * Callers:
 *     ndisSetPower @ 0x1C00B092C (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0010020 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010150 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0010794 (ndisCancelWakeUpDpcTimer.c)
 *     ndisWaitForResetCompletion @ 0x1C001084C (ndisWaitForResetCompletion.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C00497D0 (WPP_SF_LqZ.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00744F0 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00751E0 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0075220 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B05B0 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B0810 (ndisQuerySetMiniportDeviceState.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00C3A04 (ndisSetDeviceInterfaceState.c)
 *     ndisSetPowerResume @ 0x1C00F5B4C (ndisSetPowerResume.c)
 *     ndisSetPowerSuspend @ 0x1C00F5BD0 (ndisSetPowerSuspend.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 */

__int64 __fastcall ndisSetDevicePower(PIRP Irp, __int64 a2, union _POWER_STATE a3, ULONG_PTR a4, int a5)
{
  int v8; // r15d
  __int64 v9; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // ebx
  __int64 v14; // rbx
  int v15; // ecx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  unsigned int SetMiniportDeviceState; // eax
  int v20; // ecx
  _IO_STACK_LOCATION *v21; // rax
  _IO_STACK_LOCATION *v22; // rax
  KIRQL v24; // al
  int v25; // ecx
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  KIRQL v29; // al
  int v30; // ecx

  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_LqZ(99LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    McTemplateK0jqxqq(
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
    if ( *(_QWORD *)(a4 + 4488) )
      *(_QWORD *)(*(_QWORD *)(a4 + 4488) + 1104LL) = KeQueryUnbiasedInterruptTime();
    _m_prefetchw((const void *)(a4 + 4456));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFFD) & 2) != 0 )
    {
      if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4488) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
      {
        ndisWdfRequestNicActive((NDIS_HANDLE)a4, RunAsynchronous, NdisAoAcTempRefWake);
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(a4 + 4480);
      if ( !v9 )
      {
LABEL_11:
        if ( !v8 )
        {
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
          *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
          *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
          CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
          CurrentStackLocation[-1].Control = 0;
          v11 = Irp->Tail.Overlay.CurrentStackLocation;
          v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
          v11[-1].Context = (void *)a4;
          v11[-1].Control = -32;
          if ( (unsigned __int8)byte_1C0099615 >= 4u )
            WPP_SF_q(100LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4, a4);
          goto LABEL_14;
        }
        return (unsigned int)ndisSetDevicePowerOnComplete(*(_QWORD *)(a4 + 3856), 0LL, a4);
      }
      v29 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4480));
      v30 = *(_DWORD *)(v9 + 504);
      if ( (v30 & 0x100) == 0 )
      {
        if ( v8 )
        {
          if ( a5 != 10 )
            goto LABEL_72;
        }
        else if ( (v30 & 0x20) == 0 )
        {
          goto LABEL_72;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v9, v29);
        return (unsigned int)ndisSetPowerResume(Irp);
      }
LABEL_72:
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v29);
      goto LABEL_11;
    }
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)(a4 + 4456), 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3864), Irp);
  }
  if ( (unsigned int)(a3.SystemState - 2) > 2 )
  {
    v12 = -1073741811;
    goto LABEL_64;
  }
  _m_prefetchw((const void *)(a4 + 4456));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFFB) & 4) == 0 )
    goto LABEL_34;
  if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4488) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
  {
    ndisNicQuietRequestComplete(0LL, 2u, a3, (void *)a4, 0LL);
    goto LABEL_20;
  }
  v14 = *(_QWORD *)(a4 + 4480);
  if ( !v14 )
    goto LABEL_20;
  v24 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4480));
  v25 = *(_DWORD *)(v14 + 504);
  if ( (v25 & 0x100) == 0 )
  {
    if ( v8 )
    {
      if ( a5 != 10 )
        goto LABEL_42;
    }
    else if ( (v25 & 8) == 0 )
    {
      goto LABEL_42;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v14, v24);
    return (unsigned int)ndisSetPowerSuspend(Irp);
  }
LABEL_42:
  KeReleaseSpinLock((PKSPIN_LOCK)v14, v24);
LABEL_20:
  if ( !(unsigned __int8)ndisIsMiniportStarted(a4) || *(_DWORD *)(a4 + 1520) != 1 )
    goto LABEL_30;
  v17 = *(_DWORD *)(a4 + 124);
  if ( (v17 & 0x800) == 0 )
  {
    KeClearEvent((PRKEVENT)(a4 + 3752));
    ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a4, a3.SystemState);
    v17 = *(_DWORD *)(a4 + 124);
  }
  if ( (v17 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a4 + 3784) + 26LL) & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(103LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4, v16);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0jqxq(
          v15,
          (unsigned int)&PowerHaltMiniport,
          a4 + 4032,
          a4 + 4032,
          *(_DWORD *)(a4 + 4080),
          *(_QWORD *)(a4 + 4048),
          36);
      if ( (*(_DWORD *)(a4 + 124) & 0x100) == 0 )
      {
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5256);
        ndisPmHaltMiniport(a4);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(a4 + 5256, 1LL);
      }
    }
    goto LABEL_30;
  }
  ndisCancelWakeUpDpcTimer(a4);
  ndisWaitForResetCompletion(a4);
  if ( (*(_DWORD *)(a4 + 124) & 0x800) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a4 + 4456), 0x10u);
  }
  LOBYTE(v18) = 1;
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (unsigned int)a3.SystemState, 4244701441LL, v18);
  v12 = SetMiniportDeviceState;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qdD(
      101LL,
      &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids,
      a4,
      (unsigned int)a3.SystemState,
      SetMiniportDeviceState);
  if ( !v12 )
  {
LABEL_30:
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(104LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4, v16);
    if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
    {
      v21 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v21[-1].MajorFunction = *(_OWORD *)&v21->MajorFunction;
      *(_OWORD *)&v21[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v21->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v21[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v21->Parameters.ReadWriteConfig.Length;
      v21[-1].FileObject = v21->FileObject;
      v21[-1].Control = 0;
      v22 = Irp->Tail.Overlay.CurrentStackLocation;
      v22[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
      v22[-1].Context = (void *)a4;
      v22[-1].Control = -32;
LABEL_14:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3864), Irp);
      return 259;
    }
    return (unsigned int)ndisSetDevicePowerDownComplete(*(struct _DEVICE_OBJECT **)(a4 + 3856), 0LL, (void *)a4);
  }
  if ( (unsigned __int8)byte_1C0099615 >= 2u )
    WPP_SF_q(102LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4, v16);
  if ( (Microsoft_Windows_NDISEnableBits & 0x40000000) != 0 )
    McTemplateK0jqxqqq(
      v20,
      (unsigned int)&PowerDownFailed,
      a4 + 4032,
      a4 + 4032,
      *(_DWORD *)(a4 + 4080),
      *(_QWORD *)(a4 + 4048),
      v12,
      254,
      0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5256);
  _m_prefetchw((const void *)(a4 + 4456));
  v27 = *(_DWORD *)(a4 + 4456);
  do
  {
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 4456), v27, v27);
  }
  while ( v28 != v27 );
  if ( (v27 & 0x10) != 0 )
  {
    LOBYTE(v26) = 1;
    ndisSetDeviceInterfaceState(a4, v26);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 4456), 0xFFFFFFEF);
  }
  if ( !v8 )
  {
LABEL_64:
    Irp->IoStatus.Status = v12;
    IofCompleteRequest(Irp, 0);
  }
  return v12;
}
