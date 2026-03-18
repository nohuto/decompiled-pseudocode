/*
 * XREFs of PsRevertToSelf @ 0x1406E0B40
 * Callers:
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
