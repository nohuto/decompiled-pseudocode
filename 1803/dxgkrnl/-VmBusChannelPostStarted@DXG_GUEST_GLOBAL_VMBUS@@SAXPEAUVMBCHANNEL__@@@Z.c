/*
 * XREFs of ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C017CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted(struct VMBCHANNEL__ *a1)
{
  __int64 Pointer; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted", (wchar_t *)L"%p", a1);
  Pointer = VmbChannelGetPointer(a1);
  KeSetEvent(*(PRKEVENT *)(Pointer + 32), 0, 0);
}
