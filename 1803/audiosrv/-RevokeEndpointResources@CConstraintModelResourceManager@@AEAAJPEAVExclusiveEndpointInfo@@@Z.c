/*
 * XREFs of ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800DA724
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800D90FC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800D90FC.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800D7F64 (--$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800D8DF4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800D9850 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800DA92C (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 *     WPP_SF_SSd @ 0x1800DAED8 (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::RevokeEndpointResources(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExclusiveEndpointInfo *a2)
{
  int v4; // r14d
  const wchar_t *v5; // r9
  __int64 v6; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v8; // rax
  unsigned __int64 v9; // r9
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v14; // [rsp+38h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _WORD v18[146]; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+17Ch] [rbp+74h]

  v17 = -2LL;
  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"n/a";
    if ( *(_WORD *)a2 )
      LODWORD(v5) = (_DWORD)a2;
    WPP_SF_SSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)a2,
      (_DWORD)WPP_GLOBAL_Control,
      (_DWORD)v5,
      (__int64)a2 + 402,
      *((_DWORD *)a2 + 231));
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  p_Type = &this[4].DebugInfo->Type;
  v14 = p_Type;
  while ( p_Type )
  {
    v8 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v6, (__int64)p_Type);
    v10 = v18;
    v11 = 9LL;
    do
    {
      *v10 = *v8;
      v10[1] = v8[1];
      v10[2] = v8[2];
      v10[3] = v8[3];
      v10[4] = v8[4];
      v10[5] = v8[5];
      v10[6] = v8[6];
      v10 += 8;
      *(v10 - 1) = v8[7];
      v8 += 8;
      --v11;
    }
    while ( v11 );
    *v10 = *v8;
    v10[1] = v8[1];
    v10[2] = v8[2];
    v10[3] = v8[3];
    v10[4] = v8[4];
    if ( ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>((__int64)a2, v18, 128LL, v9) )
    {
      ++v4;
      v19 = 1;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v12, p_Type, v18);
    }
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
      v12,
      &v14);
    p_Type = v14;
  }
  if ( (_BYTE)v16 )
    LeaveCriticalSection(lpCriticalSection);
  CConstraintModelResourceManager::ProcessRevokedResources(this);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_917ef38764913c31df93337219a3aa90_Traceguids, v4);
  }
  return 0LL;
}
