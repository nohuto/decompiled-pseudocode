/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x1C0027F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqill @ 0x1C00611E4 (WPP_SF_qqill.c)
 */

BOOLEAN __stdcall NdisSetCoalescableTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext,
        ULONG Tolerance)
{
  _BYTE *v5; // r15
  _QWORD *v7; // rsi
  KIRQL v10; // al
  _QWORD *v11; // r8
  _QWORD *v12; // rdx

  v5 = (_BYTE *)*((_QWORD *)TimerObject + 3);
  v7 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( *v5 == 17 && !v7 )
    return 0;
  if ( FunctionContext )
    *((_QWORD *)TimerObject + 23) = FunctionContext;
  else
    *((_QWORD *)TimerObject + 23) = *((_QWORD *)TimerObject + 22);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7[473] + 26LL) & 2) != 0 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(v7 + 235);
      v11 = (_QWORD *)v7[70];
      v12 = v11;
      if ( !v11 )
        goto LABEL_8;
      do
      {
        if ( v12 == TimerObject )
          break;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_8:
        *(_QWORD *)TimerObject = v11;
        v7[70] = TimerObject;
      }
      KeReleaseSpinLock(v7 + 235, v10);
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = *((_QWORD *)TimerObject + 23);
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_qqill(
      TimerObject,
      DueTime.QuadPart >> 63,
      v5,
      TimerObject,
      abs64(DueTime.QuadPart),
      MillisecondsPeriod,
      Tolerance);
  return KeSetCoalescableTimer(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           Tolerance,
           (PKDPC)((char *)TimerObject + 96));
}
