/*
 * XREFs of VslRelaxQuotas @ 0x140718C84
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
