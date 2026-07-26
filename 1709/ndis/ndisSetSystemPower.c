/*
 * XREFs of ndisSetSystemPower @ 0x1C00C6804
 * Callers:
 *     ndisSetPower @ 0x1C00C6750 (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     NdisResetEvent @ 0x1C001B140 (NdisResetEvent.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C001FCF8 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C001FFC0 (ndisRequestedDevicePowerIrpComplete.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     WPP_SF_LqZ @ 0x1C00483E8 (WPP_SF_LqZ.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0065AB8 (ndisSendSystemPowerStateIndication.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C5CB4 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 *     ndisMShutdownMiniport @ 0x1C010DCDC (ndisMShutdownMiniport.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(PIRP Irp, __int64 a2, __int64 a3, int a4)
{
  int v4; // r14d
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  char v18[8]; // [rsp+20h] [rbp-58h]
  __int64 v19[2]; // [rsp+40h] [rbp-38h] BYREF
  enum _NDIS_DEVICE_POWER_STATE v20; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v9 = *(_DWORD *)(a3 + 120) & 0x80;
  if ( !v9 )
  {
    a4 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a3 + 1332) = a4;
  }
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
    WPP_SF_LqZ(0x5Bu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a4, a3, *(_QWORD *)(a3 + 3880));
  if ( *(_DWORD *)(a3 + 2256) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( a4 == 1 )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( (unsigned __int8)byte_1C0098755 >= 3u )
          WPP_SF_q(0x5Du, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
      }
      v4 = ndisMPowerPolicy((NDIS_HANDLE)a3, 0);
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(0x5Eu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        McTemplateK0jqxqq(
          v14,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          1,
          v20);
      if ( !v9 )
      {
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
        return 259;
      }
    }
    else if ( a4 > 1 )
    {
      if ( a4 > 5 )
      {
        if ( a4 == 6 )
        {
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
            WPP_SF_qD(0x5Cu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, 6);
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
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 3784) + 26LL) & 1) == 0 )
            ndisMShutdownMiniport(a3);
          Irp->IoStatus.Status = 0;
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
        }
      }
      else
      {
        if ( v9 )
        {
          if ( *(_QWORD *)(a3 + 4480) )
            ndisSelectiveSuspendStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
        }
        else
        {
          KeWaitForSingleObject((PVOID)(a3 + 4248), Executive, 0, 0, 0LL);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, 6);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
        }
        if ( (unsigned int)ndisMPowerPolicy((NDIS_HANDLE)a3, 0) == -2147483633 )
        {
          Irp->IoStatus.Status = 0;
          IofCompleteRequest(Irp, 0);
        }
        else
        {
          if ( (unsigned __int8)byte_1C0098755 >= 4u )
          {
            *(_DWORD *)v18 = v20;
            WPP_SF_qdD(0x5Fu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, a4, *(_QWORD *)v18);
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
            McTemplateK0jqxqq(
              v10,
              &MiniportPowerStates,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              a4,
              v20);
          NdisResetEvent((PNDIS_EVENT)(a3 + 3752));
          ndisCancelInitModeTimeoutTimer(a3, 1);
          v4 = ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, v20);
          if ( !v9 )
          {
            *(_WORD *)v18 = 1;
            Irp->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3848);
            Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            v11 = ndisRequestDeviceLowPower(
                    a3,
                    (unsigned int)v20,
                    ndisRequestedDevicePowerIrpComplete,
                    Irp,
                    *(_DWORD *)v18);
            v4 = 259;
            if ( v11 != 259 )
            {
              v19[1] = 0LL;
              v17 = *(struct _MCGEN_TRACE_CONTEXT **)(a3 + 3856);
              LODWORD(v19[0]) = v11;
              LOBYTE(v12) = 2;
              ndisRequestedDevicePowerIrpComplete(v17, v12, (unsigned int)v20, (__int64)Irp, (const unsigned int *)v19);
            }
          }
        }
      }
    }
    return v4;
  }
  else
  {
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), Irp);
  }
}
