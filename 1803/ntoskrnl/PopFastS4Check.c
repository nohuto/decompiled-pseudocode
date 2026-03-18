/*
 * XREFs of PopFastS4Check @ 0x1405EEA68
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140155B9C (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_1403AA080 != 4 )
    return 0;
  if ( byte_1403AAA3C )
    return 0;
  result = 1;
  if ( byte_1403AA139 != 1 || byte_1403AA130 != 1 || byte_1403AA13E != 2 )
    return 0;
  return result;
}
