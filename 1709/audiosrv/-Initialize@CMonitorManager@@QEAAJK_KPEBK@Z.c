/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800A47B8
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x1800A2A00 (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800A3118 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800A3148 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800A3270 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x1800A5164 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800A69B8 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800A7150 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800A71F4 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x1800A8974 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800AA83C (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AB244 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800E8E84 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df495.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::Initialize(
        CMonitorManager *this,
        BOOL a2,
        __int64 a3,
        CMonitorManager::CaptureMonitor *a4)
{
  CMonitorManager *v4; // r14
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  const unsigned int *v7; // r9
  HRESULT restarted; // edi
  _QWORD *v9; // rbx
  unsigned int v10; // r15d
  void *v11; // rcx
  LPVOID v12; // rdi
  int v13; // eax
  int v14; // r13d
  __int64 v15; // rax
  struct CMonitorManager::CaptureMonitor *v16; // rbx
  bool v17; // r13
  CMonitor *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // rax
  CMonitorManager::CaptureMonitor *v23; // rbx
  ATL::CAtlException *v25; // rbx
  ATL::CAtlException *v26; // rbx
  struct IMMDevice *v27; // [rsp+30h] [rbp-B8h] BYREF
  struct CMonitorManager::CaptureMonitor *v28; // [rsp+38h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v33; // [rsp+60h] [rbp-88h]
  __int128 v34; // [rsp+68h] [rbp-80h] BYREF
  __int64 v35; // [rsp+78h] [rbp-70h]
  __int128 v36; // [rsp+80h] [rbp-68h]
  int v37; // [rsp+90h] [rbp-58h]
  __int64 v38; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v39; // [rsp+A0h] [rbp-48h] BYREF
  ATL::CAtlException *v40; // [rsp+A8h] [rbp-40h] BYREF
  CMonitorManager *v41; // [rsp+F0h] [rbp+8h] BYREF
  BOOL v42; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v43; // [rsp+100h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v44; // [rsp+108h] [rbp+20h] BYREF

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v41 = this;
  v38 = -2LL;
  v4 = this;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
  }
  v30 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 10;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 16);
  v33 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
    goto LABEL_60;
  }
  restarted = CMonitorManager::InitializeMonitorRestartTimer(v4, v5, v6, v7);
  if ( restarted < 0
    || (v9 = (_QWORD *)((char *)v4 + 64),
        restarted = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      (LPVOID *)v4 + 8),
        restarted < 0)
    || (restarted = (*(__int64 (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)*v9 + 48LL))(*v9, v4),
        restarted < 0)
    || (restarted = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v9 + 24LL))(
                      *v9,
                      1LL,
                      1LL,
                      &v30),
        restarted < 0)
    || (restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 24LL))(v30, &v31),
        restarted < 0) )
  {
LABEL_60:
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        restarted);
    }
    v21 = *((_QWORD *)v4 + 8);
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v21 + 56LL))(v21, v4);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)v4 + 8);
    }
    while ( v35 )
    {
      v22 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v34,
                         &v41);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v44, *v22);
      if ( v41 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v41 + 16LL))(v41);
      v23 = v44;
      CMonitor::StopIfRunning(*((CMonitor **)v44 + 8));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v23);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_71;
  }
  v10 = 0;
  while ( 2 )
  {
    LODWORD(v44) = v10;
    if ( v10 < v31 )
    {
      v27 = 0LL;
      pv = 0LL;
      LOBYTE(v42) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v30 + 32LL))(v30, v10, &v27) < 0 )
      {
        v11 = 0LL;
        goto LABEL_53;
      }
      if ( !CMonitor::IsCaptureMonitorEnabled(v27, (unsigned __int16 **)&pv, (bool *)&v42) )
      {
        v12 = pv;
        goto LABEL_52;
      }
      v28 = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
      }
      v12 = pv;
      v13 = CMonitorManager::CreateMonitor(v4, *((struct IMMDeviceEnumerator **)v4 + 8), v27, (char *)pv, v42, &v28);
      v14 = v13;
      if ( v13 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            v13);
        }
        if ( !v28 )
          goto LABEL_52;
        v15 = *(_QWORD *)v28;
        goto LABEL_50;
      }
      if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v16 = v28;
      }
      else
      {
        v16 = v28;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xDu,
          (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
          v28,
          *((_QWORD *)v28 + 8));
      }
      v17 = v14 == 0;
      LOBYTE(v42) = v17;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          (__int64 *)&v34,
          (__int64)v16);
      }
      catch ( ATL::CAtlException *v39 )
      {
        v25 = v39;
        if ( *(_DWORD *)v39 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v43) = *(_DWORD *)v25;
        if ( (int)v43 >= 0 )
        {
          v4 = v41;
          v10 = (unsigned int)v44;
          v12 = pv;
          v16 = v28;
          v17 = v42;
          goto LABEL_46;
        }
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xEu,
            (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            v43);
        }
        if ( v28 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v28 + 16LL))(v28);
        CoTaskMemFree(pv);
        if ( v27 )
          ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
        v4 = v41;
        v10 = (unsigned int)v44;
LABEL_55:
        ++v10;
        continue;
      }
LABEL_46:
      v18 = (CMonitor *)*((_QWORD *)v16 + 8);
      if ( v17 )
        CMonitor::Start(v18);
      else
        CMonitor::Terminate(v18, 1, 0LL);
      v15 = *(_QWORD *)v16;
LABEL_50:
      (*(void (**)(void))(v15 + 16))();
LABEL_52:
      v11 = v12;
LABEL_53:
      CoTaskMemFree(v11);
      if ( v27 )
        ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
      goto LABEL_55;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  try
  {
    v20 = (_QWORD *)v34;
    while ( v20 )
    {
      v19 = v20[2];
      v20 = (_QWORD *)*v20;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)v4 + 14,
        v19);
    }
  }
  catch ( ATL::CAtlException *v40 )
  {
    v26 = v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      o__resetstkoflw_0();
    LODWORD(v43) = *(_DWORD *)v26;
    v4 = v41;
    restarted = v43;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  if ( restarted < 0 )
    goto LABEL_60;
LABEL_71:
  if ( v33 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_149a920f_402c_418b_8687_6fa74df4953b>>::RemoveAll(&v34);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)restarted;
}
