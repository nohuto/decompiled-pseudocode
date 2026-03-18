/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x140008E14
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x140008DF0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     IoPropagateIrpExtensionEx @ 0x1401072F0 (IoPropagateIrpExtensionEx.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x140117BC4 (IoMakeAssociatedIrpPriv.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14012BBFC (IopSetDiskIoAttributionFromProcess.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140020DF8 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
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
