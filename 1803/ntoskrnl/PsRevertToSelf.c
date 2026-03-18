/*
 * XREFs of PsRevertToSelf @ 0x14077AFC0
 * Callers:
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
