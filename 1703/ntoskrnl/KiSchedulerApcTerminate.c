/*
 * XREFs of KiSchedulerApcTerminate @ 0x140443330
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1400298F8 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(LODWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  JUMPOUT(0x140443363LL);
}
