/*
 * XREFs of ndisSetPowerSuspend @ 0x1C00E9AA4
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 * Callees:
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006CFDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisSetPowerSuspend(PIRP Irp, __int64 a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  int v5; // esi
  enum _DEVICE_POWER_STATE v6; // ebx
  int v7; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx

  v5 = a3->Flags & 0x80;
  if ( v5 )
    v6 = PowerDeviceUnspecified;
  else
    v6 = *(_DWORD *)(a2 + 24);
  v7 = ndisSendPmOidsForSuspend(a3, v6);
  if ( v5 )
    return v7 != 0 ? 0xC0000001 : 0;
  if ( v7 )
  {
    v10 = -1073741823;
    Irp->IoStatus.Status = -1073741823;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    PoSetPowerState(a3->DeviceObject, DevicePowerState, (POWER_STATE)v6);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                               + 24);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(a3->NextDeviceObject, Irp);
    return 259;
  }
  return v10;
}
