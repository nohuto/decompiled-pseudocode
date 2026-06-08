/*
 * XREFs of IsHwpPackageControlSupported @ 0x1C0006EA4
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C0006B70 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004EE0 (GetCpuIdInfo.c)
 */

bool IsHwpPackageControlSupported()
{
  char v0; // bl
  unsigned int v2[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v3[4]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(0, v2);
  if ( v2[0] >= 6 )
  {
    GetCpuIdInfo(6u, v3);
    return (v3[0] & 0x880) == 2176;
  }
  return v0;
}
