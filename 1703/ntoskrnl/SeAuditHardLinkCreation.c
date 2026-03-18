/*
 * XREFs of SeAuditHardLinkCreation @ 0x1406F1A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
