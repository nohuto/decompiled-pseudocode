/*
 * XREFs of KeTestAlertThread @ 0x1400089E0
 * Callers:
 *     KiContinueEx @ 0x140008870 (KiContinueEx.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     NtTestAlert @ 0x140425F44 (NtTestAlert.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

unsigned __int8 __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v4; // dl
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( CurrentThread->ThreadLock );
  }
  v4 = CurrentThread->Alerted[a1];
  if ( v4 == 1 )
  {
    CurrentThread->Alerted[a1] = 0;
  }
  else if ( a1 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPending = 1;
  }
  CurrentThread->ThreadLock = 0LL;
  __writecr8(CurrentIrql);
  return v4;
}
