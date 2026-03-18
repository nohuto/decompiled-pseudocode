/*
 * XREFs of ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01913D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
}
