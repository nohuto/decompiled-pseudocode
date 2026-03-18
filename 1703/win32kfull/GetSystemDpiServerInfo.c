/*
 * XREFs of GetSystemDpiServerInfo @ 0x1C010355C
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C010352C (GetDPIServerInfoForDpiUnsafe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 GetSystemDpiServerInfo(void)
{
  return GetSessionSystemDpiServerInfo();
}
