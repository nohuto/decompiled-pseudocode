/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x1405EF3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
