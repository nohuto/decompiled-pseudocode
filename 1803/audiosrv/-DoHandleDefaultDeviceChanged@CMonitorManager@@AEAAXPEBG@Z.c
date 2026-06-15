/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800DEDF8
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800DF6A0 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059594 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x1800A5A28 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800DE7CC (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x1800DF5A8 (-GrowBuffer@-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800E1644 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(CMonitorManager *this, struct IMMDevice *a2)
{
  struct CMonitorManager::CaptureMonitor *v2; // r15
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 *Next; // rax
  CAudioSessionManager *v8; // rcx
  _BYTE *v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 i; // r12
  struct CMonitorManager::CaptureMonitor *v12; // rbx
  int v13; // r12d
  unsigned int j; // ebx
  void *v15; // rcx
  int MonitorForCaptureDeviceIfAppropriate; // eax
  unsigned __int64 k; // rbx
  __int64 v18; // rcx
  ATL::CAtlException *v19; // rbx
  LPVOID pv; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v21[2]; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-78h] BYREF
  char v24; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION v25; // [rsp+60h] [rbp-68h] BYREF
  char v26; // [rsp+68h] [rbp-60h]
  _QWORD *v27; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+80h] [rbp-48h]
  int v30; // [rsp+88h] [rbp-40h]
  struct CMonitorManager::CaptureMonitor *v31; // [rsp+D0h] [rbp+8h] BYREF
  struct IMMDevice *v32; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+20h] BYREF

  v32 = a2;
  v31 = this;
  v21[1] = (_QWORD *)-2LL;
  v2 = this;
  v25 = (LPCRITICAL_SECTION)((char *)this + 16);
  v26 = 0;
  ATL::CCritSecLock::Lock(&v25);
  if ( *((_DWORD *)v2 + 14) != 1 )
    goto LABEL_67;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 72);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v34 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v6 = (_QWORD *)*((_QWORD *)v2 + 14);
  v21[0] = v6;
  while ( v6 )
  {
    Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
             v3,
             v21);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&pv, *Next);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
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
        (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        *((const wchar_t **)pv + 9),
        *(_QWORD *)(*((_QWORD *)pv + 8) + 64LL));
      v8 = WPP_GLOBAL_Control;
    }
    if ( v9[13] )
    {
      if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x800000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v8 + 2), 0x1Cu, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
      }
      try
      {
        v10 = v5;
        if ( v5 >= v29 )
        {
          if ( !(unsigned __int8)ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::GrowBuffer(
                                   &v27,
                                   v5 + 1) )
            ATL::AtlThrowImpl(-2147024882);
          v5 = v28;
          v4 = v27;
        }
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
          &v4[v10],
          (__int64)v9);
        v28 = ++v5;
      }
      catch ( ATL::CAtlException *v22 )
      {
        v19 = v22;
        if ( *(_DWORD *)v22 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v32) = *(_DWORD *)v19;
        if ( (int)v32 < 0 )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
          v2 = v31;
          v5 = v28;
          v4 = v27;
          goto LABEL_23;
        }
        v2 = v31;
        v5 = v28;
        v4 = v27;
        v9 = pv;
      }
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_23:
    v6 = v21[0];
  }
  for ( i = 0LL; i < v5; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v31, v4[i]);
    v32 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
    }
    v12 = v31;
    CMonitorManager::RemoveMonitor(v2, v31);
    if ( v12 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v2 + 8) + 24LL))(
          *((_QWORD *)v2 + 8),
          1LL,
          1LL,
          &v34);
  if ( v13 < 0
    || (v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v33), v13 < 0) )
  {
    if ( v4 )
    {
      ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
        (__int64)v4,
        v5);
      goto LABEL_57;
    }
  }
  else
  {
    for ( j = 0; j < v33; ++j )
    {
      v32 = 0LL;
      pv = 0LL;
      LOBYTE(v31) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v34 + 32LL))(v34, j, &v32);
      if ( v13 >= 0 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v32, (unsigned __int16 **)&pv, (bool *)&v31) )
        {
          if ( (_BYTE)v31 )
          {
            MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v2, v32);
            v13 = MonitorForCaptureDeviceIfAppropriate;
            if ( MonitorForCaptureDeviceIfAppropriate < 0
              && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Eu,
                (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
                MonitorForCaptureDeviceIfAppropriate);
            }
          }
        }
        v15 = pv;
      }
      else
      {
        v15 = 0LL;
      }
      CoTaskMemFree(v15);
      if ( v32 )
        ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->Release)(v32);
    }
    if ( v4 )
    {
      for ( k = 0LL; k < v5; ++k )
      {
        v18 = v4[k];
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
LABEL_57:
      free(v4);
    }
  }
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v13 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids, v13);
  }
LABEL_67:
  if ( v26 )
    LeaveCriticalSection(v25);
}
