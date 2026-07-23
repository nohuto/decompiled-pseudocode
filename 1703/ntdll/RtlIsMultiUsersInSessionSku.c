/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1800895F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0x7FFE02F0] >> 9) & 1;
}
