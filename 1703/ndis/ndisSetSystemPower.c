/*
 * XREFs of ndisSetSystemPower @ 0x1C00A79CC
 * Callers:
 *     ndisSetPower @ 0x1C00A7918 (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     NdisResetEvent @ 0x1C00107E0 (NdisResetEvent.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011DF4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C00123A4 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00127A0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisCancelWaitWake @ 0x1C002375C (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C004A968 (WPP_SF_LqZ.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ndisRequestDeviceLowPower @ 0x1C00A7C80 (ndisRequestDeviceLowPower.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00B8750 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisPowerSaveStop @ 0x1C00BE7BC (ndisPowerSaveStop.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 *     ndisMShutdownMiniport @ 0x1C0104D5C (ndisMShutdownMiniport.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(PIRP Irp, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebp
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // rcx
  char v19[8]; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  enum _NDIS_DEVICE_POWER_STATE v22; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v9 = *(_DWORD *)(a3 + 120) & 0x80;
  if ( !v9 )
  {
    a4 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a3 + 1332) = a4;
  }
  if ( (unsigned __int8)byte_1C0092610 >= 4u )
    WPP_SF_LqZ(0x5Bu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a4, a3, *(_QWORD *)(a3 + 3880));
  if ( *(_DWORD *)(a3 + 2256) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( a4 == 1 )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( (unsigned __int8)byte_1C0092615 >= 3u )
          WPP_SF_q(0x5Du, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
      }
      v4 = ndisMPowerPolicy((NDIS_HANDLE)a3, 0);
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(0x5Eu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        Template_jqxqq(
          v15,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4032),
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          1,
          v22);
      if ( !v9 )
      {
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                                   + 24);
        CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
        CurrentStackLocation[-1].Control = 0;
        v17 = Irp->Tail.Overlay.CurrentStackLocation;
        v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
        v17[-1].Context = (void *)a3;
        v17[-1].Control = -32;
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
          if ( (unsigned __int8)byte_1C0092615 >= 4u )
            WPP_SF_qD(0x5Cu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, 6);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
            Template_jqxqq(
              (__int64)Irp,
              &MiniportPowerSystemState,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              0,
              6);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
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
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
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
          if ( (unsigned __int8)byte_1C0092615 >= 4u )
          {
            *(_DWORD *)v19 = v22;
            WPP_SF_qdD(0x5Fu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, a4, *(_QWORD *)v19);
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
            Template_jqxqq(
              v10,
              &MiniportPowerStates,
              (const GUID *)(a3 + 4032),
              a3 + 4032,
              *(_DWORD *)(a3 + 4080),
              *(_QWORD *)(a3 + 4048),
              a4,
              v22);
          NdisResetEvent((PNDIS_EVENT)(a3 + 3752));
          LOBYTE(v11) = 1;
          ndisCancelInitModeTimeoutTimer(a3, v11);
          v4 = ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, v22);
          if ( !v9 )
          {
            *(_WORD *)v19 = 1;
            Irp->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3848);
            Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            v12 = ndisRequestDeviceLowPower(
                    a3,
                    (unsigned int)v22,
                    ndisRequestedDevicePowerIrpComplete,
                    Irp,
                    *(_DWORD *)v19);
            v4 = 259;
            if ( v12 != 259 )
            {
              v21 = 0LL;
              v18 = *(_QWORD *)(a3 + 3856);
              v20 = v12;
              LOBYTE(v13) = 2;
              ndisRequestedDevicePowerIrpComplete(v18, v13, (unsigned int)v22, (__int64)Irp, &v20);
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
