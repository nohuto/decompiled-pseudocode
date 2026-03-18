/*
 * XREFs of VslRelaxQuotas @ 0x1406B4054
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return -1070268386;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return -1073740972;
  return VslpEnterIumSecureMode(2u, 46LL, 0, (__int64)v2);
}
