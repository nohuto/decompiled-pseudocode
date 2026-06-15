/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001D448
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001D63C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001D7E4 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180010F60 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800117E0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180011848 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x1800122C4 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012918 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180012984 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800129F0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012A5C (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012AF8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18001F818 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)a2 + 134) )
  {
    v3 = *((_DWORD *)a2 + 135);
  }
  else if ( *((_DWORD *)a2 + 42)
         || (v4 = (int)CApplication::Category((__int64)a2), (unsigned int)CApplication::HasBackgroundAudioTask(a2))
         || (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
         && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
         && ((unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2)
          || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2))
         || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2)
         && ((unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2)
          || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
    v3 = 2;
  }
  else if ( dword_18003E1A0[v4] )
  {
    CApplication::HasDuckedStream(a2);
    v3 = 2 - (v5 != 0);
  }
  else
  {
    v3 = 0;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
