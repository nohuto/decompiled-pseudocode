/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000695C (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000C8BC (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000C9C8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000D4F0 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D9A0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000DA0C (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000DAE4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000DB80 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000F8E4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000FB68 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010B6C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001435C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x1800146E0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180016900 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180017AA8 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E098 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq @ 0x18001EA80 (McTemplateU0zqq.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  unsigned int v4; // eax
  const wchar_t *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rbx
  unsigned int v8; // eax
  int PBMRelatedAudioStreamCategory; // eax
  CApplicationManager *v10; // rcx
  unsigned int v11; // r14d
  int v12; // ebx
  __int64 v13; // r15
  int v14; // eax
  _DWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // rax
  CProcess *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  int v25; // [rsp+28h] [rbp-50h]
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+90h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 3);
  v26 = 0;
  v3 = *(_QWORD *)(v1 + 272);
  v27 = 0;
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
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
      v6,
      v5,
      v25);
  }
  v7 = *((_QWORD *)this + 3);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                    (struct IAudioProcess *)((v7 + 16) & -(__int64)(v7 != 0)),
                                    v8,
                                    &v26);
  v11 = v26;
  v12 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    CProcess::UpdateStreamCountAndProcessCategory(
      *((CProcess **)this + 3),
      (const unsigned __int16 *)v13,
      v11,
      0,
      v14,
      (int *)&v26,
      (enum _APPLICATION_CATEGORY *)&v28);
    if ( v26 && v28 == 1 )
    {
      v15 = (_DWORD *)*((_QWORD *)this + 3);
      v16 = v15[129];
      v17 = v16 ? v15[130] : v15[90];
      if ( v17 != 1
        && !v16
        && !v15[116]
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v3) )
      {
        v18 = (_DWORD *)*((_QWORD *)this + 3);
        if ( v18[128] != 3 )
        {
          v18[128] = 3;
          v18[129] = 1;
          v18[130] = 1;
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
      v19 = (CProcess *)*((_QWORD *)this + 3);
      if ( !*((_DWORD *)v19 + 116) )
        CProcess::StartInactivityTimer(v19);
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1)) )
    {
      if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3) )
        v12 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v3 + 172), 0);
    }
    else
    {
      if ( (v11 - 10 <= 1 || v11 - 1 <= 1)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
      {
        CApplication::SendTrackStateNotification(v3);
      }
      v20 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v20 + 464) && *(_DWORD *)(v3 + 176) )
      {
        v21 = *(_DWORD *)(v20 + 220);
        v22 = *((_QWORD *)g_StreamClassPolicyManager + 2);
        v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        (*(void (__fastcall **)(char *, _QWORD, __int64, _QWORD, bool, int *))(v22 + 8))(
          (char *)g_StreamClassPolicyManager + 16,
          v21,
          v13,
          v11,
          v23 != 0,
          &v27);
      }
      if ( v27 )
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 172), 3u);
      v12 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v3 + 172), 0);
      if ( v11 - 10 <= 1 || v11 <= 2 )
        TS_SessionIdStreamStopped(
          *(_DWORD *)(*((_QWORD *)this + 3) + 220LL),
          *((struct IAudioStreamInfo **)this + 1),
          (const unsigned __int16 *)v13);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v10);
    }
  }
  v24 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v24 + 472) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq((__int64)v10, &EVT_PBM_STREAM_STOPPED, *(const wchar_t **)(v3 + 24), *(_DWORD *)(v24 + 216), v11);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v12);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Invoke", 479, v12);
  }
}
