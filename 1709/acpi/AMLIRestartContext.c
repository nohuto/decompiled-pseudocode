/*
 * XREFs of AMLIRestartContext @ 0x1C005B8E0
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C00449C0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0044A00 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C0047D10 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C0054620 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C0058A00 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C005B6DC (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C005D3E0 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C0018450 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
