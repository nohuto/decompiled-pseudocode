/*
 * XREFs of SeImpersonateClient @ 0x1406F6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
