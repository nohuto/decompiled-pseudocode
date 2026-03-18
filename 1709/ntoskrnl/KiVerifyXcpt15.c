/*
 * XREFs of KiVerifyXcpt15 @ 0x14080C330
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400AE6E0 (RtlSectionTableFromVirtualAddress.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     RtlCaptureImageExceptionValues @ 0x14015BE00 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x14015CD40 (KdDisableDebugger.c)
 *     _local_unwind @ 0x14015E3E0 (_local_unwind.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x140201630 (KdEnableDebugger.c)
 *     sub_1402AFE60 @ 0x1402AFE60 (sub_1402AFE60.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     KiVerifyXcpt2 @ 0x14084875C (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140857940 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140857B7C (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[38]; // [rsp+0h] [rbp-178h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14080C355);
}
