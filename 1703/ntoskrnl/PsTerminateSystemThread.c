/*
 * XREFs of PsTerminateSystemThread @ 0x14054E950
 * Callers:
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401EE440 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     IopThreadStart @ 0x140574360 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x140716D30 (ExpExpirationThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v3);
}
