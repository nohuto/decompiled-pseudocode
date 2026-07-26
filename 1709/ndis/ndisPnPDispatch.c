/*
 * XREFs of ndisPnPDispatch @ 0x1C00C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00AC23C (ndisPnPIrpQueryRemove.c)
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00AC69C (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisPnPIrpQueryInterface @ 0x1C00C0EF8 (ndisPnPIrpQueryInterface.c)
 *     ndisPnPIrpQueryCapabilities @ 0x1C00C0F4C (ndisPnPIrpQueryCapabilities.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C12A4 (ndisPnPIrpStartDevice.c)
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00C14A8 (ndisPnPIrpFilterResourceRequirements.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00C15B0 (ndisPnPIrpQueryPnPDeviceState.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EB270 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00EB348 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00EB418 (ndisPnPIrpDeviceUsageNotification.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EB4D0 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 */

NTSTATUS __fastcall ndisPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  NTSTATUS v2; // esi
  unsigned int MinorFunction; // r15d
  signed __int32 v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Stop; // eax
  __int64 *v13; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  LOBYTE(v14) = 1;
  MinorFunction = 0;
  v15 = 1;
  if ( DeviceObject && *(_BYTE *)DeviceObject->DeviceExtension == 23 )
    return ndisSetupDevicePnp(DeviceObject, Irp);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qq(0x32u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, DeviceObject, Irp);
  v6 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v6 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)DeviceObject->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_qq(0x33u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, DeviceObject, Irp);
    v2 = -1073741808;
    goto LABEL_28;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(
      0x34u,
      &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids,
      (__int64)DeviceObject->DeviceExtension,
      CurrentStackLocation->MinorFunction);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
    McTemplateK0jqxq(
      v7,
      &DispatchPnPIrp,
      &DeviceExtension->InterfaceGuid,
      (__int64)&DeviceExtension->InterfaceGuid,
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
          Stop = ndisPnPIrpQueryRemove(v7, (__int64)DeviceExtension, (__int64)Irp, v8, (bool *)&v14);
          break;
        case 2u:
          Stop = ndisPnPIrpRemoveDevice(DeviceObject, DeviceExtension, Irp, (__int64)&v14);
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
      Stop = ndisPnPIrpStartDevice(v7, DeviceExtension, Irp, &v15, &v14);
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
        Stop = ndisPnPIrpDeviceUsageNotification(
                 (_DWORD)DeviceObject,
                 (_DWORD)DeviceExtension,
                 (_DWORD)Irp,
                 v8,
                 (__int64)&v14);
        break;
      case 0x17u:
        Stop = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, Irp, &v15, &v14);
        break;
      default:
        if ( (unsigned __int8)byte_1C0098754 >= 4u )
          WPP_SF_qD(0x35u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)DeviceExtension, MinorFunction);
        goto LABEL_20;
    }
  }
  v2 = Stop;
  if ( !(_BYTE)v14 )
  {
LABEL_27:
    if ( !v15 )
      goto LABEL_22;
LABEL_28:
    Irp->IoStatus.Status = v2;
    IofCompleteRequest(Irp, 0);
    goto LABEL_22;
  }
LABEL_20:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_27;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v2 = IofCallDriver(DeviceExtension->NextDeviceObject, Irp);
LABEL_22:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(v13) = v2;
    WPP_SF_qdD(0x36u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)DeviceExtension, MinorFunction, v13);
  }
  return v2;
}
