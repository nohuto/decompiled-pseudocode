/*
 * XREFs of RIMAbIsDeviceArbitrationSupported @ 0x1C009B3BC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104BC0 (RIMAbConfigureDeviceArbitration.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C009B3E0 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0107E94 (RIMIsRunningOnSurfaceHub.c)
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
