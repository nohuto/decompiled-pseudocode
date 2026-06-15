/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180005400 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x1800185B0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180018670 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x1800187A0 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180018890 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180018990 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180018AA0 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180018B40 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180018BD0 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180018C70 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180018D50 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180018E90 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180019140 (PbmSetScreenReaderState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002AB0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z @ 0x18000E3A0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180011208 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180011FBC (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180012248 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x1800139B8 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x180013B04 (-FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180016C48 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v5; // rdi
  int v6; // r15d
  char *v7; // r13
  RPC_STATUS v8; // eax
  int Process; // edi
  HANDLE CurrentThread; // rax
  int LastError; // eax
  signed int v12; // eax
  unsigned int v13; // ecx
  signed int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  int v17; // eax
  signed int v18; // r9d
  int v19; // eax
  signed int v20; // r9d
  int v21; // ebx
  int v22; // eax
  signed int v23; // r9d
  CApplicationManager *v24; // rcx
  const char *v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // ebx
  PSID *v29; // rbx
  const char *v30; // r9
  signed int v31; // eax
  __int64 v32; // rdx
  signed int v33; // eax
  BOOL v34; // edi
  struct CProcess *v35; // rbx
  ATL::CAtlException *v36; // rbx
  char v37[4]; // [rsp+90h] [rbp-118h] BYREF
  int v38; // [rsp+94h] [rbp-114h]
  int v39; // [rsp+98h] [rbp-110h] BYREF
  unsigned int Pid; // [rsp+9Ch] [rbp-10Ch] BYREF
  DWORD TokenInformationLength; // [rsp+A0h] [rbp-108h] BYREF
  int v42; // [rsp+A4h] [rbp-104h] BYREF
  int v43; // [rsp+A8h] [rbp-100h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp-F8h] BYREF
  char v45; // [rsp+B8h] [rbp-F0h]
  struct CProcess *v46; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v47; // [rsp+C8h] [rbp-E0h] BYREF
  void *TokenHandle; // [rsp+D0h] [rbp-D8h] BYREF
  int v49; // [rsp+D8h] [rbp-D0h] BYREF
  int v50; // [rsp+DCh] [rbp-CCh] BYREF
  int v51; // [rsp+E0h] [rbp-C8h]
  int v52; // [rsp+E4h] [rbp-C4h]
  int v53; // [rsp+E8h] [rbp-C0h]
  PUCHAR SidSubAuthorityCount; // [rsp+F0h] [rbp-B8h]
  HANDLE hObject; // [rsp+F8h] [rbp-B0h] BYREF
  int v56; // [rsp+100h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+104h] [rbp-A4h] BYREF
  char *v58; // [rsp+108h] [rbp-A0h]
  HLOCAL hMem; // [rsp+110h] [rbp-98h] BYREF
  HLOCAL v60; // [rsp+118h] [rbp-90h] BYREF
  HLOCAL v61; // [rsp+120h] [rbp-88h] BYREF
  HLOCAL v62; // [rsp+128h] [rbp-80h] BYREF
  CApplicationManager *v63; // [rsp+138h] [rbp-70h]
  __int64 v64; // [rsp+140h] [rbp-68h]
  char v65[8]; // [rsp+148h] [rbp-60h] BYREF
  char v66[8]; // [rsp+150h] [rbp-58h] BYREF
  char v67[8]; // [rsp+158h] [rbp-50h] BYREF
  char v68[8]; // [rsp+160h] [rbp-48h] BYREF
  ATL::CAtlException *v69; // [rsp+168h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]
  CApplicationManager *v71; // [rsp+1B0h] [rbp+8h] BYREF
  struct CProcess **v72; // [rsp+1C0h] [rbp+18h]
  char v73; // [rsp+1C8h] [rbp+20h] BYREF

  v72 = a3;
  v71 = this;
  v64 = -2LL;
  v5 = g_ApplicationManager;
  v63 = g_ApplicationManager;
  v46 = 0LL;
  v6 = 0;
  v38 = 0;
  v7 = 0LL;
  TokenHandle = 0LL;
  hObject = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  hMem = 0LL;
  v60 = 0LL;
  v53 = 0;
  v43 = 0;
  v52 = 0;
  v39 = 0;
  v42 = 0;
  v51 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v45 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a3 = 0LL;
  v8 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  if ( v8 )
  {
    Process = (unsigned __int16)v8 | 0x80070000;
    if ( v8 <= 0 )
      Process = v8;
    goto LABEL_4;
  }
  Process = CApplicationManager::FindProcess(v5, Pid, &v46);
  if ( Process != -2147023728 )
    goto LABEL_104;
  if ( RpcImpersonateClient(a2) )
    goto LABEL_106;
  v38 = 1;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = GetLastError();
LABEL_9:
    Process = (unsigned __int16)LastError | 0x80070000;
LABEL_10:
    if ( LastError <= 0 )
      Process = LastError;
    v6 = 1;
    goto LABEL_106;
  }
  LastError = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v61, &v47, (unsigned __int16 **)&v62, &v57);
  if ( LastError )
    goto LABEL_9;
  v7 = (char *)OpenProcess(0x101000u, 0, Pid);
  v58 = v7;
  if ( !v7 )
  {
    v12 = GetLastError();
    v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v13 = v12;
    if ( v13 == -2147024891 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids);
      }
      v7 = (char *)OpenProcess(0x100400u, 0, Pid);
      v58 = v7;
      if ( !v7 )
      {
        v14 = GetLastError();
        v15 = (unsigned __int16)v14 | 0x80070000;
        if ( v14 <= 0 )
          v15 = v14;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v15);
        }
        AudPolicyLogError("CApplicationManager::RpcGetProcess", 1009, v15);
      }
    }
  }
  Process = GetProcessModuleNameAndAppId((__int64)v7, (__int64)&hMem, (unsigned __int16 **)&v60);
  if ( Process < 0 )
    goto LABEL_4;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v56, v66, v65) >= 0 )
    v53 = (unsigned int)(v56 - 65537) <= 1;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v49, v68, v67) < 0 )
    goto LABEL_64;
  v16 = v49 == 917505;
  v43 = v16;
  if ( v49 == 917505 && v47 )
  {
    LOBYTE(v71) = 0;
    v17 = CapabilityCheck(-6LL, L"voipCall", &v71);
    v18 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      v18 = v17;
    if ( v18 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v18);
    }
    v52 = (_BYTE)v71 != 0;
    v73 = 0;
    v39 = 0;
    v42 = 0;
    v19 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v73);
    v20 = (unsigned __int16)v19 | 0x80070000;
    if ( v19 <= 0 )
      v20 = v19;
    if ( v20 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v20);
    }
    if ( v73 )
    {
      v39 = 1;
      v42 = 0;
    }
    v37[0] = 0;
    v21 = 0;
    v22 = CapabilityCheck(-6LL, L"backgroundMediaRecording", v37);
    v23 = (unsigned __int16)v22 | 0x80070000;
    if ( v22 <= 0 )
      v23 = v22;
    if ( v23 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v23);
    }
    if ( v37[0] )
      v21 = 1;
    v51 = v21;
    if ( !OpenProcessToken(v7, 8u, &hObject) )
    {
      LastError = GetLastError();
LABEL_63:
      Process = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_10;
    }
LABEL_64:
    v16 = v43;
  }
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_63;
  v38 = 0;
  if ( !v16 || v39 )
  {
    v39 = 1;
  }
  else
  {
    Process = CApplicationManager::ReadBackgroundAudioTaskCapability(v24, hObject, &v39, &v42);
    if ( Process < 0 )
      goto LABEL_4;
  }
  v50 = 0;
  if ( !v47 || (unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v63 + 2), &v50) )
  {
    TokenInformationLength = 0;
    GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
    if ( GetLastError() != 122 )
    {
      v26 = 1098LL;
      goto LABEL_74;
    }
    v29 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    if ( !v29 )
    {
      v27 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44D,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_75;
    }
    if ( !GetTokenInformation(TokenHandle, TokenIntegrityLevel, v29, TokenInformationLength, &TokenInformationLength) )
    {
      Process = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x44F,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v30);
LABEL_84:
      LocalFree(v29);
LABEL_123:
      if ( v45 )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)Process;
    }
    SidSubAuthorityCount = GetSidSubAuthorityCount(*v29);
    v31 = GetLastError();
    Process = (unsigned __int16)v31 | 0x80070000;
    if ( v31 <= 0 )
      Process = v31;
    if ( Process < 0 )
    {
      v32 = 1108LL;
LABEL_89:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v32,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)Process);
      goto LABEL_84;
    }
    if ( !SidSubAuthorityCount || !*SidSubAuthorityCount )
    {
      Process = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x455,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_84;
    }
    LODWORD(SidSubAuthorityCount) = *GetSidSubAuthority(*v29, (unsigned __int8)(*SidSubAuthorityCount - 1));
    v33 = GetLastError();
    Process = (unsigned __int16)v33 | 0x80070000;
    if ( v33 <= 0 )
      Process = v33;
    if ( Process < 0 )
    {
      v32 = 1114LL;
      goto LABEL_89;
    }
    v34 = (unsigned int)SidSubAuthorityCount < 0x2000;
    LocalFree(v29);
    Process = CProcess::CreateInstance(
                v7,
                Pid,
                v57,
                (const unsigned __int16 *)hMem,
                (const unsigned __int16 *)v60,
                (const unsigned __int16 *)v61,
                v47 != 0,
                (const unsigned __int16 *)v62,
                v53,
                v43,
                v52,
                v39,
                v42,
                v51,
                v50,
                v34,
                &v46);
    if ( Process >= 0 )
    {
      try
      {
        ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((__int64 *)v63 + 15, &v46);
      }
      catch ( ATL::CAtlException *v69 )
      {
        v36 = v69;
        if ( *(_DWORD *)v69 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(SidSubAuthorityCount) = *(_DWORD *)v36;
        Process = (int)SidSubAuthorityCount;
        v7 = v58;
        if ( (int)SidSubAuthorityCount < 0 )
          goto LABEL_105;
      }
      _InterlockedAdd((volatile signed __int32 *)v46 + 2, 1u);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, Pid);
      }
LABEL_104:
      *v72 = v46;
      v46 = 0LL;
      Process = 0;
LABEL_105:
      v6 = 0;
      goto LABEL_106;
    }
LABEL_4:
    v6 = v38;
LABEL_106:
    LocalFree(hMem);
    LocalFree(v60);
    LocalFree(v61);
    LocalFree(v62);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(TokenHandle);
      TokenHandle = 0LL;
    }
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v7);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
    if ( v46 && _InterlockedExchangeAdd((volatile signed __int32 *)v46 + 2, 0xFFFFFFFF) == 1 )
    {
      v35 = v46;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v46 + 32LL))(v46);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v35 + 24LL))(v35, 1LL);
    }
    if ( v6 )
      RpcRevertToSelf();
    if ( Process < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, Process);
      }
      AudPolicyLogError("CApplicationManager::RpcGetProcess", 1166, Process);
    }
    goto LABEL_123;
  }
  v26 = 1090LL;
LABEL_74:
  v27 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)v26,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          v25);
LABEL_75:
  if ( v45 )
    LeaveCriticalSection(lpCriticalSection);
  return v27;
}
