/*
 * XREFs of PdcPoReportButton @ 0x1405B84C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PdcPoReportButton(char a1, char a2)
{
  PopAcquirePolicyLock();
  if ( (a1 & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (_BYTE)PopCapabilities == 1 )
        goto LABEL_6;
      LOBYTE(PopCapabilities) = 1;
      goto LABEL_5;
    }
    if ( (_BYTE)PopCapabilities )
    {
      LOBYTE(PopCapabilities) = 0;
LABEL_5:
      PopResetCurrentPolicies();
    }
  }
LABEL_6:
  if ( (a1 & 2) == 0 )
    goto LABEL_7;
  if ( a2 )
  {
    if ( BYTE1(PopCapabilities) == 1 )
      goto LABEL_7;
    BYTE1(PopCapabilities) = 1;
  }
  else
  {
    if ( !BYTE1(PopCapabilities) )
      goto LABEL_7;
    BYTE1(PopCapabilities) = 0;
  }
  PopResetCurrentPolicies();
LABEL_7:
  if ( (a1 & 4) != 0 )
  {
    if ( a2 )
    {
      if ( BYTE2(PopCapabilities) == 1 )
        return PopReleasePolicyLock();
      BYTE2(PopCapabilities) = 1;
    }
    else
    {
      if ( !BYTE2(PopCapabilities) )
        return PopReleasePolicyLock();
      BYTE2(PopCapabilities) = 0;
    }
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock();
}
