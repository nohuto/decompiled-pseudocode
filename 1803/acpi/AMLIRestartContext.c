/*
 * XREFs of AMLIRestartContext @ 0x1C00442C0
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0012050 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0012090 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C0019500 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C0033560 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C003B8B0 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0043734 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0046A60 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
