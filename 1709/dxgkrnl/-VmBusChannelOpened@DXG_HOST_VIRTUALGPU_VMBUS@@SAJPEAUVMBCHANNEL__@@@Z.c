/*
 * XREFs of ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0191450
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened(struct VMBCHANNEL__ *a1)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened", (wchar_t *)L"%p", a1);
  return 0LL;
}
