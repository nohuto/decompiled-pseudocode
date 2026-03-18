/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14012C8B4
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x140004CE0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140023430 (IopSetDiskIoAttributionFromProcess.c)
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     IoPropagateIrpExtensionEx @ 0x14012C780 (IoPropagateIrpExtensionEx.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14012C8E8 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 16) = a2;
  return 0LL;
}
