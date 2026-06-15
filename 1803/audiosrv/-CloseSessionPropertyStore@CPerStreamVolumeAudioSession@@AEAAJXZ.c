/*
 * XREFs of ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041C14
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180041E2C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8FE0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800AAD40 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800ABCA0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180042580 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180042898 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180042DB0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sq @ 0x1800AE104 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CloseSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  CPolicyConfig *v3; // rcx
  unsigned __int16 *v4; // rbx
  CAudioSessionStore *v5; // rcx
  void (*v6)(void); // rax
  ATL::CStringData *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v10; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 129) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToPersistedString((char *)this + 656, &v10, 1LL) < 0 )
    {
      v7 = (ATL::CStringData *)(v10 - 12);
    }
    else
    {
      v3 = WPP_GLOBAL_Control;
      v4 = v10;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          98,
          (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          (_DWORD)v10,
          *((_QWORD *)this + 129));
      }
      CPolicyConfig::ReleaseAudioSessionPropertyStore(v3, v4);
      v5 = (CAudioSessionStore *)*((_QWORD *)this + 129);
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)CAudioSessionStore::Release )
        CAudioSessionStore::Release(v5);
      else
        v6();
      *((_QWORD *)this + 129) = 0LL;
      v7 = (ATL::CStringData *)(v4 - 12);
    }
    ATL::CStringData::Release(v7);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
