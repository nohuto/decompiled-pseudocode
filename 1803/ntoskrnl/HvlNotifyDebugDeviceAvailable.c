/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x140229EF0
 * Callers:
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  __int16 v0; // bx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v3[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v4; // [rsp+B0h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)&v4, 8LL) = 1;
  v0 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v2);
  if ( v0 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v3, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 245LL, 0, (__int64)v3);
  }
  return 0LL;
}
