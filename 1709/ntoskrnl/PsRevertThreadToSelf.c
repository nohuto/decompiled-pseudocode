/*
 * XREFs of PsRevertThreadToSelf @ 0x140716E10
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
