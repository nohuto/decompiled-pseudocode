/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0001010
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C002A410 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C004BD00 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIFilterIrpQueryId @ 0x1C008B100 (ACPIFilterIrpQueryId.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C008CA60 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C008E3E0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIRootIrpQueryInterface @ 0x1C008F6C0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C008F8C0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIThermalWmi @ 0x1C0094410 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C009DE20 (ACPIEcOtherIrpDispatch.c)
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
    KeBugCheckEx(0xA3u, 2uLL, 0x9019FuLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
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
