/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18000BF00
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x18000C1DC (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup();
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
