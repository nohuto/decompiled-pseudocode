/*
 * XREFs of KeSwapProcessOrStack @ 0x140176C50
 * Callers:
 *     <none>
 * Callees:
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiOutSwapKernelStacks @ 0x1400B29D4 (KiOutSwapKernelStacks.c)
 *     KeGetNextKernelStackSegment @ 0x1400B2D38 (KeGetNextKernelStackSegment.c)
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x1400EB1B0 (KiOutSwapProcesses.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *v2; // r8
  int v3; // r9d
  signed __int64 *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  ULONG_PTR v7; // rdi
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1, v0);
    v4 = (signed __int64 *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v4 )
      KiOutSwapProcesses(v4);
    v5 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapProcesses(v5, v0, v2, v3);
    v6 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    while ( v6 )
    {
      v7 = (ULONG_PTR)(v6 - 27);
      v6 = (_QWORD *)*v6;
      if ( (MiFlags & 0x40) != 0 )
      {
        KeGetNextKernelStackSegment((_QWORD *)v7, v8, 1);
        do
          MiInPageSingleKernelStack(v7, v8);
        while ( KeGetNextKernelStackSegment((_QWORD *)v7, v8, 0) );
      }
      _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x11u);
      KiFastReadyThread(v7, v0, (__int64)v2);
    }
  }
}
