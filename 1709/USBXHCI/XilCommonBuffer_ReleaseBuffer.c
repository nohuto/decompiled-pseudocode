/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C000FE78
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005A3E0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C005CC04 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, _DWORD *a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
