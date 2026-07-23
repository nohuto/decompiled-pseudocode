/*
 * XREFs of NtSerializeBoot @ 0x140653D54
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1401863D4 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
