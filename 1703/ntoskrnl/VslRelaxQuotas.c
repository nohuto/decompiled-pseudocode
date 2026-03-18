/*
 * XREFs of VslRelaxQuotas @ 0x140688124
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return -1070268386;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return -1073740972;
  return VslpEnterIumSecureMode(1, 40LL, 0LL, (__int64)v2);
}
