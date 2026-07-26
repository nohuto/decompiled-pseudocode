/*
 * XREFs of ndisQueryPower @ 0x1C00F51BC
 * Callers:
 *     ndisPowerDispatch @ 0x1C00229A0 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00E1FA0 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00B64CC (ndisInitializeNetPnPEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  __int64 v11; // rcx
  int SetMiniportDeviceState; // eax
  __int64 v13; // rcx
  char v14; // di
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  int v17; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-E8h] BYREF
  int v19; // [rsp+68h] [rbp-E0h]
  int *v20; // [rsp+70h] [rbp-D8h]
  int v21; // [rsp+78h] [rbp-D0h]

  v17 = 0;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x26u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                               + 24);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
  }
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qdD(0x27u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, v7, *(_DWORD *)(a2 + 24));
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqq(
        v6,
        &InvalidSystemPowerState,
        (const GUID *)(a3 + 4032),
        a3 + 4032,
        *(_DWORD *)(a3 + 4080),
        *(_QWORD *)(a3 + 4048),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24));
    v10 = -1073741808;
  }
  else
  {
    v10 = ndisMPowerPolicy((NDIS_HANDLE)a3, 1);
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a3) || *(_DWORD *)(a3 + 1520) != 1 || v10 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v10 < 0 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_qD(0x28u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, *(_DWORD *)(a2 + 24));
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxqqq(
          v11,
          &QueryPowerFailed,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          v10,
          62,
          *(_DWORD *)(a2 + 24));
    }
    else
    {
      ndisInitializeNetPnPEvent(&v18, 0LL);
      v19 = 1;
      v20 = &v17;
      v21 = 4;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(
                           (struct _NDIS_MINIPORT_BLOCK *)a3,
                           (__int64)&v18)
        && (unsigned __int8)byte_1C0092615 >= 2u )
      {
        WPP_SF_q(0x29u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
      }
      if ( (*(_DWORD *)(a3 + 124) & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v17, -50265854, 0);
        v14 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( (unsigned __int8)byte_1C0092615 >= 4u )
            WPP_SF_q(0x2Au, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            Template_jqxqqq(
              v13,
              &QueryPowerFailed,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              v14,
              111,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v15->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v15[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v15->Parameters.SetLock + 24);
      v15[-1].FileObject = v15->FileObject;
      v15[-1].Control = 0;
      *(_DWORD *)(a3 + 3152) = v17;
      *(_QWORD *)(a3 + 776) = Irp;
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4144), Irp, File, 1u, 0x20u);
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v16[-1].Context = (void *)a3;
      v16[-1].Control = -32;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
      v10 = 259;
    }
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v10 < 0 )
  {
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(0x2Bu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, v10);
  return v10;
}
