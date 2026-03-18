/*
 * XREFs of ExpTimer2Adjust @ 0x14025CFE8
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x140239944 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     ExpCalcAdjustedDueTime @ 0x14025CF4C (ExpCalcAdjustedDueTime.c)
 */

char __fastcall ExpTimer2Adjust(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rdi
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // r11
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a1 + 17;
  KxAcquireSpinLock(a1 + 17);
  v9 = KeCancelTimer2((__int64)a1);
  if ( v9 )
  {
    v10 = ExpCalcAdjustedDueTime(a1[9], (unsigned int)((__int64)a1[18] < 0) + 1, a2, a3, a4);
    v13[1] = a1[23];
    a1[18] = v10;
    v13[0] = v11;
    KeSetTimer2((__int64)a1, v10, 0LL, (__int64)v13);
  }
  KxReleaseSpinLock(v4);
  return v9;
}
