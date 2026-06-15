/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0
 * Callers:
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x1800154C0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015640 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001F710 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_SS @ 0x18000B4B0 (WPP_SF_SS.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BFCC (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000C07C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000C854 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000C8BC (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000D4B4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000D4F0 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D9A0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000DA0C (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000DAE4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000DB80 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DBFC (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x1800146E0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x1800152D4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  const wchar_t *v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v6; // [rsp+50h] [rbp-28h]
  DWORD pcbData; // [rsp+80h] [rbp+8h] BYREF
  int pvData; // [rsp+88h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = L"NOT_INTERACTIVE";
    if ( *((_DWORD *)a2 + 42) )
      v4 = (const wchar_t *)L"INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
      *((const wchar_t **)a2 + 3),
      v4);
  }
  if ( !*((_DWORD *)a2 + 42) )
  {
    *((_DWORD *)a2 + 144) = 1;
    *((_DWORD *)a2 + 145) = 1;
    if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
        && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
        || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
      {
        if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
          && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
          && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
          *((_DWORD *)a2 + 145) = 0;
        }
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
          *((_DWORD *)a2 + 144) = 0;
        }
        goto LABEL_38;
      }
      if ( dword_18002E1D8[(int)CApplication::Category((__int64)a2)] )
      {
        if ( !dword_18002E1D8[(int)CApplication::RawCategory((__int64)a2)] && *((_DWORD *)a2 + 44) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
      }
      else
      {
        if ( !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
        {
          CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
LABEL_38:
          CApplicationManager::ApplyPBMPolicy(this, a2, 209, 1);
          goto LABEL_39;
        }
        if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
          goto LABEL_38;
        if ( (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
          goto LABEL_38;
        pcbData = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                L"DisableExemptionForBCMStartupLatency",
                0x18u,
                0LL,
                &pvData,
                &pcbData) )
        {
          if ( pvData )
            goto LABEL_38;
        }
        CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
      }
    }
    *((_DWORD *)a2 + 145) = 0;
    goto LABEL_38;
  }
  *((_QWORD *)a2 + 72) = 0LL;
  if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)a2);
  *(_QWORD *)((char *)a2 + 524) = 0LL;
  *(_QWORD *)((char *)a2 + 532) = 0LL;
  *(_QWORD *)((char *)a2 + 540) = 0LL;
  *((_DWORD *)a2 + 137) = 1;
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 43), 1);
LABEL_39:
  CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 0);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
