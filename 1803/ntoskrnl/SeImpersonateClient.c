/*
 * XREFs of SeImpersonateClient @ 0x140792170
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140587890 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
