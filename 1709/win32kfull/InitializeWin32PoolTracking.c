/*
 * XREFs of InitializeWin32PoolTracking @ 0x1C0124470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C0142A68 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?StopWin32PoolTracking@@YAXXZ @ 0x1C0142DC4 (-StopWin32PoolTracking@@YAXXZ.c)
 *     ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C01F4B7C (-LoadWin32PoolTrackingSettings@@YAXXZ.c)
 */

__int64 InitializeWin32PoolTracking()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rax
  bool v4; // al
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x50uLL, 0x36497355u);
  v1 = 0;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[8] = 0LL;
    *((_BYTE *)PoolWithTag + 72) = 1;
    WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)PoolWithTag;
    if ( gSessionId == gServiceSessionId )
    {
      v4 = IsWin32kRefreshed();
      if ( gpxsGlobals && (*((_DWORD *)gpxsGlobals + 8) = v4, gpxsGlobals) && !v4 )
        LoadWin32PoolTrackingSettings();
      else
        StopWin32PoolTracking();
    }
    v2 = gpxsGlobals;
    if ( gpxsGlobals && !*((_DWORD *)gpxsGlobals + 8) && *((_DWORD *)gpxsGlobals + 9) )
    {
      v5 = WPP_MAIN_CB.DeviceQueue.1;
      do
      {
        v6 = *(_DWORD *)(v2[5] + 4LL * v1);
        v7 = *(unsigned int *)(*(_QWORD *)&v5 + 44LL);
        if ( (_DWORD)v7 != 10 )
        {
          *(_DWORD *)(*(_QWORD *)&v5 + 4 * v7) = v6;
          ++*(_DWORD *)(*(_QWORD *)&v5 + 44LL);
          *(_DWORD *)(*(_QWORD *)&v5 + 40LL) |= v6;
        }
        v2 = gpxsGlobals;
        ++v1;
      }
      while ( v1 < *((_DWORD *)gpxsGlobals + 9) );
    }
    return 1LL;
  }
  else
  {
    WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)&unk_1C02DF230;
    return 0LL;
  }
}
