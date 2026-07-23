/*
 * XREFs of NtSerializeBoot @ 0x1405EF98C
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x14015B924 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
