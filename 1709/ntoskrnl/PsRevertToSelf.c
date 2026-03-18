/*
 * XREFs of PsRevertToSelf @ 0x140716E40
 * Callers:
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
