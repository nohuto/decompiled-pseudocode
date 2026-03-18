/*
 * XREFs of KiSchedulerApcTerminate @ 0x1404D6C40
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1400AB784 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink);
  JUMPOUT(0x1404D6C73LL);
}
