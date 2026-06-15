/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005981C
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18005B4B4 (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059594 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180059750 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180059A80 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800DE364 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800DE394 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800DE4BC (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800E15D8 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800E1D70 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800E1E14 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800E52AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800E5CB4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::Initialize(
        CMonitorManager *this,
        BOOL a2,
        __int64 a3,
        CMonitorManager::CaptureMonitor *a4)
{
  CMonitorManager *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  const unsigned int *v7; // r9
  int restarted; // edi
  _QWORD *v9; // rbx
  unsigned int v10; // r15d
  LPVOID v11; // rdi
  void *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  __int64 v17; // rcx
  __int64 *v18; // rax
  CMonitorManager::CaptureMonitor *v19; // rbx
  int v20; // eax
  int v21; // r13d
  __int64 v22; // rax
  struct CMonitorManager::CaptureMonitor *v23; // rbx
  bool v24; // r13
  CMonitor *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // r15
  struct IMMDevice *v28; // [rsp+30h] [rbp-B8h] BYREF
  struct CMonitorManager::CaptureMonitor *v29; // [rsp+38h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v34; // [rsp+60h] [rbp-88h]
  __int128 v35; // [rsp+68h] [rbp-80h] BYREF
  __int64 v36; // [rsp+78h] [rbp-70h]
  __int128 v37; // [rsp+80h] [rbp-68h]
  int v38; // [rsp+90h] [rbp-58h]
  __int64 v39; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+A0h] [rbp-48h] BYREF
  ATL::CAtlException *v41; // [rsp+A8h] [rbp-40h] BYREF
  CMonitorManager *v42; // [rsp+F0h] [rbp+8h] BYREF
  BOOL v43; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v45; // [rsp+108h] [rbp+20h] BYREF

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v42 = this;
  v39 = -2LL;
  v4 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
  }
  v31 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 16);
  v34 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
LABEL_31:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        (unsigned int)restarted);
    }
    v17 = *((_QWORD *)v4 + 8);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v17 + 56LL))(v17, v4);
      Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)v4 + 64));
    }
    while ( v36 )
    {
      v18 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v35,
                         &v42);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v45, *v18);
      if ( v42 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v42 + 16LL))(v42);
      v19 = v45;
      CMonitor::StopIfRunning(*((CMonitor **)v45 + 8));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v19);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_22;
  }
  restarted = CMonitorManager::InitializeMonitorRestartTimer((char *)v4, v5, v6, v7);
  if ( restarted < 0 )
    goto LABEL_31;
  v9 = (_QWORD *)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_31;
  restarted = (*(__int64 (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)*v9 + 48LL))(*v9, v4);
  if ( restarted < 0 )
    goto LABEL_31;
  restarted = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                1LL,
                1LL,
                &v31);
  if ( restarted < 0 )
    goto LABEL_31;
  restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 24LL))(v31, &v32);
  if ( restarted < 0 )
    goto LABEL_31;
  v10 = 0;
  while ( 2 )
  {
    LODWORD(v45) = v10;
    if ( v10 < v32 )
    {
      v28 = 0LL;
      pv = 0LL;
      LOBYTE(v43) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v31 + 32LL))(v31, v10, &v28) < 0 )
      {
        v12 = 0LL;
LABEL_15:
        CoTaskMemFree(v12);
        if ( v28 )
          ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
        goto LABEL_17;
      }
      if ( !CMonitor::IsCaptureMonitorEnabled(v28, (unsigned __int16 **)&pv, (bool *)&v43) )
      {
        v11 = pv;
LABEL_14:
        v12 = v11;
        goto LABEL_15;
      }
      v29 = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
      }
      v11 = pv;
      v20 = CMonitorManager::CreateMonitor(
              v4,
              *((struct IMMDeviceEnumerator **)v4 + 8),
              v28,
              (const unsigned __int16 *)pv,
              v43,
              &v29);
      v21 = v20;
      if ( v20 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            (unsigned int)v20);
        }
        if ( !v29 )
          goto LABEL_14;
        v22 = *(_QWORD *)v29;
        goto LABEL_74;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v23 = v29;
      }
      else
      {
        v23 = v29;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
          v29,
          *((_QWORD *)v29 + 8));
      }
      v24 = v21 == 0;
      LOBYTE(v43) = v24;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v35,
          v23);
      }
      catch ( ATL::CAtlException *v40 )
      {
        v15 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v44) = *(_DWORD *)v15;
        if ( (int)v44 >= 0 )
        {
          v4 = v42;
          v10 = (unsigned int)v45;
          v11 = pv;
          v23 = v29;
          v24 = v43;
          goto LABEL_70;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            (unsigned int)v44);
        }
        if ( v29 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v29 + 16LL))(v29);
        CoTaskMemFree(pv);
        if ( v28 )
          ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
        v4 = v42;
        v10 = (unsigned int)v45;
LABEL_17:
        ++v10;
        continue;
      }
LABEL_70:
      v25 = (CMonitor *)*((_QWORD *)v23 + 8);
      if ( v24 )
        CMonitor::Start(v25);
      else
        CMonitor::Terminate(v25, 1, 0LL);
      v22 = *(_QWORD *)v23;
LABEL_74:
      (*(void (**)(void))(v22 + 16))();
      goto LABEL_14;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 72);
  v45 = (CMonitorManager *)((char *)v4 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  try
  {
    v27 = (_QWORD *)v35;
    while ( v27 )
    {
      v26 = v27[2];
      v27 = (_QWORD *)*v27;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (char *)v4 + 112,
        v26);
    }
  }
  catch ( ATL::CAtlException *v41 )
  {
    v16 = v41;
    if ( *(_DWORD *)v41 == -1073741571 )
      o__resetstkoflw_0();
    LODWORD(v44) = *(_DWORD *)v16;
    v4 = v42;
    restarted = v44;
    v13 = (struct _RTL_CRITICAL_SECTION *)v45;
  }
  LeaveCriticalSection(v13);
  if ( restarted < 0 )
    goto LABEL_31;
LABEL_22:
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v35);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)restarted;
}
