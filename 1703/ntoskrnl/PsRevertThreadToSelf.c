/*
 * XREFs of PsRevertThreadToSelf @ 0x1406E0B10
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
