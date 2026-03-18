/*
 * XREFs of KiSchedulerApcTerminate @ 0x14056A3A0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1400C04E8 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink);
  JUMPOUT(0x14056A3D3LL);
}
