/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C0006D00
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0057450 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0059BF0 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0059F40 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, _DWORD *a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
