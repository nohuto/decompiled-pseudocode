/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041CFC
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800AAD40 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800AD93C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180042990 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180042DB0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800AE104 (WPP_SF_Sq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  struct IPropertyStore **v3; // rsi
  CPolicyConfig *v4; // rcx
  unsigned __int16 *v5; // rbx
  unsigned int AudioSessionPropertyStore; // eax
  ATL::CStringData *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v11; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v2 = 0;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (struct IPropertyStore **)((char *)this + 1032);
  if ( !*((_QWORD *)this + 129) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v2 = CAudioSessionInstanceId::ToPersistedString((char *)this + 656, &v11, 1LL);
    if ( v2 < 0 )
    {
      v7 = (ATL::CStringData *)(v11 - 12);
    }
    else
    {
      v4 = WPP_GLOBAL_Control;
      v5 = v11;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 95LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v11);
      }
      AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(v4, v5, v3);
      v2 = AudioSessionPropertyStore;
      if ( AudioSessionPropertyStore )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            96LL,
            &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
            AudioSessionPropertyStore);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          97,
          (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          (_DWORD)v5,
          (char)*v3);
      }
      v7 = (ATL::CStringData *)(v5 - 12);
    }
    ATL::CStringData::Release(v7);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::OpenSessionPropertyStore", 0x1172u, v2);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
