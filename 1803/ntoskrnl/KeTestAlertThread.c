/*
 * XREFs of KeTestAlertThread @ 0x140132520
 * Callers:
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiContinueEx @ 0x1401323B0 (KiContinueEx.c)
 *     NtTestAlert @ 0x140571B40 (NtTestAlert.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  char v5; // r11
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v7);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Alerted[a1] )
  {
    CurrentThread->Alerted[a1] = 0;
  }
  else if ( a1 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPending = 1;
  }
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  __writecr8(CurrentIrql);
  return v5;
}
