/*
 * XREFs of PopAcquireUmpoPushLock @ 0x1404C7120
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1404C190C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
}
