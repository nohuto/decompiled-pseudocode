/*
 * XREFs of ndisPnPDispatch @ 0x1C00ACD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00A5C80 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisPnPIrpStartDevice @ 0x1C00AA5E4 (ndisPnPIrpStartDevice.c)
 *     ndisPnPIrpQueryInterface @ 0x1C00ACF88 (ndisPnPIrpQueryInterface.c)
 *     ndisPnPIrpQueryCapabilities @ 0x1C00AD188 (ndisPnPIrpQueryCapabilities.c)
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00BDCD8 (ndisPnPIrpFilterResourceRequirements.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00BE568 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00C0398 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00E13D0 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00E14A8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00E1578 (ndisPnPIrpDeviceUsageNotification.c)
 *     ndisPnPIrpQueryStop @ 0x1C00E1630 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00E1888 (ndisPnPIrpSurpriseRemoval.c)
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F06A4 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // esi
  unsigned int MinorFunction; // r15d
  struct _IRP *v6; // rdx
  __int64 v7; // rcx
  int v8; // r9d
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Stop; // eax
  __int64 *v13; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  char v15; // [rsp+88h] [rbp+48h] BYREF

  LOBYTE(v14) = 1;
  v15 = 1;
  v4 = 0;
  MinorFunction = 0;
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDevicePnp(a1, v6);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qq(0x32u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1, Irp);
  ndisReferencePackage((__int64)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
      WPP_SF_qq(0x33u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1, Irp);
    v4 = -1073741808;
    goto LABEL_26;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(
      0x34u,
      &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids,
      (__int64)a1->DeviceExtension,
      CurrentStackLocation->MinorFunction);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
    Template_jqxq(
      v7,
      &DispatchPnPIrp,
      &DeviceExtension->InterfaceGuid,
      (unsigned __int64)&DeviceExtension->InterfaceGuid,
      DeviceExtension->IfIndex,
      DeviceExtension->NetLuid.Value,
      MinorFunction);
  if ( MinorFunction <= 6 )
  {
    if ( MinorFunction == 6 )
    {
      Stop = ndisPnPIrpCancelStop(v7, DeviceExtension, Irp, &v15, &v14);
    }
    else if ( MinorFunction )
    {
      switch ( MinorFunction )
      {
        case 1u:
          v13 = &v14;
          Stop = ndisPnPIrpQueryRemove(v7, DeviceExtension, Irp);
          break;
        case 2u:
          Stop = ndisPnPIrpRemoveDevice(a1, DeviceExtension, Irp, (__int64)&v14);
          break;
        case 3u:
          Stop = ndisPnPIrpCancelRemove(v7, DeviceExtension, Irp, &v15, &v14);
          break;
        default:
          v13 = &v14;
          if ( MinorFunction == 4 )
            Stop = ndisPnPIrpStopDevice(v7, DeviceExtension, Irp);
          else
            Stop = ndisPnPIrpQueryStop(v7, DeviceExtension, Irp);
          break;
      }
    }
    else
    {
      Stop = ndisPnPIrpStartDevice(v7, (__int64)DeviceExtension, Irp, &v15, &v14);
    }
  }
  else
  {
    switch ( MinorFunction )
    {
      case 8u:
        Stop = ndisPnPIrpQueryInterface(v7, (_DWORD)DeviceExtension, (_DWORD)Irp, v8, (__int64)&v14);
        break;
      case 9u:
        Stop = ndisPnPIrpQueryCapabilities(v7, (_DWORD)DeviceExtension, (_DWORD)Irp, v8, (__int64)&v14);
        break;
      case 0xDu:
        Stop = ndisPnPIrpFilterResourceRequirements(v7, (_DWORD)DeviceExtension, (_DWORD)Irp, v8, (__int64)&v14);
        break;
      case 0x14u:
        Stop = ndisPnPIrpQueryPnPDeviceState(v7, (_DWORD)DeviceExtension, (_DWORD)Irp, v8, (__int64)&v14);
        break;
      case 0x16u:
        Stop = ndisPnPIrpDeviceUsageNotification((_DWORD)a1, (_DWORD)DeviceExtension, (_DWORD)Irp, v8, (__int64)&v14);
        break;
      case 0x17u:
        Stop = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, Irp, &v15, &v14);
        break;
      default:
        if ( (unsigned __int8)byte_1C0092614 >= 4u )
          WPP_SF_qD(0x35u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)DeviceExtension, MinorFunction);
        goto LABEL_18;
    }
  }
  v4 = Stop;
  if ( !(_BYTE)v14 )
  {
LABEL_25:
    if ( !v15 )
      goto LABEL_20;
LABEL_26:
    Irp->IoStatus.Status = v4;
    IofCompleteRequest(Irp, 0);
    goto LABEL_20;
  }
LABEL_18:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_25;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v4 = IofCallDriver(DeviceExtension->NextDeviceObject, Irp);
LABEL_20:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    LODWORD(v13) = v4;
    WPP_SF_qdD(0x36u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)DeviceExtension, MinorFunction, v13);
  }
  return v4;
}
