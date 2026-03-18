/*
 * XREFs of KeSwapProcessOrStack @ 0x140142E10
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KiOutSwapKernelStacks @ 0x1400ACF64 (KiOutSwapKernelStacks.c)
 *     KeGetNextKernelStackSegment @ 0x1400AD2C8 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     KiOutSwapProcesses @ 0x140111E50 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14011465C (KiInSwapProcesses.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  ULONG_PTR v5; // rdi
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v2 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v2 )
      KiOutSwapProcesses(v2);
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v3 )
      KiInSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v4 )
    {
      v5 = (ULONG_PTR)(v4 - 27);
      v4 = (_QWORD *)*v4;
      if ( (MiFlags & 0x40) != 0 )
      {
        KeGetNextKernelStackSegment((_QWORD *)v5, v6, 1);
        do
          MiInPageSingleKernelStack(v5, v6);
        while ( KeGetNextKernelStackSegment((_QWORD *)v5, v6, 0) );
      }
      _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x11u);
      KiFastReadyThread(v5, v0, v1);
    }
  }
}
