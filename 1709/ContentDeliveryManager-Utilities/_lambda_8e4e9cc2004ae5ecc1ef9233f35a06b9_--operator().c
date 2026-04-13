/*
 * XREFs of _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9__&___ptr64_::Run @ 0x18004BF00 (wil--details--functor_wrapper_void__lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9__-___ptr64_--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180045220 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180045DB0 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180045E9C (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x1800460B4 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800467D0 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180046BFC (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180048194 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180048904 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180048B08 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180048F1C (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
HRESULT __fastcall lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator()(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  const char *v4; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  unsigned __int128 v10; // kr10_16
  __int64 *i; // r14
  __int64 *v12; // r15
  unsigned __int128 v13; // kr20_16
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // r14
  int v17; // edi
  HSTRING v18; // rcx
  __int64 v19; // rcx
  ToastNotification::ActivityToastNotificationCallback *v20; // rcx
  LSTATUS v21; // eax
  unsigned __int64 v22; // r9
  const char *v23; // rdx
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-2A8h]
  HSTRING v26; // [rsp+40h] [rbp-288h] BYREF
  HSTRING v27; // [rsp+48h] [rbp-280h] BYREF
  __int64 v28; // [rsp+50h] [rbp-278h] BYREF
  __int64 v29; // [rsp+58h] [rbp-270h]
  __int64 v30; // [rsp+60h] [rbp-268h] BYREF
  HSTRING string; // [rsp+68h] [rbp-260h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-258h] BYREF
  __int64 v33; // [rsp+78h] [rbp-250h]
  int v34; // [rsp+80h] [rbp-248h] BYREF
  __int64 v35; // [rsp+88h] [rbp-240h]
  __int64 v36; // [rsp+90h] [rbp-238h]
  unsigned __int128 v37; // [rsp+98h] [rbp-230h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-220h]
  __int64 v39; // [rsp+B0h] [rbp-218h]
  struct _GUID v40; // [rsp+C0h] [rbp-208h] BYREF
  char *v41[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-1E8h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-1E0h]
  GUID rguid; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v45[4]; // [rsp+100h] [rbp-1C8h] BYREF
  int v46; // [rsp+120h] [rbp-1A8h]
  int *v47; // [rsp+128h] [rbp-1A0h]
  int *v48; // [rsp+130h] [rbp-198h]
  int v49; // [rsp+138h] [rbp-190h] BYREF
  char v50; // [rsp+13Ch] [rbp-18Ch]
  int v51; // [rsp+160h] [rbp-168h] BYREF
  const char *v52; // [rsp+168h] [rbp-160h]
  __int64 v53; // [rsp+170h] [rbp-158h]
  char v54; // [rsp+178h] [rbp-150h]
  __int64 v55; // [rsp+180h] [rbp-148h]
  _BYTE v56[144]; // [rsp+188h] [rbp-140h] BYREF
  __int64 v57; // [rsp+218h] [rbp-B0h]
  __int64 v58; // [rsp+220h] [rbp-A8h]
  __int64 v59; // [rsp+228h] [rbp-A0h]
  __int64 v60; // [rsp+230h] [rbp-98h]
  OLECHAR sz[40]; // [rsp+240h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v39 = -2LL;
  try
  {
    v2 = 0LL;
    v43 = 15LL;
    v42 = 0LL;
    LOBYTE(v41[0]) = 0;
    WindowsDeleteString(0LL);
    string = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      v3,
      **(_QWORD **)(a1 + 8),
      &string,
      &rguid,
      &v34,
      v41);
    v4 = (const char *)v41;
    if ( v43 >= 0x10 )
      v4 = v41[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v45[1] = 0LL;
    v45[2] = v45;
    v45[3] = 0LL;
    v46 = 0;
    v47 = &v51;
    v48 = &v49;
    v49 = 0;
    v50 = 0;
    v54 = 0;
    v51 = 0;
    v52 = "HandleResumableTaskNotificationActivity";
    v53 = 0LL;
    v55 = 1LL;
    v57 = 0LL;
    v58 = 0LL;
    memset_0(v56, 0, sizeof(v56));
    v59 = 0LL;
    v60 = 0LL;
    v45[0] = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
    v40 = rguid;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v45,
      &v40,
      StringRawBuffer,
      v4);
    v6 = CDPInitialize();
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v6);
    StringFromGUID2(&rguid, sz, 39);
    v36 = 0LL;
    v35 = 0LL;
    MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&SystemTimeAsFileTime);
    MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
      &v37,
      *(_QWORD *)&SystemTimeAsFileTime);
    v7 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v10 = v37;
    v9 = (_QWORD *)(v10 >> 64);
    v8 = (_QWORD *)v10;
    v13 = v37;
    v12 = (__int64 *)(v13 >> 64);
    for ( i = (__int64 *)v13; i != v12; ++i )
    {
      v14 = *i;
      v28 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v30 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v14 + 40LL))(v14, &rguid, &v30) >= 0 )
      {
        v15 = v30;
        v30 = 0LL;
        v35 = v15;
        v36 = v14;
        v16 = 0;
        v7 = v15;
        v2 = v14;
        v9 = (_QWORD *)*((_QWORD *)&v37 + 1);
        v8 = (_QWORD *)v37;
        goto LABEL_16;
      }
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v9 = (_QWORD *)*((_QWORD *)&v37 + 1);
      v8 = (_QWORD *)v37;
    }
    v16 = 1;
LABEL_16:
    if ( v8 )
    {
      if ( v8 != v9 )
      {
        do
        {
          if ( *v8 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
          ++v8;
        }
        while ( v8 != v9 );
        v8 = (_QWORD *)v37;
      }
      operator delete(v8);
      v37 = 0LL;
      v38 = 0LL;
    }
    if ( SystemTimeAsFileTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&SystemTimeAsFileTime + 16LL))(SystemTimeAsFileTime);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      v16,
      (__int64)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    v17 = v34;
    SystemTimeAsFileTime.dwLowDateTime = v34;
    v33 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v27 = 0LL;
    v18 = 0LL;
    v26 = 0LL;
    LODWORD(v28) = v17;
    v29 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v18 = v26;
    }
    WindowsDeleteString(v18);
    v26 = 0LL;
    WindowsDeleteString(v27);
    v27 = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v19, &v28, &v27, &v26);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v20, v27, v26);
    LODWORD(v28) = v17;
    v29 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(*(_QWORD *)a1, &v28, v2);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v21 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v22 = (unsigned __int16)v21 | 0x80070000;
    if ( v21 <= 0 )
      v22 = (unsigned int)v21;
    if ( (v22 & 0x80000000) != 0LL )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x80,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
        (const char *)v22);
    v23 = (const char *)v41;
    if ( v43 >= 0x10 )
      v23 = v41[0];
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v45,
      v23);
    WindowsDeleteString(v26);
    v26 = 0LL;
    WindowsDeleteString(v27);
    v27 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v45);
    if ( v43 >= 0x10 )
      operator delete(v41[0]);
    v43 = 15LL;
    v42 = 0LL;
    LOBYTE(v41[0]) = 0;
    result = WindowsDeleteString(string);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x8F,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
