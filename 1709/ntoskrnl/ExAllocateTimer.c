/*
 * XREFs of ExAllocateTimer @ 0x140133F80
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x1405AB10C (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x1405AB400 (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14074F788 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140133FB0 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
