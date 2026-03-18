/*
 * XREFs of ExSetTimer @ 0x140085490
 * Callers:
 *     EnableFlushTimer @ 0x1400844D0 (EnableFlushTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x14052DCB0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x140038B4C (ExpTimerSetParametersAreValid.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x140085514 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !ExpTimerSetParametersAreValid(a4) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
