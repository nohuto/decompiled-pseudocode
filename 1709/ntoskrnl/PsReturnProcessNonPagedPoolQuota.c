/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1400379D0
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x140495B20 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140594950 (MiFreeCloneDescriptor.c)
 *     MiFreeVadEventBitmap @ 0x1406E26F4 (MiFreeVadEventBitmap.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407567C8 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x140756828 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x1407B06EC (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1407B0BD4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
