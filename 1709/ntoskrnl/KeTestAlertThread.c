/*
 * XREFs of KeTestAlertThread @ 0x1400DA9D0
 * Callers:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiContinueEx @ 0x1400DA860 (KiContinueEx.c)
 *     NtTestAlert @ 0x140514FAC (NtTestAlert.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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
  if ( v4 )
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
