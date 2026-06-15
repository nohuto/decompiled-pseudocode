/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074174
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18002CFB0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002D410 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180076698 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x180076E90 (WPP_SF_Sq.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18007EF84 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180083FA0 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  struct IPropertyStore **v3; // rsi
  ATL::CStringData *v4; // rcx
  CPolicyConfig *v5; // rcx
  unsigned __int16 *v6; // rbx
  int AudioSessionPropertyStore; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v11; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1048);
  v2 = 0;
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (struct IPropertyStore **)((char *)this + 1088);
  if ( !*((_QWORD *)this + 136) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, (__int64)&ATL::g_strmgr);
    v2 = CAudioSessionInstanceId::ToPersistedString((char *)this + 720, &v11, 1LL);
    if ( v2 >= 0 )
    {
      v5 = WPP_GLOBAL_Control;
      v6 = v11;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x73u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          v11);
      }
      AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(v5, v6, v3);
      v2 = AudioSessionPropertyStore;
      if ( AudioSessionPropertyStore )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x74u,
            (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
            AudioSessionPropertyStore);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          117,
          (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          (_DWORD)v6,
          (char)*v3);
      }
      v4 = (ATL::CStringData *)(v6 - 12);
    }
    else
    {
      v4 = (ATL::CStringData *)(v11 - 12);
    }
    ATL::CStringData::Release(v4);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::OpenSessionPropertyStore", 5042, v2);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
