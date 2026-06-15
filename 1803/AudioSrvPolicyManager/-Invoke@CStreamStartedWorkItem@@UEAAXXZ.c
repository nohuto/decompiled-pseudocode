/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000B058 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800116DC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011954 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180011E74 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800124CC (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012918 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180012984 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800129F0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012A5C (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012AF8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180012DE8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015324 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800156A0 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001656C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001CF54 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001D070 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001F468 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180020F74 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x1800272E0 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x180027FB8 (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // eax
  const wchar_t *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  CApplicationManager *v9; // rcx
  unsigned int v10; // r14d
  int PBMRelatedAudioStreamCategory; // edi
  __int64 v12; // r15
  int ActiveRenderStreamCount; // r12d
  int v14; // r12d
  int v15; // r12d
  int v16; // r12d
  unsigned __int8 v17; // al
  __int64 v18; // rax
  CApplicationManager *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // edi
  void (__fastcall **v23)(char *, _QWORD, __int64, _QWORD, bool, int *); // rbx
  char v24; // al
  int v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(v1 + 280);
  v27 = 0;
  v4 = v1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
    if ( v5 > 2 )
      v6 = L"unknown";
    else
      v6 = off_18003B598[v5];
    v7 = *(_DWORD *)(*((_QWORD *)this + 3) + 216LL);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v7, v6, v25);
    v4 = *((_QWORD *)this + 3);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  LOBYTE(v10) = 0;
  v26 = 0;
  if ( v8 < 0x15 )
  {
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                      (struct IAudioProcess *)((v4 + 16) & -(__int64)(v4 != 0)),
                                      v8,
                                      &v26);
    if ( PBMRelatedAudioStreamCategory < 0 )
    {
      LOBYTE(v10) = v26;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu);
      v14 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
      v15 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v14;
      v16 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) + v15;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      v10 = v26;
      CProcess::UpdateStreamCountAndProcessCategory(
        *((CProcess **)this + 3),
        (const unsigned __int16 *)v12,
        v26,
        1,
        v17,
        0LL,
        0LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1))
        || v10 == 2
        || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
        && (unsigned int)CApplication::HasSmtcSubscription(v3, 1) )
      {
        v18 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v18 + 520) == 3 )
        {
          *(_QWORD *)(v18 + 520) = 0LL;
          *(_DWORD *)(v18 + 528) = 4;
        }
        CApplication::RemoveAudioPlaybackRestriction((CApplication *)v3);
        CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
        CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)v3);
      }
      if ( v10 == 2 )
        CApplication::ApplySmtcRelatedPolicy((CApplication *)v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 480LL)
        && (v10 == 2
         || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1))
        && *(_DWORD *)(v3 + 392) )
      {
        CApplication::CleanupGoodFaithExemptionTimer((CApplication *)v3);
        if ( *(_DWORD *)(v3 + 524) == 2 )
        {
          *(_QWORD *)(v3 + 524) = 0LL;
          *(_QWORD *)(v3 + 532) = 0LL;
          *(_QWORD *)(v3 + 540) = 0LL;
          *(_DWORD *)(v3 + 548) = 1;
        }
        v19 = g_ApplicationManager;
        *(_DWORD *)(v3 + 392) = 0;
        CApplicationManager::ApplyPBMPolicy(v19, (struct CApplication *)v3, 209, 0);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1)) )
      {
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3) )
          PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                            g_ApplicationManager,
                                            *(_DWORD *)(v3 + 172),
                                            0);
      }
      else
      {
        v21 = *((_QWORD *)this + 3);
        if ( !*(_DWORD *)(v21 + 472) && *(_DWORD *)(v3 + 176) )
        {
          v22 = *(_DWORD *)(v21 + 220);
          v23 = (void (__fastcall **)(char *, _QWORD, __int64, _QWORD, bool, int *))*((_QWORD *)g_StreamClassPolicyManager
                                                                                    + 2);
          v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
          (*v23)((char *)g_StreamClassPolicyManager + 16, v22, v12, v10, v24 != 0, &v27);
        }
        if ( v27 )
          CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 172), 3u);
        PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                          g_ApplicationManager,
                                          *(_DWORD *)(v3 + 172),
                                          0);
        if ( (v10 - 10 <= 1 || v10 - 1 <= 1) && !v16 )
          CApplication::SendTrackStateNotification(v3);
        if ( v10 - 10 <= 1 || v10 <= 2 )
          TS_SessionIdStreamStarted(
            *(_DWORD *)(*((_QWORD *)this + 3) + 220LL),
            *((struct IAudioStreamInfo **)this + 1),
            (const unsigned __int16 *)v12);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
          CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v9);
      }
    }
  }
  else
  {
    PBMRelatedAudioStreamCategory = -2147024809;
  }
  v20 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v20 + 480) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v9, &EVT_PBM_STREAM_STARTED, *(const wchar_t **)(v3 + 24), *(_DWORD *)(v20 + 216), v10);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Invoke", 261, PBMRelatedAudioStreamCategory);
  }
}
