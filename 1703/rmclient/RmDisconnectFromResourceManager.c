/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18000BC10
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x18000BCB0 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
