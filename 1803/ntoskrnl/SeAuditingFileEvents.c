/*
 * XREFs of SeAuditingFileEvents @ 0x1407902C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_1403A56E4 && AccessGranted
    || byte_1403A56E5 && !AccessGranted
    || byte_1403A56E6 && AccessGranted
    || byte_1403A56E7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
