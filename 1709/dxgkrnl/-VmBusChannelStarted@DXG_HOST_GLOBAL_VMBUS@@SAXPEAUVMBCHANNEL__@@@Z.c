/*
 * XREFs of ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191510
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted", (wchar_t *)L"%p", a1);
}
