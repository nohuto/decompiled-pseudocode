/*
 * XREFs of NVMeSyncHostTime @ 0x1C00128EC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000DA08 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  __int64 v3; // [rsp+78h] [rbp+38h] BYREF

  StorPortQuerySystemTime(&v3);
  NVMeAllocateDmaBuffer(a1, 8u);
  return 3238002691LL;
}
