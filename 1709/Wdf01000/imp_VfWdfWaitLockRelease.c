/*
 * XREFs of imp_VfWdfWaitLockRelease @ 0x1C00D5770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock)
{
  WdfVersion.Functions.pfnWdfWaitLockRelease(DriverGlobals, Lock);
}
