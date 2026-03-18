/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1401E75D0
 * Callers:
 *     PopHiberCheckResume @ 0x140409FA0 (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
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
    VslpEnterIumSecureMode(1, 243LL, 0LL, (__int64)v3);
  }
  return 0LL;
}
