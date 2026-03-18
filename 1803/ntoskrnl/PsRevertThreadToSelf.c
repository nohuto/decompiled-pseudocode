/*
 * XREFs of PsRevertThreadToSelf @ 0x14077AF90
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
