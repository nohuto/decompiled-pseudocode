/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800DE974
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800DE950 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059594 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800DE364 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800DE4BC (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800DF3DC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800E1DD0 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800E52AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800E5CB4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v4; // r15d
  CAudioSessionManager *v6; // rcx
  CMonitorManager::CaptureMonitor *v7; // rbx
  CMonitor *v8; // rcx
  CAudioSessionManager *v9; // rcx
  ATL::CAtlException *v10; // rbx
  LPVOID pv; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 *v12; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v14; // [rsp+50h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-50h] BYREF
  char v16; // [rsp+60h] [rbp-48h]
  LPCRITICAL_SECTION v17; // [rsp+68h] [rbp-40h] BYREF
  char v18; // [rsp+70h] [rbp-38h]
  bool v19; // [rsp+B0h] [rbp+8h] BYREF
  int v20; // [rsp+C0h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v21; // [rsp+C8h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v4 = 0;
  v12 = 0LL;
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v16 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  if ( CMonitor::IsCaptureMonitorEnabled(a2, &v12, &v19) )
  {
    pv = 0LL;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Eu,
          (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
          v12);
        v6 = WPP_GLOBAL_Control;
      }
      if ( v6 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v6 + 7) & 0x800000) != 0
        && *((_BYTE *)v6 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v6 + 2), 0x3Fu, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
      }
    }
    v21 = 0LL;
    v4 = CMonitorManager::CreateMonitor(this, *((struct IMMDeviceEnumerator **)this + 8), a2, v12, v19, &v21);
    if ( v4 < 0 )
    {
      v7 = v21;
LABEL_53:
      if ( v7 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
      CoTaskMemFree(pv);
      if ( v4 < 0
        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x46u,
          (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
          v4);
      }
      goto LABEL_60;
    }
    v17 = (LPCRITICAL_SECTION)((char *)this + 72);
    v18 = 0;
    ATL::CCritSecLock::Lock(&v17);
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v7 = v21;
    }
    else
    {
      v7 = v21;
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x40u,
        (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        v21);
    }
    v19 = v4 == 0;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v4 < 0 )
    {
LABEL_50:
      if ( v18 )
        LeaveCriticalSection(v17);
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x41u,
        (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, v13, pv);
    if ( v13[0] )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x44u,
            (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            (const wchar_t *)pv,
            *(_QWORD *)(v13[0] + 80LL));
          v9 = WPP_GLOBAL_Control;
        }
        if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v9 + 7) & 0x800000) != 0
          && *((_BYTE *)v9 + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)v9 + 2),
            0x45u,
            (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            *((_QWORD *)v7 + 8));
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v7);
      goto LABEL_48;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        LOWORD(v13[0]) + 66,
        (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        (const wchar_t *)pv);
    }
    v4 = 0;
    try
    {
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)this + 14,
        (__int64)v7);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v10 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        o__resetstkoflw_0();
      v20 = *(_DWORD *)v10;
      v4 = v20;
      v7 = v21;
      if ( v20 < 0 )
        goto LABEL_48;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x43u,
        (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
        v12);
    }
    v8 = (CMonitor *)*((_QWORD *)v7 + 8);
    if ( v19 )
      CMonitor::Start(v8);
    else
      CMonitor::Terminate(v8, 1, 0LL);
LABEL_48:
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    goto LABEL_50;
  }
LABEL_60:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v12);
  return (unsigned int)v4;
}
