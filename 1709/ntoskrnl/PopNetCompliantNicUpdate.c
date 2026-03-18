/*
 * XREFs of PopNetCompliantNicUpdate @ 0x140707A84
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x1405B8354 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140707A14 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1, unsigned int a2)
{
  int v2; // eax
  bool v3; // zf

  v2 = PopIgnoreCsComplianceCheck;
  if ( !_bittest(&v2, a2) )
  {
    LOBYTE(v2) = PopNetCompliantNicCount;
    if ( a1 )
    {
      v2 = PopNetCompliantNicCount + 1;
      PopNetCompliantNicCount = v2;
      if ( v2 == 1 )
        LOBYTE(v2) = PopNetClearConnectivityConstraint(6);
    }
    else if ( PopNetCompliantNicCount )
    {
      v3 = PopNetCompliantNicCount == 1;
      LOBYTE(v2) = --PopNetCompliantNicCount;
      if ( v3 )
        LOBYTE(v2) = PopNetSetConnectivityConstraint(6);
    }
  }
  return v2;
}
