/*
 * XREFs of KeIntSteerPeriodic @ 0x140034710
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiIntSteerDistributeInterrupts @ 0x140034890 (KiIntSteerDistributeInterrupts.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIntSteerCalculateDistribution @ 0x140034EA0 (KiIntSteerCalculateDistribution.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1401093A0 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogState @ 0x140169544 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KeIntSteerPeriodic(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR *i; // rdi
  ULONG_PTR *j; // rsi
  int v8; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 *v9[2]; // [rsp+48h] [rbp-61h] BYREF
  __int16 v10; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-49h] BYREF
  __int64 v12; // [rsp+70h] [rbp-39h]
  __int64 v13; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  int *v15; // [rsp+90h] [rbp-19h]
  __int64 v16; // [rsp+98h] [rbp-11h]
  int *v17; // [rsp+A0h] [rbp-9h]
  __int64 v18; // [rsp+A8h] [rbp-1h]
  int *v19; // [rsp+B0h] [rbp+7h]
  __int64 v20; // [rsp+B8h] [rbp+Fh]
  __int64 *v21; // [rsp+C0h] [rbp+17h]
  int v22; // [rsp+C8h] [rbp+1Fh]
  int v23; // [rsp+CCh] [rbp+23h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution(a1, a2);
  KeCopyAffinityEx(&KiIntSteerMask, a1);
  KiIntSteerMaskCount = a2;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(&PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v16 = 4LL;
    v15 = &KiIntTrackRootCount;
    v18 = 4LL;
    v17 = &KiIntSteerMaskCount;
    v19 = &KiIntSteerMask;
    v20 = 2LL;
    v23 = 0;
    v21 = &qword_1403AD988;
    v22 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(&PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
  {
    v9[1] = (unsigned __int16 *)qword_14044C5D8[0];
    v9[0] = (unsigned __int16 *)KeActiveProcessors;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v9) )
    {
      v11.Ptr = (ULONGLONG)&v8;
      *(_QWORD *)&v11.Size = 4LL;
      v13 = 4LL;
      v12 = KiProcessorBlock[v8] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v11);
    }
  }
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(&PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( i[22] != i[20] )
      {
        for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
          KiIntSteerLogState(j, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  __writecr8(CurrentIrql);
  return 0LL;
}
