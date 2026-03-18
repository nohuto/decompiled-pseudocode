/*
 * XREFs of ExAllocateTimer @ 0x1401631E0
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x14063924C (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x14064B0EC (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140163210 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
