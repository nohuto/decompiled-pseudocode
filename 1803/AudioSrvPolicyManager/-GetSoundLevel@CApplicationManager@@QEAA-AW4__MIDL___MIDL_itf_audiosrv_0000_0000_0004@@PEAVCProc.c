/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001D7E4
 * Callers:
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x18002172C (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 *     PbmGetSoundLevel @ 0x180021E50 (PbmGetSoundLevel.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180016A10 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001D448 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180025DF8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(
        __int64 a1,
        __int64 a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        unsigned __int16 *a5)
{
  CApplicationManager *v8; // rdi
  struct CApplication *v9; // rdx
  unsigned int SoundLevel; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+50h] [rbp-18h]
  struct CApplication *v14; // [rsp+70h] [rbp+8h] BYREF

  HIDWORD(v14) = HIDWORD(a1);
  v8 = g_ApplicationManager;
  LODWORD(v14) = 2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 )
  {
    CProcess::GetSoundLevel((CProcess *)(a2 + 16), a3, a4, a5, (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v14);
    SoundLevel = (unsigned int)v14;
  }
  else
  {
    v9 = *(struct CApplication **)(a2 + 280);
    v14 = v9;
    if ( !v9 )
    {
      if ( (int)CApplicationManager::GetApplication(
                  v8,
                  *(const unsigned __int16 **)(a2 + 232),
                  *(_QWORD *)(a2 + 264),
                  *(_DWORD *)(a2 + 220),
                  &v14,
                  0,
                  0LL) < 0 )
      {
        SoundLevel = (unsigned int)TsSessionIdIsMuted(*(_DWORD *)(a2 + 220)) == 0 ? 2 : 0;
        goto LABEL_8;
      }
      v9 = v14;
    }
    SoundLevel = CApplicationManager::GetSoundLevel((__int64)v8, v9);
  }
LABEL_8:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return SoundLevel;
}
