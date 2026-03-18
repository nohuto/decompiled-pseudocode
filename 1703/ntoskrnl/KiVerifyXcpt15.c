/*
 * XREFs of KiVerifyXcpt15 @ 0x1407DC2E0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     KdDisableDebugger @ 0x140168320 (KdDisableDebugger.c)
 *     _local_unwind @ 0x140169A90 (_local_unwind.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x1401FB920 (KdEnableDebugger.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     KiVerifyXcpt2 @ 0x1408186F4 (KiVerifyXcpt2.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[9]; // [rsp+0h] [rbp-48h] BYREF

  v0[7] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_1407DC2FF);
}
