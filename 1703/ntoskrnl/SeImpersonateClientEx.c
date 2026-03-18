/*
 * XREFs of SeImpersonateClientEx @ 0x140558C70
 * Callers:
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x140558B44 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1406F6440 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
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
