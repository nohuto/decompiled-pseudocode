/*
 * XREFs of PopNetCompliantNicUpdate @ 0x14076B8C4
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140764F48 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x1406278B4 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x14076B854 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = PopNetCompliantNicCount;
  if ( a1 )
  {
    v1 = PopNetCompliantNicCount + 1;
    PopNetCompliantNicCount = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = PopNetClearConnectivityConstraint(6);
  }
  else if ( PopNetCompliantNicCount )
  {
    v2 = PopNetCompliantNicCount == 1;
    LOBYTE(v1) = --PopNetCompliantNicCount;
    if ( v2 )
      LOBYTE(v1) = PopNetSetConnectivityConstraint(6);
  }
  return v1;
}
