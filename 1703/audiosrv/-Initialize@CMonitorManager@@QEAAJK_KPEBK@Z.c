/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800349B4
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18003657C (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180034C14 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180034CE4 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180046C4C (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B16DC (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800B170C (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800B1834 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800B484C (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800B4FE8 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800B508C (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800B76D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800B80E0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
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
  LPVOID v11; // rdi
  void *v12; // rcx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // rbx
  int v16; // eax
  int v17; // r13d
  __int64 v18; // rax
  struct CMonitorManager::CaptureMonitor *v19; // rbx
  bool v20; // r13
  CMonitor *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  CMonitorManager::CaptureMonitor *v26; // rbx
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
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
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
LABEL_66:
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        (unsigned int)restarted);
    }
    v24 = *((_QWORD *)v4 + 8);
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v24 + 56LL))(v24, v4);
      Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)v4 + 64));
    }
    while ( v35 )
    {
      v25 = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                        &v34,
                        &v41);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v44, *v25);
      if ( v41 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v41 + 16LL))(v41);
      v26 = v44;
      CMonitor::StopIfRunning(*((CMonitor **)v44 + 8));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v26);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_24;
  }
  restarted = CMonitorManager::InitializeMonitorRestartTimer(v4, v5, v6, v7);
  if ( restarted < 0 )
    goto LABEL_66;
  v9 = (_QWORD *)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_66;
  restarted = (*(__int64 (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)*v9 + 48LL))(*v9, v4);
  if ( restarted < 0 )
    goto LABEL_66;
  restarted = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                1LL,
                1LL,
                &v30);
  if ( restarted < 0 )
    goto LABEL_66;
  restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 24LL))(v30, &v31);
  if ( restarted < 0 )
    goto LABEL_66;
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
        v12 = 0LL;
LABEL_17:
        CoTaskMemFree(v12);
        if ( v27 )
          ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
        goto LABEL_19;
      }
      if ( !CMonitor::IsCaptureMonitorEnabled(v27, (unsigned __int16 **)&pv, (bool *)&v42) )
      {
        v11 = pv;
LABEL_16:
        v12 = v11;
        goto LABEL_17;
      }
      v28 = 0LL;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
      }
      v11 = pv;
      v16 = CMonitorManager::CreateMonitor(
              v4,
              *((struct IMMDeviceEnumerator **)v4 + 8),
              v27,
              (const unsigned __int16 *)pv,
              v42,
              &v28);
      v17 = v16;
      if ( v16 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            (unsigned int)v16);
        }
        if ( !v28 )
          goto LABEL_16;
        v18 = *(_QWORD *)v28;
        goto LABEL_64;
      }
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v19 = v28;
      }
      else
      {
        v19 = v28;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
          v28,
          *((_QWORD *)v28 + 8));
      }
      v20 = v17 == 0;
      LOBYTE(v42) = v20;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v34,
          v19);
      }
      catch ( ATL::CAtlException *v39 )
      {
        v14 = v39;
        if ( *(_DWORD *)v39 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v43) = *(_DWORD *)v14;
        if ( (int)v43 >= 0 )
        {
          v4 = v41;
          v10 = (unsigned int)v44;
          v11 = pv;
          v19 = v28;
          v20 = v42;
          goto LABEL_60;
        }
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            (unsigned int)v43);
        }
        if ( v28 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v28 + 16LL))(v28);
        CoTaskMemFree(pv);
        if ( v27 )
          ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
        v4 = v41;
        v10 = (unsigned int)v44;
LABEL_19:
        ++v10;
        continue;
      }
LABEL_60:
      v21 = (CMonitor *)*((_QWORD *)v19 + 8);
      if ( v20 )
        CMonitor::Start(v21);
      else
        CMonitor::Terminate(v21, 1, 0LL);
      v18 = *(_QWORD *)v19;
LABEL_64:
      (*(void (**)(void))(v18 + 16))();
      goto LABEL_16;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  try
  {
    v23 = (_QWORD *)v34;
    while ( v23 )
    {
      v22 = v23[2];
      v23 = (_QWORD *)*v23;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (char *)v4 + 112,
        v22);
    }
  }
  catch ( ATL::CAtlException *v40 )
  {
    v15 = v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      o__resetstkoflw_0();
    LODWORD(v43) = *(_DWORD *)v15;
    v4 = v41;
    restarted = v43;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  if ( restarted < 0 )
    goto LABEL_66;
LABEL_24:
  if ( v33 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v34);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)restarted;
}
