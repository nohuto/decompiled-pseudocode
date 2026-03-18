/*
 * XREFs of IsHypervisorLpiCapable @ 0x1C000622C
 * Callers:
 *     AcpiRootIsFeatureSupported @ 0x1C001D2F0 (AcpiRootIsFeatureSupported.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

_BOOL8 IsHypervisorLpiCapable()
{
  char v0; // cl
  _BOOL8 result; // rax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]

  v0 = AcpiRootLpiCapableHypervisor;
  if ( AcpiRootLpiCapableHypervisor != 2 )
    return v0 == 1;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL) < 0 || (v3 & 0x40000) == 0 )
  {
    v0 = 0;
    AcpiRootLpiCapableHypervisor = 0;
    return v0 == 1;
  }
  result = 1LL;
  AcpiRootLpiCapableHypervisor = 1;
  return result;
}
