/*
 * XREFs of PopFastS4Check @ 0x1406F50B0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14024220C (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( byte_1403661BC )
    return 0;
  if ( dword_140365800 != 4 )
    return 0;
  result = 1;
  if ( byte_1403658B9 != 1 || byte_1403658B0 != 1 || byte_1403658BE != 2 )
    return 0;
  return result;
}
