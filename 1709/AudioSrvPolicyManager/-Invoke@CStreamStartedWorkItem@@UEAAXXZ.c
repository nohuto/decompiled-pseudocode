/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000695C (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000C750 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000C9C8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000CEF8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000D550 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D9A0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000DA0C (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000DAE4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000DB80 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000F8E4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000FCDC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010B6C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001435C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x1800146E0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180016900 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180017AA8 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001DF70 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x18001EA80 (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  unsigned int v4; // eax
  const wchar_t *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rbx
  unsigned int v8; // eax
  int PBMRelatedAudioStreamCategory; // eax
  CApplicationManager *v10; // rcx
  unsigned int v11; // r14d
  int v12; // edi
  __int64 v13; // r15
  int ActiveRenderStreamCount; // r12d
  int v15; // r12d
  int v16; // r12d
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rax
  CApplicationManager *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edi
  void (__fastcall **v23)(char *, _QWORD, __int64, _QWORD, bool, int *); // rbx
  int v24; // eax
  __int64 v25; // rax
  int v26; // [rsp+28h] [rbp-50h]
  unsigned int v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  v27 = 0;
  v3 = *(_QWORD *)(v1 + 272);
  v28 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
    if ( v4 > 2 )
      v5 = L"unknown";
    else
      v5 = off_18002BF48[v4];
    v6 = *(_DWORD *)(*((_QWORD *)this + 3) + 216LL);
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v6, v5, v26);
  }
  v7 = *((_QWORD *)this + 3);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                    (struct IAudioProcess *)((v7 + 16) & -(__int64)(v7 != 0)),
                                    v8,
                                    &v27);
  v11 = v27;
  v12 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu);
    v15 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
    v16 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v15;
    v17 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) + v16;
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    CProcess::UpdateStreamCountAndProcessCategory(
      *((CProcess **)this + 3),
      (const unsigned __int16 *)v13,
      v11,
      1,
      v18,
      0LL,
      0LL);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1))
      || v11 == 2
      || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
      && (unsigned int)CApplication::HasSmtcSubscription(v3, 1) )
    {
      v19 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v19 + 512) == 3 )
      {
        *(_QWORD *)(v19 + 512) = 0LL;
        *(_DWORD *)(v19 + 520) = 4;
      }
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)v3);
      CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
      CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)v3);
    }
    if ( v11 == 2 )
      CApplication::ApplySmtcRelatedPolicy((CApplication *)v3);
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 472LL)
      && (v11 == 2
       || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
       && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
       && (unsigned int)CApplication::HasSmtcSubscription(v3, 1))
      && *(_DWORD *)(v3 + 392) )
    {
      CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)v3);
      if ( *(_DWORD *)(v3 + 524) == 2 )
      {
        *(_QWORD *)(v3 + 524) = 0LL;
        *(_QWORD *)(v3 + 532) = 0LL;
        *(_QWORD *)(v3 + 540) = 0LL;
        *(_DWORD *)(v3 + 548) = 1;
      }
      v20 = g_ApplicationManager;
      *(_DWORD *)(v3 + 392) = 0;
      CApplicationManager::ApplyPBMPolicy(v20, (struct CApplication *)v3, 209, 0);
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1)) )
    {
      if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3) )
        v12 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v3 + 172), 0);
    }
    else
    {
      v21 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v21 + 464) && *(_DWORD *)(v3 + 176) )
      {
        v22 = *(_DWORD *)(v21 + 220);
        v23 = (void (__fastcall **)(char *, _QWORD, __int64, _QWORD, bool, int *))*((_QWORD *)g_StreamClassPolicyManager
                                                                                  + 2);
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        (*v23)((char *)g_StreamClassPolicyManager + 16, v22, v13, v11, v24 != 0, &v28);
      }
      if ( v28 )
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 172), 3u);
      v12 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v3 + 172), 0);
      if ( (v11 - 10 <= 1 || v11 - 1 <= 1) && !v17 )
        CApplication::SendTrackStateNotification(v3);
      if ( v11 - 10 <= 1 || v11 <= 2 )
        TS_SessionIdStreamStarted(
          *(_DWORD *)(*((_QWORD *)this + 3) + 220LL),
          *((struct IAudioStreamInfo **)this + 1),
          (const unsigned __int16 *)v13);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v10);
    }
  }
  v25 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v25 + 472) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v10, &EVT_PBM_STREAM_STARTED, *(const wchar_t **)(v3 + 24), *(_DWORD *)(v25 + 216), v11);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v12);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Invoke", 261, v12);
  }
}
