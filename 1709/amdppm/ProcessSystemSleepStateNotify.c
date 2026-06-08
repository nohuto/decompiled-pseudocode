/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x1C0004D70
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C0004DB0 (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_1C00113F8 != &qword_1C00113F8 && qword_1C00113F8 != 32 )
    AcquireBiosPpmControl(qword_1C00113F8 - 32);
  return 0LL;
}
