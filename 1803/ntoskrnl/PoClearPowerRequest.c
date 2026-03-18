/*
 * XREFs of PoClearPowerRequest @ 0x140077210
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x140077528 (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 */

NTSTATUS __stdcall PoClearPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  signed int v2; // eax
  __int32 v3; // edx
  __int32 v5; // edx

  v2 = 0;
  if ( Type == PowerRequestDisplayRequired )
    return PoClearPowerRequestInternal((__int64)PowerRequest, v2);
  v3 = Type - 1;
  if ( !v3 )
  {
    v2 = 1;
    return PoClearPowerRequestInternal((__int64)PowerRequest, v2);
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    v2 = 2;
    return PoClearPowerRequestInternal((__int64)PowerRequest, v2);
  }
  if ( v5 == 1 )
  {
    v2 = 3;
    return PoClearPowerRequestInternal((__int64)PowerRequest, v2);
  }
  return -1073741637;
}
