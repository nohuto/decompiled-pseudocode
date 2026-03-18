/*
 * XREFs of rimDestroyDeadzone @ 0x1C0007424
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C00074E8 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0008900 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

void rimDestroyDeadzone()
{
  RIMLockExclusive(&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool(RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C018E7C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
