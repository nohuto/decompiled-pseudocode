/*
 * XREFs of RIMInitializeDeadzone @ 0x1C00074E8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimDestroyDeadzone @ 0x1C0007424 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C000769C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 RIMInitializeDeadzone()
{
  int v0; // edi
  RIMDeadzone *v1; // rax
  int v2; // edx
  RIMDeadzone *v3; // rbx
  int v4; // edx

  v0 = 0;
  RIMLockExclusive(&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    ++*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1);
  }
  else
  {
    v1 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL);
    v3 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0x40uLL);
      v0 = RIMDeadzone::Initialize(v3);
      if ( v0 < 0 )
      {
        LOBYTE(v4) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          18,
          13,
          (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
        RIMDeadzone::Release(v3);
        rimDestroyDeadzone();
        Win32FreePool(v3);
        v3 = 0LL;
      }
    }
    else
    {
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        18,
        12,
        (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
      v0 = -1073741801;
    }
    RIMDeadzone::s_pRimDeadzoneInstance = v3;
  }
  qword_1C018E7C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v0;
}
