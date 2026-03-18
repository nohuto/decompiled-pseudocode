/*
 * XREFs of KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400EAB60
 * Callers:
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall KeFastAcquireInStackQueuedSpinLockAndRaise(volatile __int64 *a1, _QWORD *a2)
{
  __int64 v2; // r11
  volatile __int64 *v3; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char result; // al
  __int64 v7; // rdx
  int v8; // eax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64)a2;
  v9[0] = 2;
  v3 = a1;
  a2[1] = a1;
  *a2 = 0LL;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[5];
      SchedulerAssist[5] = v8 + 1;
      if ( v8 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = KiFastAcquireQueuedSpinLockInstrumented(v2, v3, v9);
  }
  else
  {
    result = 0;
    v7 = _InterlockedExchange64(v3, v2);
    if ( v7 )
    {
      KxWaitForLockOwnerShipWithIrql(v2, v7, v9);
      result = 1;
    }
  }
  if ( result )
  {
    _disable();
    result = v9[0];
    __writecr8(v9[0]);
  }
  return result;
}
