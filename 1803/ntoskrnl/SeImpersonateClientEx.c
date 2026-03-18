/*
 * XREFs of SeImpersonateClientEx @ 0x140587890
 * Callers:
 *     NtImpersonateThread @ 0x14058775C (NtImpersonateThread.c)
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     SeImpersonateClient @ 0x140792170 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
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
