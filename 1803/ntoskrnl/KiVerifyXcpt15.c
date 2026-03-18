/*
 * XREFs of KiVerifyXcpt15 @ 0x14087C330
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14013D7A0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlCaptureImageExceptionValues @ 0x140186514 (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x140186DC0 (KdDisableDebugger.c)
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x14023E710 (KdEnableDebugger.c)
 *     sub_1402E81AC @ 0x1402E81AC (sub_1402E81AC.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     KiVerifyXcpt2 @ 0x1408B9D48 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x1408C90D8 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1408C951C (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[38]; // [rsp+0h] [rbp-178h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14087C355);
}
