/*
 * XREFs of LdrInitializeMrdata @ 0x1800D6C08
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 */

NTSTATUS LdrInitializeMrdata()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]

  LdrpMrdataLock.0 = 0LL;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    LdrpPageSize = v2;
    LdrpAllocationGranularity = v3;
    return 0;
  }
  return result;
}
