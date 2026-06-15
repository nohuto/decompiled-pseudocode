/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800B2158
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800B2950 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180046C4C (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180088288 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18008CE04 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800B1B28 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800B48BC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(CMonitorManager *this, struct IMMDevice *a2)
{
  struct CMonitorManager::CaptureMonitor *v2; // r15
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 *Next; // rax
  CVolumeStrip *v8; // rcx
  _BYTE *v9; // rbx
  unsigned __int64 v10; // r12
  _QWORD *v11; // rcx
  unsigned __int64 i; // r12
  struct CMonitorManager::CaptureMonitor *v13; // rbx
  int v14; // r12d
  unsigned int j; // ebx
  void *v16; // rcx
  int MonitorForCaptureDeviceIfAppropriate; // eax
  unsigned __int64 k; // rbx
  __int64 v19; // rcx
  ATL::CAtlException *v20; // rbx
  LPVOID pv; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-78h] BYREF
  char v25; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION v26; // [rsp+60h] [rbp-68h] BYREF
  char v27; // [rsp+68h] [rbp-60h]
  _QWORD *v28; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+88h] [rbp-40h]
  struct CMonitorManager::CaptureMonitor *v32; // [rsp+D0h] [rbp+8h] BYREF
  struct IMMDevice *v33; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+20h] BYREF

  v33 = a2;
  v32 = this;
  v22[1] = -2LL;
  v2 = this;
  v26 = (LPCRITICAL_SECTION)((char *)this + 16);
  v27 = 0;
  ATL::CCritSecLock::Lock(&v26);
  if ( *((_DWORD *)v2 + 14) != 1 )
    goto LABEL_69;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 72);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v35 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v6 = *((_QWORD *)v2 + 14);
  v22[0] = v6;
  while ( v6 )
  {
    Next = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                        v3,
                        v22);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&pv, *Next);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v9 = pv;
    }
    else
    {
      v9 = pv;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        *((const wchar_t **)pv + 9),
        *(_QWORD *)(*((_QWORD *)pv + 8) + 64LL));
      v8 = WPP_GLOBAL_Control;
    }
    if ( v9[13] )
    {
      if ( v8 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x800000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v8 + 2), 0x1Cu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
      }
      try
      {
        v10 = v5;
        if ( v5 >= v30 )
        {
          if ( !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
                  (__int64)&v28,
                  v5 + 1) )
            ATL::AtlThrowImpl(-2147024882);
          v5 = v29;
          v4 = v28;
        }
        v11 = &v4[v10];
        if ( v11 )
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
            v11,
            (__int64)v9);
        v29 = ++v5;
      }
      catch ( ATL::CAtlException *v23 )
      {
        v20 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v33) = *(_DWORD *)v20;
        if ( (int)v33 < 0 )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
          v2 = v32;
          v5 = v29;
          v4 = v28;
          goto LABEL_25;
        }
        v2 = v32;
        v5 = v29;
        v4 = v28;
        v9 = pv;
      }
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_25:
    v6 = v22[0];
  }
  for ( i = 0LL; i < v5; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v32, v4[i]);
    v33 = 0LL;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
    }
    v13 = v32;
    CMonitorManager::RemoveMonitor(v2, v32);
    if ( v13 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v2 + 8) + 24LL))(
          *((_QWORD *)v2 + 8),
          1LL,
          1LL,
          &v35);
  if ( v14 < 0
    || (v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, &v34), v14 < 0) )
  {
    if ( v4 )
    {
      ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
        (__int64)v4,
        v5);
      goto LABEL_59;
    }
  }
  else
  {
    for ( j = 0; j < v34; ++j )
    {
      v33 = 0LL;
      pv = 0LL;
      LOBYTE(v32) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v35 + 32LL))(v35, j, &v33);
      if ( v14 >= 0 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v33, (unsigned __int16 **)&pv, (bool *)&v32) )
        {
          if ( (_BYTE)v32 )
          {
            MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v2, v33);
            v14 = MonitorForCaptureDeviceIfAppropriate;
            if ( MonitorForCaptureDeviceIfAppropriate < 0
              && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Eu,
                (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
                MonitorForCaptureDeviceIfAppropriate);
            }
          }
        }
        v16 = pv;
      }
      else
      {
        v16 = 0LL;
      }
      CoTaskMemFree(v16);
      if ( v33 )
        ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
    }
    v4 = v28;
    if ( v28 )
    {
      for ( k = 0LL; k < v5; ++k )
      {
        v19 = v4[k];
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
LABEL_59:
      free(v4);
    }
  }
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 < 0
    && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v14);
  }
LABEL_69:
  if ( v27 )
    LeaveCriticalSection(v26);
}
