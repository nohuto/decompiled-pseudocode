/*
 * XREFs of ndisSetSystemPower @ 0x1C00B09DC
 * Callers:
 *     ndisSetPower @ 0x1C00B092C (ndisSetPower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C0008CE0 (NdisResetEvent.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C000FB2C (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C000FF30 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C00497D0 (WPP_SF_LqZ.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C00665D0 (ndisSendSystemPowerStateIndication.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B0C28 (ndisRequestDeviceLowPower.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C2688 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
 *     ndisMShutdownMiniport @ 0x1C010FC5C (ndisMShutdownMiniport.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v7; // esi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax
  __int64 v17; // r9
  struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  __int64 v20[2]; // [rsp+40h] [rbp-38h] BYREF
  enum _NDIS_DEVICE_POWER_STATE v21; // [rsp+88h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a3 + 1332) = v3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0099610 >= 4u )
    WPP_SF_LqZ(0x5Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v3, a3, *(_QWORD *)(a3 + 3880));
  if ( *(_DWORD *)(a3 + 2256) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( v3 == 1 )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( (unsigned __int8)byte_1C0099615 >= 3u )
          WPP_SF_q(0x5Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
      }
      ndisMPowerPolicy((NDIS_HANDLE)a3, 0);
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(0x5Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0jqxqq(
          v14,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          1,
          v21);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
      v16[-1].Context = (void *)a3;
      v16[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
    }
    else
    {
      if ( v3 <= 1 )
        return v7;
      if ( v3 > 5 )
      {
        if ( v3 == 6 )
        {
          if ( (unsigned __int8)byte_1C0099615 >= 4u )
            WPP_SF_qD(0x5Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, 6);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
            McTemplateK0jqxqq(
              (__int64)Irp,
              &MiniportPowerSystemState,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              0,
              6);
          ndisSendSystemPowerStateIndication((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12),
            v17);
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 3784) + 26LL) & 1) == 0 )
            ndisMShutdownMiniport(a3);
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = 0;
          return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
        }
        return v7;
      }
      KeWaitForSingleObject((PVOID)(a3 + 4248), Executive, 0, 0, 0LL);
      ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3);
      ndisInvokeMiniportSysPowerNotify(
        (struct _NDIS_MINIPORT_BLOCK *)a3,
        (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12),
        v8);
      if ( (unsigned int)ndisMPowerPolicy((NDIS_HANDLE)a3, 0) == -2147483633 )
      {
        Irp->IoStatus.Status = 0;
        IofCompleteRequest(Irp, 0);
        return v7;
      }
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
      {
        LODWORD(Timeout) = v21;
        WPP_SF_qdD(0x5Fu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v3, Timeout);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0jqxqq(
          v9,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          v3,
          v21);
      NdisResetEvent((PNDIS_EVENT)(a3 + 3752));
      LOBYTE(v10) = 1;
      ndisCancelInitModeTimeoutTimer(a3, v10);
      ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, v21);
      LOWORD(Timeout) = 1;
      Irp->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3848);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v11 = ndisRequestDeviceLowPower(a3, (unsigned int)v21, ndisRequestedDevicePowerIrpComplete, Irp, (_DWORD)Timeout);
      if ( v11 != 259 )
      {
        v18 = *(struct _MCGEN_TRACE_CONTEXT **)(a3 + 3856);
        LODWORD(v20[0]) = v11;
        v20[1] = 0LL;
        LOBYTE(v12) = 2;
        ndisRequestedDevicePowerIrpComplete(v18, v12, (unsigned int)v21, (__int64)Irp, (const unsigned int *)v20);
      }
    }
    return 259;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
}
