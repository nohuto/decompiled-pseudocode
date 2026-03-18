/*
 * XREFs of SeImpersonateClient @ 0x14072DE80
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140578EB0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
