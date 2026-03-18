/*
 * XREFs of AMLIRestartContext @ 0x1C005AD84
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0045000 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0045040 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C00485C0 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C0053AC0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C0057E00 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C005AB78 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C005D5E0 (FreeObjOwnerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
