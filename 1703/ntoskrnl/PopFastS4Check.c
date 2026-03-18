/*
 * XREFs of PopFastS4Check @ 0x140579D08
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14013DA14 (PopActionRetrieveInitialState.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_14034B1A0 != 4 )
    return 0;
  if ( byte_14034BB3C )
    return 0;
  result = 1;
  if ( byte_14034B251 != 1 || byte_14034B248 != 1 || byte_14034B256 != 2 )
    return 0;
  return result;
}
