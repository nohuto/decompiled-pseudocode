/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiDeleteCloneDescriptor @ 0x1400ADA5C (MiDeleteCloneDescriptor.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiReturnVadQuota @ 0x14059AFD0 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiFreeRotateView @ 0x14074D138 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 *     MiDeletePhysicalProcessPages @ 0x14074FB68 (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiFreeCloneDescriptor @ 0x1407563A0 (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407BD294 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1407BD2F4 (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14081DD80 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
