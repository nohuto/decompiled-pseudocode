/*
 * XREFs of PsTerminateSystemThread @ 0x140582610
 * Callers:
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x140231080 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     IopThreadStart @ 0x1405E7400 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1407BCF30 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((__int64)CurrentThread, v1, 1);
  else
    return -1073741811;
}
