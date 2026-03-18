/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1400DB850
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14051DBE0 (MiReturnVadQuota.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 *     MiFreeCloneDescriptor @ 0x1406BF4BC (MiFreeCloneDescriptor.c)
 *     ExDereferenceHandleDebugInfo @ 0x14071705C (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1407170BC (ExEnableHandleTracing.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14076EDB4 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 0LL, a2);
  return result;
}
