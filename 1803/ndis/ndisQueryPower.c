/*
 * XREFs of ndisQueryPower @ 0x1C0100D1C
 * Callers:
 *     ndisPowerDispatch @ 0x1C0024280 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00EEA20 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B0810 (ndisQuerySetMiniportDeviceState.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
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
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x26u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
  }
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qdD(0x27u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v7, *(_DWORD *)(a2 + 24));
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      McTemplateK0jqxqq(
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
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_qD(0x28u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, *(_DWORD *)(a2 + 24));
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxqqq(
          v11,
          &QueryPowerFailed,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          v10,
          56,
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
        && (unsigned __int8)byte_1C0099615 >= 2u )
      {
        WPP_SF_q(0x29u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
      }
      if ( (*(_DWORD *)(a3 + 124) & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v17, -50265854, 0);
        v14 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( (unsigned __int8)byte_1C0099615 >= 4u )
            WPP_SF_q(0x2Au, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            McTemplateK0jqxqqq(
              v13,
              &QueryPowerFailed,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              v14,
              105,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v15[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v15->Parameters.ReadWriteConfig.Length;
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
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x2Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v10);
  return v10;
}
