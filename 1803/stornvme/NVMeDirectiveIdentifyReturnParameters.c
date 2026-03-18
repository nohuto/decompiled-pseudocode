/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC
 * Callers:
 *     NVMeInitStreams @ 0x1C0006CF8 (NVMeInitStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000DA08 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 > 0x1000 )
    return 3238002698LL;
  NVMeAllocateDmaBuffer(a1, a3);
  return 3238002691LL;
}
