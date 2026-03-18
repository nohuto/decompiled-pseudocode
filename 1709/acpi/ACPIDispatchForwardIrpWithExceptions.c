/*
 * XREFs of ACPIDispatchForwardIrpWithExceptions @ 0x1C004B100
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0004B10 (ACPIDispatchForwardIrp.c)
 */

__int64 __fastcall ACPIDispatchForwardIrpWithExceptions(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  unsigned int v4; // edi

  if ( (*(_BYTE *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 8) & 0x60) == 0x60
    && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 18 )
  {
    v4 = 0;
    Irp->IoStatus.Status = 0;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  return v4;
}
