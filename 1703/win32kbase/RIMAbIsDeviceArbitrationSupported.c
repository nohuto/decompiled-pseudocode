/*
 * XREFs of RIMAbIsDeviceArbitrationSupported @ 0x1C0007B64
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104D88 (RIMAbConfigureDeviceArbitration.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C0008234 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C010C8C0 (RIMIsRunningOnSurfaceHub.c)
 */

__int64 RIMAbIsDeviceArbitrationSupported()
{
  __int64 result; // rax

  if ( (unsigned int)RIMIsRunningOnDesktop() )
    return 1LL;
  result = RIMIsRunningOnSurfaceHub();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
