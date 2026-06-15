/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180083FA0
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074174 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180084D2C (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180084EA0 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAudioSessionStore@@PEAV312@1@Z @ 0x180085BC4 (-NewNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180086A90 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct IPropertyStore **a3)
{
  struct IPropertyStore **v3; // r12
  CPolicyConfig *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 *v8; // r15
  volatile signed __int32 *v9; // rsi
  int v10; // r14d
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v17; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v19; // [rsp+48h] [rbp-30h]
  volatile signed __int32 *v21; // [rsp+98h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v3 = a3;
  v5 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)v5 + 11);
  v8 = (__int64 *)((char *)v5 + 72);
  v16[0] = *((_QWORD *)v5 + 9);
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *(volatile signed __int32 **)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                                          v6,
                                          v16);
      v21 = v9;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v9, a2) )
        break;
      if ( !--v7 )
        goto LABEL_6;
    }
    v10 = 0;
  }
  else
  {
LABEL_6:
    v11 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *v11 = &CAudioSessionStore::`vftable';
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x19u,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v11);
      }
      *((_DWORD *)v12 + 2) = 1;
      *((_DWORD *)v12 + 10) = 0;
      v12[2] = 0LL;
      v12[3] = 0LL;
      v12[4] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v9 = (volatile signed __int32 *)v12;
    v21 = (volatile signed __int32 *)v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      goto LABEL_25;
    }
    v10 = CAudioSessionStore::Initialize((CAudioSessionStore *)v12, a2);
    if ( v10 < 0 )
      goto LABEL_21;
    try
    {
      v14 = ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::NewNode(v8, &v21, v13, *v8);
      if ( *v8 )
        *(_QWORD *)(*v8 + 8) = v14;
      else
        v8[1] = v14;
      *v8 = v14;
    }
    catch ( ATL::CAtlException *v17 )
    {
      v3 = a3;
      v10 = *(_DWORD *)v17;
      v9 = v21;
    }
    if ( v10 < 0 )
    {
LABEL_21:
      CAudioSessionStore::Release((CAudioSessionStore *)v12);
      v21 = 0LL;
      goto LABEL_25;
    }
  }
  if ( v9 )
  {
    *v3 = (struct IPropertyStore *)v9;
    _InterlockedIncrement(v9 + 2);
    _InterlockedIncrement(v21 + 10);
    goto LABEL_26;
  }
LABEL_25:
  *v3 = 0LL;
LABEL_26:
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetAudioSessionPropertyStore", 4762, v10);
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
