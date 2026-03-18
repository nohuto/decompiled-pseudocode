/*
 * XREFs of ExAllocateTimer @ 0x140147D60
 * Callers:
 *     WdipSemStartTimeoutCheck @ 0x1405CA3B0 (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x1405CE0C8 (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
