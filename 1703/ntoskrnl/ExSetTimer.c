/*
 * XREFs of ExSetTimer @ 0x14004B440
 * Callers:
 *     EnableFlushTimer @ 0x140030F08 (EnableFlushTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x140454A00 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v5[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v5[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v5, 0LL);
  }
  if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, a4, 0LL);
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
