/*
 * XREFs of SeImpersonateClientEx @ 0x140578EB0
 * Callers:
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x140578D78 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x14072DE80 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
