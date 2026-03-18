/*
 * XREFs of PsTerminateSystemThread @ 0x140599300
 * Callers:
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F3B50 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     IopThreadStart @ 0x1405DE860 (IopThreadStart.c)
 *     ExpExpirationThread @ 0x140756460 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((__int64)CurrentThread, ExitStatus, 1);
  else
    return -1073741811;
}
