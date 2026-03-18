/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14003F0B0
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x140002070 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     IoMakeAssociatedIrpPriv @ 0x1400A4924 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x1400A9EB0 (IoPropagateIrpExtensionEx.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140137C20 (IopSetDiskIoAttributionFromProcess.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140137ADC (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 IrpExtension; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 1740) & 0x1000) != 0 && *(_QWORD *)(v8 + 944) && *(_QWORD *)(*(_QWORD *)(v8 + 944) + 1336LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      IopReferenceIoAttributionFromProcess(v8, v6, &v10);
  }
  *(_QWORD *)(IrpExtension + 16) = v10;
  return 0LL;
}
