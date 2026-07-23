/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1406E9B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] >> 9) & 1;
}
