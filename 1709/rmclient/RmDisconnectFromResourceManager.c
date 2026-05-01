/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18000C7C0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x18000C900 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
