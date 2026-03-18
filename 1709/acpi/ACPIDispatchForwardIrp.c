/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0004B10
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00043B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C002B150 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C004B100 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0086060 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086890 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087DC0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C008C4D0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryId @ 0x1C008D180 (ACPIFilterIrpQueryId.c)
 *     ACPIThermalWmi @ 0x1C00972E0 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C00A0DE0 (ACPIEcOtherIrpDispatch.c)
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
