/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x140707B50
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x1405B8354 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140707A14 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetNonCompliantDeviceUpdate(char a1, unsigned int a2)
{
  int v2; // eax
  bool v3; // zf

  v2 = PopIgnoreCsComplianceCheck;
  if ( !_bittest(&v2, a2) )
  {
    LOBYTE(v2) = PopNetNonCompliantDeviceCount;
    if ( a1 )
    {
      v2 = PopNetNonCompliantDeviceCount + 1;
      PopNetNonCompliantDeviceCount = v2;
      if ( v2 == 1 )
        LOBYTE(v2) = PopNetSetConnectivityConstraint(3);
    }
    else if ( PopNetNonCompliantDeviceCount )
    {
      v3 = PopNetNonCompliantDeviceCount == 1;
      LOBYTE(v2) = --PopNetNonCompliantDeviceCount;
      if ( v3 )
        LOBYTE(v2) = PopNetClearConnectivityConstraint(3);
    }
  }
  return v2;
}
