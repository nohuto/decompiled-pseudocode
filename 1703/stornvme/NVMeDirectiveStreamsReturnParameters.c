/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x1C000F300
 * Callers:
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000BE0C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000C2BC (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000CDE8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0012040 (memmove.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 > 0x1000 )
    return 3238002698LL;
  NVMeAllocateDmaBuffer(a1, a3);
  return 3238002691LL;
}
