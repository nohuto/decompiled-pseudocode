/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x1406F792C
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  RtlCheckTokenMembership(0LL, SeLocalSystemSid);
  return 0;
}
