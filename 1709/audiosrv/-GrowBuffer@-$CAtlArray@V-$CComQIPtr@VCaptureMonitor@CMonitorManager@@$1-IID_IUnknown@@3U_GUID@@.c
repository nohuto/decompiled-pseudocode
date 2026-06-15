/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18006CF78
 * Callers:
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x18006C558 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x180079290 (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x1800792F0 (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A3B98 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  const void *v11; // rdx
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      v7 = *(int *)(a1 + 24);
      if ( !v7 )
      {
        v7 = v4 >> 1;
        if ( a2 - v4 > v4 >> 1 )
          v7 = a2 - v4;
      }
      if ( a2 < v4 + v7 )
        a2 = v4 + v7;
      v8 = calloc(a2, 8uLL);
      v10 = v8;
      if ( !v8 )
        return 0;
      v11 = *(const void **)a1;
      v12 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !v11 )
        {
          *(_DWORD *)_o__errno(v9, 0LL) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v8, v11, v12);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v10;
    }
    else
    {
      if ( *(int *)(a1 + 24) > a2 )
        a2 = *(int *)(a1 + 24);
      v5 = calloc(a2, 8uLL);
      *(_QWORD *)a1 = v5;
      if ( !v5 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}
