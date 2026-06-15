/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009050 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180021AF0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180021BB0 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180021CE0 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180021E50 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180021F80 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180022090 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180022130 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x1800221C0 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180022260 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180022340 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180022480 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180022730 (PbmSetScreenReaderState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CA8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ??I?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ @ 0x18000A800 (--I-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A85C (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B0F4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z @ 0x1800139AC (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001A258 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001A4E8 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18001C3B8 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x18001C504 (-FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001F934 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18002000C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002019C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v4; // r15
  unsigned int v5; // eax
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // eax
  unsigned int LastError; // edi
  struct CProcess *v10; // rbx
  HANDLE CurrentThread; // rax
  const char *v12; // r9
  void *v13; // rcx
  bool v14; // cc
  unsigned int TokenInformation; // eax
  char *v16; // rbx
  void *v17; // rdx
  unsigned int v18; // r8d
  const char *v19; // r9
  int ProcessModuleNameAndAppId; // eax
  char v21; // al
  unsigned int PackageClaims; // eax
  unsigned int v23; // eax
  int v24; // eax
  signed int v25; // r9d
  int v26; // eax
  signed int v27; // r9d
  int v28; // eax
  signed int v29; // r9d
  int v30; // edi
  DWORD v31; // edi
  const char *v32; // r9
  int v33; // eax
  void *v34; // rdx
  unsigned int v35; // r8d
  CApplicationManager *v36; // rcx
  int v37; // eax
  const char *v38; // r9
  __int64 v39; // rdx
  PSID *v40; // rdi
  const char *v41; // r9
  unsigned int v42; // r15d
  struct CProcess *v43; // rbx
  signed int v44; // eax
  DWORD v45; // r14d
  signed int v46; // eax
  unsigned int v47; // esi
  __int64 v48; // rdx
  struct CProcess **v49; // rax
  HLOCAL v50; // rsi
  HLOCAL v51; // rdi
  void *v52; // r14
  unsigned __int16 *v53; // r15
  int Instance; // eax
  __int64 v55; // rdx
  RTL_SRWLOCK *v56; // rax
  struct CProcess *v57; // rax
  BOOL v58; // [rsp+88h] [rbp-170h]
  struct CProcess *v59; // [rsp+A0h] [rbp-158h] BYREF
  char v60; // [rsp+A8h] [rbp-150h] BYREF
  char v61; // [rsp+A9h] [rbp-14Fh] BYREF
  bool v62; // [rsp+AAh] [rbp-14Eh]
  void *TokenHandle; // [rsp+B0h] [rbp-148h] BYREF
  HANDLE hObject; // [rsp+B8h] [rbp-140h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-138h] BYREF
  char v66; // [rsp+C8h] [rbp-130h]
  HLOCAL hMem; // [rsp+D0h] [rbp-128h] BYREF
  HLOCAL v68; // [rsp+D8h] [rbp-120h] BYREF
  LPVOID pv; // [rsp+E0h] [rbp-118h] BYREF
  unsigned __int16 *v70; // [rsp+E8h] [rbp-110h] BYREF
  int v71; // [rsp+F0h] [rbp-108h] BYREF
  DWORD dwProcessId; // [rsp+F4h] [rbp-104h] BYREF
  DWORD TokenInformationLength; // [rsp+F8h] [rbp-100h] BYREF
  int v74; // [rsp+FCh] [rbp-FCh]
  int v75; // [rsp+100h] [rbp-F8h] BYREF
  char v76; // [rsp+105h] [rbp-F3h]
  unsigned int v77; // [rsp+108h] [rbp-F0h] BYREF
  int v78; // [rsp+10Ch] [rbp-ECh] BYREF
  int v79; // [rsp+110h] [rbp-E8h]
  int v80; // [rsp+114h] [rbp-E4h]
  CApplicationManager *v81; // [rsp+118h] [rbp-E0h]
  HANDLE SidSubAuthorityCount; // [rsp+120h] [rbp-D8h]
  int v83; // [rsp+128h] [rbp-D0h] BYREF
  int v84; // [rsp+12Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+130h] [rbp-C8h]
  HANDLE v86; // [rsp+138h] [rbp-C0h]
  unsigned int v87; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+148h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+150h] [rbp-A8h] BYREF
  struct CProcess *v90; // [rsp+158h] [rbp-A0h] BYREF
  __int128 v91; // [rsp+160h] [rbp-98h]
  __int64 v92; // [rsp+170h] [rbp-88h]
  _BYTE v93[8]; // [rsp+178h] [rbp-80h] BYREF
  _BYTE v94[8]; // [rsp+180h] [rbp-78h] BYREF
  int v95; // [rsp+188h] [rbp-70h] BYREF
  _BYTE v96[8]; // [rsp+190h] [rbp-68h] BYREF
  PSRWLOCK v97; // [rsp+198h] [rbp-60h]
  ATL::CAtlException *v98; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v99; // [rsp+1A8h] [rbp-50h]
  char v100; // [rsp+1B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]
  unsigned __int8 v102; // [rsp+200h] [rbp+8h]
  unsigned int v103; // [rsp+200h] [rbp+8h]
  char v105; // [rsp+218h] [rbp+20h] BYREF

  v92 = -2LL;
  v4 = g_ApplicationManager;
  v81 = g_ApplicationManager;
  *a3 = 0LL;
  v5 = I_RpcBindingInqLocalClientPID(a2, &dwProcessId);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3AF,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             (const char *)v5);
  SRWLock = (PSRWLOCK)((char *)v4 + 120);
  AcquireSRWLockShared((PSRWLOCK)v4 + 15);
  v59 = 0LL;
  CApplicationManager::FindProcess(v4, dwProcessId, &v59);
  if ( v4 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v4 + 15);
  if ( !v59 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 32);
    v66 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    AcquireSRWLockShared((PSRWLOCK)v4 + 15);
    v7 = (volatile signed __int32 *)v59;
    v59 = 0LL;
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
    }
    CApplicationManager::FindProcess(v4, dwProcessId, &v59);
    if ( v4 != (CApplicationManager *)-120LL )
      ReleaseSRWLockShared((PSRWLOCK)v4 + 15);
    if ( !v59 )
    {
      v8 = RpcImpersonateClient(a2);
      if ( v8 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x3C6,
                      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                      (const char *)v8);
        goto LABEL_14;
      }
      v76 = 1;
      TokenHandle = 0LL;
      CurrentThread = GetCurrentThread();
      if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x3CA,
                      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                      v12);
        v13 = TokenHandle;
        v14 = (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_22:
        if ( v14 )
          CloseHandle(v13);
        RpcRevertToSelf();
        goto LABEL_14;
      }
      hMem = 0LL;
      v68 = 0LL;
      TokenInformation = GetTokenInformation(
                           TokenHandle,
                           (unsigned __int16 **)&v68,
                           &v77,
                           (unsigned __int16 **)&hMem,
                           &v87);
      if ( TokenInformation )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x3D0,
                      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                      (const char *)TokenInformation);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
LABEL_30:
        v13 = TokenHandle;
        v14 = (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
        goto LABEL_22;
      }
      v16 = (char *)OpenProcess(0x101000u, 0, dwProcessId);
      v86 = v16;
      if ( !v16 && GetLastError() == 5 )
      {
        v16 = (char *)OpenProcess(0x100400u, 0, dwProcessId);
        v86 = v16;
        if ( (unsigned __int64)(v16 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          wil::details::in1diag3::_Log_GetLastError(retaddr, v17, v18, v19);
      }
      v89 = -1LL;
      pv = 0LL;
      v70 = 0LL;
      ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(v16, &v70, (unsigned __int16 **)&pv);
      LastError = ProcessModuleNameAndAppId;
      if ( ProcessModuleNameAndAppId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EA,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)ProcessModuleNameAndAppId);
LABEL_37:
        if ( pv )
          CoTaskMemFree(pv);
        if ( v70 )
          CoTaskMemFree(v70);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
        goto LABEL_30;
      }
      hObject = 0LL;
      if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v83, v94, v93) < 0
        || (v80 = 1, (unsigned int)(v83 - 65537) > 1) )
      {
        v80 = 0;
      }
      if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v84, v96, &v95) < 0 || (v21 = 1, v84 != 917505) )
        v21 = 0;
      v102 = v21;
      v79 = 0;
      v71 = 0;
      v75 = 0;
      v74 = 0;
      v62 = 0;
      if ( v21 && v77 )
      {
        v88 = 0LL;
        PackageClaims = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL);
        if ( PackageClaims )
        {
          v23 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x405,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)PackageClaims);
          goto LABEL_58;
        }
        v62 = (v88 & 0x10) != 0;
        v105 = 0;
        v24 = CapabilityCheck(-6LL, L"voipCall", &v105);
        v25 = (unsigned __int16)v24 | 0x80070000;
        if ( v24 <= 0 )
          v25 = v24;
        if ( v25 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v25);
        }
        v79 = v105 != 0;
        v60 = 0;
        v71 = 0;
        v75 = 0;
        v26 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v60);
        v27 = (unsigned __int16)v26 | 0x80070000;
        if ( v26 <= 0 )
          v27 = v26;
        if ( v27 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v27);
        }
        if ( v60 )
        {
          v71 = 1;
          v75 = 0;
        }
        v61 = 0;
        v74 = 0;
        v28 = CapabilityCheck(-6LL, L"backgroundMediaRecording", &v61);
        v29 = (unsigned __int16)v28 | 0x80070000;
        if ( v28 <= 0 )
          v29 = v28;
        if ( v29 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v29);
        }
        v30 = v74;
        if ( v61 )
          v30 = 1;
        v74 = v30;
        SidSubAuthorityCount = hObject;
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        {
          v31 = GetLastError();
          CloseHandle(SidSubAuthorityCount);
          SetLastError(v31);
        }
        hObject = 0LL;
        if ( !OpenProcessToken(v16, 8u, &hObject) )
        {
          v23 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x417,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v32);
          goto LABEL_58;
        }
        v33 = RtlQueryTokenHostIdAsUlong64(hObject, &v89);
        if ( v33 < 0 )
        {
          v23 = wil::details::in1diag3::Return_NtStatus(retaddr, v34, v35, (const char *)(unsigned int)v33, 0);
LABEL_58:
          LastError = v23;
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_37;
        }
      }
      v76 = 0;
      RpcRevertToSelf();
      if ( !v102 || v71 )
      {
        v71 = 1;
      }
      else
      {
        v37 = CApplicationManager::ReadBackgroundAudioTaskCapability(v36, hObject, &v71, &v75);
        LastError = v37;
        if ( v37 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x42B,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)(unsigned int)v37);
LABEL_95:
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          if ( pv )
            CoTaskMemFree(pv);
          if ( v70 )
            CoTaskMemFree(v70);
          if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v16);
          if ( hMem )
            LocalFree(hMem);
          if ( v68 )
            LocalFree(v68);
          if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(TokenHandle);
LABEL_14:
          if ( v66 )
            LeaveCriticalSection(lpCriticalSection);
          v10 = v59;
          if ( !v59 || _InterlockedExchangeAdd((volatile signed __int32 *)v59 + 2, 0xFFFFFFFF) != 1 )
            return LastError;
          goto LABEL_18;
        }
      }
      v78 = 0;
      if ( v77 && !(unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v4 + 2), &v78) )
      {
        v39 = 1079LL;
LABEL_114:
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v39,
                      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                      v38);
        goto LABEL_95;
      }
      TokenInformationLength = 0;
      GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
      if ( GetLastError() != 122 )
      {
        v39 = 1087LL;
        goto LABEL_114;
      }
      v40 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
      if ( !v40 )
      {
        LastError = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x442,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)0x8007000ELL);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v70 )
          CoTaskMemFree(v70);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v66 )
          LeaveCriticalSection(lpCriticalSection);
        v10 = v59;
        if ( !v59 || _InterlockedExchangeAdd((volatile signed __int32 *)v59 + 2, 0xFFFFFFFF) != 1 )
          return LastError;
LABEL_18:
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 32LL))(v10);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
        return LastError;
      }
      if ( !GetTokenInformation(TokenHandle, TokenIntegrityLevel, v40, TokenInformationLength, &TokenInformationLength) )
      {
        v42 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x444,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                v41);
        LocalFree(v40);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v70 )
          CoTaskMemFree(v70);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v66 )
          LeaveCriticalSection(lpCriticalSection);
        v43 = v59;
        if ( !v59 || _InterlockedExchangeAdd((volatile signed __int32 *)v59 + 2, 0xFFFFFFFF) != 1 )
          return v42;
        goto LABEL_156;
      }
      SidSubAuthorityCount = GetSidSubAuthorityCount(*v40);
      v44 = GetLastError();
      v42 = (unsigned __int16)v44 | 0x80070000;
      if ( v44 <= 0 )
        v42 = v44;
      if ( (v42 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x449,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)v42);
        LocalFree(v40);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v70 )
          CoTaskMemFree(v70);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v66 )
          LeaveCriticalSection(lpCriticalSection);
        v43 = v59;
        if ( !v59 || _InterlockedExchangeAdd((volatile signed __int32 *)v59 + 2, 0xFFFFFFFF) != 1 )
          return v42;
LABEL_156:
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v43 + 32LL))(v43);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v43 + 24LL))(v43, 1LL);
        return v42;
      }
      if ( !SidSubAuthorityCount || !*(_BYTE *)SidSubAuthorityCount )
      {
        v47 = -2147418113;
        v48 = 1098LL;
        goto LABEL_186;
      }
      v45 = *GetSidSubAuthority(*v40, (unsigned __int8)(*(_BYTE *)SidSubAuthorityCount - 1));
      v46 = GetLastError();
      v47 = (unsigned __int16)v46 | 0x80070000;
      if ( v46 <= 0 )
        v47 = v46;
      if ( (v47 & 0x80000000) != 0 )
      {
        v48 = 1103LL;
LABEL_186:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v48,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)v47);
        LocalFree(v40);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v70 )
          CoTaskMemFree(v70);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( hMem )
          LocalFree(hMem);
        if ( v68 )
          LocalFree(v68);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v66 )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_244;
      }
      LocalFree(v40);
      v49 = (struct CProcess **)wil::com_ptr_t<CProcess,wil::err_returncode_policy>::operator&((volatile signed __int32 **)&v59);
      v58 = v45 < 0x2000;
      v50 = hMem;
      v51 = v68;
      v52 = pv;
      v53 = v70;
      Instance = CProcess::CreateInstance(
                   v16,
                   dwProcessId,
                   v87,
                   v70,
                   (const unsigned __int16 *)pv,
                   (HANDLE)v89,
                   (const unsigned __int16 *)v68,
                   v77 != 0,
                   (const unsigned __int16 *)hMem,
                   v80,
                   v102,
                   v79,
                   v71,
                   v75,
                   v74,
                   v62,
                   v78,
                   v58,
                   v49);
      v103 = Instance;
      if ( Instance < 0 )
      {
        v55 = 1127LL;
LABEL_204:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v55,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
          (const char *)(unsigned int)Instance);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( v52 )
          CoTaskMemFree(v52);
        if ( v53 )
          CoTaskMemFree(v53);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
        if ( v50 )
          LocalFree(v50);
        if ( v51 )
          LocalFree(v51);
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        if ( v66 )
          LeaveCriticalSection(lpCriticalSection);
        v47 = v103;
        goto LABEL_244;
      }
      Instance = CApplicationManager::Register(v81, v59);
      v103 = Instance;
      if ( Instance < 0 )
      {
        v55 = 1129LL;
        goto LABEL_204;
      }
      *(_QWORD *)&v91 = v81;
      *((_QWORD *)&v91 + 1) = &v59;
      v99 = v91;
      v100 = 1;
      SidSubAuthorityCount = SRWLock;
      AcquireSRWLockExclusive(SRWLock);
      v97 = SRWLock;
      try
      {
        v90 = v59;
        ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((__int64 *)v81 + 16, &v90);
      }
      catch ( ATL::CAtlException *v98 )
      {
        if ( *(_DWORD *)v98 == -1073741571 )
          _o__resetstkoflw();
        v81 = (CApplicationManager *)v91;
        v56 = (RTL_SRWLOCK *)SidSubAuthorityCount;
        goto LABEL_225;
      }
      v56 = SRWLock;
LABEL_225:
      if ( v56 )
        ReleaseSRWLockExclusive(v56);
      _InterlockedIncrement((volatile signed __int32 *)v59 + 2);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v70 )
        CoTaskMemFree(v70);
      if ( (char *)v86 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(v86);
      if ( hMem )
        LocalFree(hMem);
      if ( v68 )
        LocalFree(v68);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
    }
    if ( v66 )
      LeaveCriticalSection(lpCriticalSection);
  }
  v57 = v59;
  v59 = 0LL;
  *a3 = v57;
  v47 = 0;
LABEL_244:
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v59);
  return v47;
}
