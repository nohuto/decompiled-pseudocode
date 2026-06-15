/*
 * XREFs of ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180031018
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18001D440 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18001DB78 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18001DC20 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008AC90 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18008E330 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x1800318C0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x180031BD4 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180031F44 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sq @ 0x1800908E4 (WPP_SF_Sq.c)
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
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1064);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 138) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      &v10,
      (volatile signed __int32 *)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToPersistedString((char *)this + 792, &v10, 1LL) < 0 )
    {
      v7 = (ATL::CStringData *)(v10 - 12);
    }
    else
    {
      v3 = WPP_GLOBAL_Control;
      v4 = v10;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          125,
          (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          (_DWORD)v10,
          *((_QWORD *)this + 138));
      }
      CPolicyConfig::ReleaseAudioSessionPropertyStore(v3, v4);
      v5 = (CAudioSessionStore *)*((_QWORD *)this + 138);
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)CAudioSessionStore::Release )
        CAudioSessionStore::Release(v5);
      else
        v6();
      *((_QWORD *)this + 138) = 0LL;
      v7 = (ATL::CStringData *)(v4 - 12);
    }
    ATL::CStringData::Release(v7);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
