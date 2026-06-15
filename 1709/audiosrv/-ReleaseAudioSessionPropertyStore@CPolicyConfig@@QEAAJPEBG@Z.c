/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180086AC8
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180070514 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064F78 (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180084EA0 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180086A90 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig *v2; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 **v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (__int64 *)this;
  v2 = g_PolicyConfig;
  v4 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (__int64 **)((char *)v2 + 72);
  v7 = *((_QWORD *)v2 + 11);
  v8 = *v6;
  v15 = *v6;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
              v5,
              &v15);
      if ( CAudioSessionStore::IsEqual((PCNZWCH *)v9, a2) )
        break;
      if ( !--v7 )
        goto LABEL_15;
      v8 = v15;
    }
    v4 = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 40), 0xFFFFFFFF) == 1 )
    {
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = *v8;
      if ( v8 == *v6 )
        *v6 = (__int64 *)v10;
      else
        *(_QWORD *)v8[1] = v10;
      v11 = v8[1];
      if ( v8 == v6[1] )
        v6[1] = (__int64 *)v11;
      else
        *(_QWORD *)(*v8 + 8) = v11;
      ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode((__int64)v6, v8);
      CAudioSessionStore::Release((CAudioSessionStore *)v9);
    }
  }
  else
  {
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ReleaseAudioSessionPropertyStore", 4830, -2147023728);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
