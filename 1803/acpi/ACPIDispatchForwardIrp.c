/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0001340
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C0020FD0 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIDispatchWmiLog @ 0x1C00429D0 (ACPIDispatchWmiLog.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C0079E10 (ACPIEcOtherIrpDispatch.c)
 *     ACPIFilterIrpQueryId @ 0x1C007BA40 (ACPIFilterIrpQueryId.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C007BC40 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C007BFE0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0087D40 (ACPIRootIrpQueryInterface.c)
 *     ACPIThermalWmi @ 0x1C00899C0 (ACPIThermalWmi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 728) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 728), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
