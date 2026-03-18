/*
 * XREFs of rimDestroyDeadzone @ 0x1C0096F70
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C000A6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMInitializeDeadzone @ 0x1C0096ED4 (RIMInitializeDeadzone.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void rimDestroyDeadzone()
{
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool((__int64)RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C0193688 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
