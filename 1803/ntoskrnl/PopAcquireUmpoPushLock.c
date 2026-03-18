/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140524940
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400760DC (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
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
