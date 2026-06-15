/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000B058 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180011848 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011954 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001246C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012918 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180012984 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800129F0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012A5C (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012AF8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015324 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001552C (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001656C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001D070 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001F468 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180020F74 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180027408 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x180027FB8 (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // eax
  const wchar_t *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // edx
  CApplicationManager *v10; // rcx
  int PBMRelatedAudioStreamCategory; // ebx
  __int64 v12; // r15
  unsigned __int8 v13; // al
  _DWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // rax
  CProcess *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rbx
  char v23; // al
  int v24; // [rsp+28h] [rbp-50h]
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(v1 + 280);
  v26 = 0;
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
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
      v7,
      v6,
      v24);
    v4 = *((_QWORD *)this + 3);
  }
  LOBYTE(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  v25 = 0;
  if ( v9 < 0x15 )
  {
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                      (struct IAudioProcess *)((v4 + 16) & -(__int64)(v4 != 0)),
                                      v9,
                                      &v25);
    if ( PBMRelatedAudioStreamCategory < 0 )
    {
      LOBYTE(v8) = v25;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      v8 = v25;
      CProcess::UpdateStreamCountAndProcessCategory(
        *((CProcess **)this + 3),
        (const unsigned __int16 *)v12,
        v25,
        0,
        v13,
        &v27,
        (enum _APPLICATION_CATEGORY *)&v28);
      if ( v27 && v28 == 1 )
      {
        v14 = (_DWORD *)*((_QWORD *)this + 3);
        v15 = v14[131];
        v16 = v15 ? v14[132] : v14[92];
        if ( v16 != 1
          && !v15
          && !v14[118]
          && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v3) )
        {
          v17 = (_DWORD *)*((_QWORD *)this + 3);
          if ( v17[130] != 3 )
          {
            v17[130] = 3;
            v17[131] = 1;
            v17[132] = 1;
          }
          if ( !*(_DWORD *)(v3 + 168) && *(_DWORD *)(v3 + 176) )
            CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)v3);
          CProcess::StartInactivityTimer(*((CProcess **)this + 3));
        }
      }
      if ( ((unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1)
         || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3))
        && !*(_DWORD *)(v3 + 168) )
      {
        v18 = (CProcess *)*((_QWORD *)this + 3);
        if ( !*((_DWORD *)v18 + 118) )
          CProcess::StartInactivityTimer(v18);
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
        if ( (v8 - 10 <= 1 || v8 - 1 <= 1)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
        {
          CApplication::SendTrackStateNotification(v3);
        }
        v20 = *((_QWORD *)this + 3);
        if ( !*(_DWORD *)(v20 + 472) && *(_DWORD *)(v3 + 176) )
        {
          v21 = *(_DWORD *)(v20 + 220);
          v22 = *((_QWORD *)g_StreamClassPolicyManager + 2);
          v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
          (*(void (__fastcall **)(char *, _QWORD, __int64, _QWORD, bool, int *))(v22 + 8))(
            (char *)g_StreamClassPolicyManager + 16,
            v21,
            v12,
            v8,
            v23 != 0,
            &v26);
        }
        if ( v26 )
          CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 172), 3u);
        PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                          g_ApplicationManager,
                                          *(_DWORD *)(v3 + 172),
                                          0);
        if ( v8 - 10 <= 1 || v8 <= 2 )
          TS_SessionIdStreamStopped(
            *(_DWORD *)(*((_QWORD *)this + 3) + 220LL),
            *((struct IAudioStreamInfo **)this + 1),
            (const unsigned __int16 *)v12);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
          CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v10);
      }
    }
  }
  else
  {
    PBMRelatedAudioStreamCategory = -2147024809;
  }
  v19 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v19 + 480) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v10, &EVT_PBM_STREAM_STOPPED, *(const wchar_t **)(v3 + 24), *(_DWORD *)(v19 + 216), v8);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Invoke", 479, PBMRelatedAudioStreamCategory);
  }
}
