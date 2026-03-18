/*
 * XREFs of InitVideo @ 0x1C00A6740
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C0078670 (DrvCloseLocalGraphicsDevices.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00894E0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 *     DrvInitConsole @ 0x1C00A68B8 (DrvInitConsole.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00A6AC0 (UpdateExternalMonitorConnectedStatus.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // si
  int v2; // ebx
  __int64 v4; // rcx
  struct _MDEV *v5; // rdi
  struct _DEVCAPS *v6; // rdx
  struct _MDEV *v8; // [rsp+88h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v8 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbRemoteSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  if ( (int)DrvSetDisplayConfig(0, 0LL, 0x98Fu, 2u, 0LL, 0, 0LL, 0LL, &v8, 0LL, 0LL, 0LL, 0LL, a1) < 0 )
    return 0LL;
  if ( !gProtocolType )
  {
    LOBYTE(v4) = 1;
    UpdateExternalMonitorConnectedStatus(v4);
  }
  v5 = v8;
  v6 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *(_QWORD *)(gpDispInfo + 32) = *(_QWORD *)v8;
  *(_QWORD *)(gpDispInfo + 8) = v5;
  v8 = *(struct _MDEV **)(gpDispInfo + 32);
  vGetDeviceCaps((struct PDEVOBJ *)&v8, v6);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseLocalGraphicsDevices();
  }
  else if ( (int)IsCacheRotationInfoSupported() >= 0 )
  {
    CacheRotationInfo();
  }
  gdwHydraHint |= 4u;
  return v5;
}
