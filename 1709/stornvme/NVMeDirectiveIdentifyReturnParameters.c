/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC
 * Callers:
 *     NVMeInitStreams @ 0x1C0006A78 (NVMeInitStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000D554 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 > 0x1000 )
    return 3238002698LL;
  NVMeAllocateDmaBuffer(a1, a3);
  return 3238002691LL;
}
