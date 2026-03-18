/*
 * XREFs of KeEstimateClockTickDuration @ 0x140240790
 * Callers:
 *     PpmEstimateIdleDuration @ 0x140271D48 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 */

int *__fastcall KeEstimateClockTickDuration(__int64 a1, char a2, char a3, unsigned __int64 a4, __int64 *a5, int *a6)
{
  int v6; // edi
  bool v7; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  int *result; // rax
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = 2;
  v7 = *(_BYTE *)(a1 + 33) == 0;
  v9 = KiClockTimerNextTickTime;
  v13 = 2;
  if ( v7 )
  {
    KiGetNextTimerExpirationDueTime(a1, 0, a4, a3, v12, &v13);
    if ( v9 <= v12[0] )
      v9 = v12[0];
    goto LABEL_11;
  }
  if ( a2 )
  {
    if ( (_BYTE)KiDynamicTickDisableReason || KiClockState )
      a2 = 0;
    if ( a2 )
    {
      KiGetNextTimerExpirationDueTime(a1, 1u, a4, a3, v12, &v13);
      if ( a4 + (unsigned int)KiLastRequestedTimeIncrement < v12[0] )
      {
        v9 = v12[0];
LABEL_11:
        v6 = v13;
      }
    }
  }
  v10 = -1LL;
  if ( v9 != -1LL )
  {
    if ( v9 <= a4 )
      v10 = 0LL;
    else
      v10 = v9 - a4;
  }
  *a5 = v10;
  result = a6;
  *a6 = v6;
  return result;
}
