/*
 * XREFs of _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9__&___ptr64_::Run @ 0x18004FE30 (wil--details--functor_wrapper_void__lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9__-___ptr64_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180048F50 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180049ABC (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180049BF0 (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180049E10 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004A490 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18004A8E0 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BE44 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004C5D8 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18004C7EC (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004CAE0 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
HRESULT __fastcall lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator()(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  const char *v4; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  char v6; // r13
  int v7; // eax
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 *i; // r14
  __int64 *v11; // r15
  unsigned __int128 v12; // kr10_16
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r14
  int v16; // edi
  HSTRING v17; // rcx
  __int64 v18; // rcx
  ToastNotification::ActivityToastNotificationCallback *v19; // rcx
  LSTATUS v20; // eax
  unsigned __int64 v21; // r9
  const char *v22; // rdx
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-2A8h]
  HSTRING v25; // [rsp+40h] [rbp-288h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-280h] BYREF
  __int64 v27; // [rsp+50h] [rbp-278h] BYREF
  __int64 v28; // [rsp+58h] [rbp-270h]
  __int64 v29; // [rsp+60h] [rbp-268h] BYREF
  HSTRING string; // [rsp+68h] [rbp-260h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-258h] BYREF
  __int64 v32; // [rsp+78h] [rbp-250h]
  int v33; // [rsp+80h] [rbp-248h] BYREF
  __int64 v34; // [rsp+88h] [rbp-240h]
  __int64 v35; // [rsp+90h] [rbp-238h]
  unsigned __int128 v36; // [rsp+98h] [rbp-230h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-220h]
  __int64 v38; // [rsp+B0h] [rbp-218h]
  struct _GUID v39; // [rsp+C0h] [rbp-208h] BYREF
  char *v40[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-1E8h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-1E0h]
  GUID rguid; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v44[4]; // [rsp+100h] [rbp-1C8h] BYREF
  int v45; // [rsp+120h] [rbp-1A8h]
  int *v46; // [rsp+128h] [rbp-1A0h]
  int *v47; // [rsp+130h] [rbp-198h]
  int v48; // [rsp+138h] [rbp-190h] BYREF
  char v49; // [rsp+13Ch] [rbp-18Ch]
  int v50; // [rsp+160h] [rbp-168h] BYREF
  const char *v51; // [rsp+168h] [rbp-160h]
  __int64 v52; // [rsp+170h] [rbp-158h]
  char v53; // [rsp+178h] [rbp-150h]
  __int64 v54; // [rsp+180h] [rbp-148h]
  _BYTE v55[144]; // [rsp+188h] [rbp-140h] BYREF
  __int64 v56; // [rsp+218h] [rbp-B0h]
  __int64 v57; // [rsp+220h] [rbp-A8h]
  __int64 v58; // [rsp+228h] [rbp-A0h]
  __int64 v59; // [rsp+230h] [rbp-98h]
  OLECHAR sz[40]; // [rsp+240h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v38 = -2LL;
  try
  {
    v2 = 0LL;
    v42 = 15LL;
    v41 = 0LL;
    LOBYTE(v40[0]) = 0;
    WindowsDeleteString(0LL);
    string = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      v3,
      **(_QWORD **)(a1 + 8),
      &string,
      &rguid,
      &v33,
      v40);
    v4 = (const char *)v40;
    if ( v42 >= 0x10 )
      v4 = v40[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v44[1] = 0LL;
    v44[2] = v44;
    v44[3] = 0LL;
    v45 = 0;
    v46 = &v50;
    v47 = &v48;
    v48 = 0;
    v49 = 0;
    v53 = 0;
    v50 = 0;
    v51 = "HandleResumableTaskNotificationActivity";
    v52 = 0LL;
    v6 = 1;
    v54 = 1LL;
    v56 = 0LL;
    memset_0(v55, 0, sizeof(v55));
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v44[0] = &MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::`vftable';
    v39 = rguid;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44,
      &v39,
      StringRawBuffer,
      v4);
    v7 = CDPInitialize();
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18004BDB7LL);
    }
    StringFromGUID2(&rguid, sz, 39);
    v35 = 0LL;
    v34 = 0LL;
    MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&SystemTimeAsFileTime);
    MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
      &v36,
      *(_QWORD *)&SystemTimeAsFileTime);
    v8 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v12 = v36;
    v11 = (__int64 *)(v12 >> 64);
    v9 = (_QWORD *)v12;
    for ( i = (__int64 *)v36; i != v11; ++i )
    {
      v13 = *i;
      v27 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v29 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 40LL))(v13, &rguid, &v29) >= 0 )
      {
        v14 = v29;
        v29 = 0LL;
        v34 = v14;
        v35 = v13;
        v6 = 0;
        v8 = v14;
        v2 = v13;
        v9 = (_QWORD *)v36;
        break;
      }
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v9 = (_QWORD *)v36;
    }
    if ( v9 )
    {
      v15 = (_QWORD *)*((_QWORD *)&v36 + 1);
      if ( v9 != *((_QWORD **)&v36 + 1) )
      {
        do
        {
          if ( *v9 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
          ++v9;
        }
        while ( v9 != v15 );
        v9 = (_QWORD *)v36;
      }
      operator delete(v9);
      v36 = 0LL;
      v37 = 0LL;
    }
    if ( SystemTimeAsFileTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&SystemTimeAsFileTime + 16LL))(SystemTimeAsFileTime);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      v6,
      (__int64)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    v16 = v33;
    SystemTimeAsFileTime.dwLowDateTime = v33;
    v32 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v26 = 0LL;
    v17 = 0LL;
    v25 = 0LL;
    LODWORD(v27) = v16;
    v28 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v17 = v25;
    }
    WindowsDeleteString(v17);
    v25 = 0LL;
    WindowsDeleteString(v26);
    v26 = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v18, &v27, &v26, &v25);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v19, v26, v25);
    LODWORD(v27) = v16;
    v28 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(*(_QWORD *)a1, &v27, v2);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v20 = RegSetKeyValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
            L"LastResumeOnPCInteractionTime",
            0xBu,
            &SystemTimeAsFileTime,
            8u);
    v21 = (unsigned __int16)v20 | 0x80070000;
    if ( v20 <= 0 )
      v21 = (unsigned int)v20;
    if ( (v21 & 0x80000000) != 0LL )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
        (const char *)v21);
    v22 = (const char *)v40;
    if ( v42 >= 0x10 )
      v22 = v40[0];
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
      (MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44,
      v22);
    WindowsDeleteString(v25);
    v25 = 0LL;
    WindowsDeleteString(v26);
    v26 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::~HandleResumableTaskNotificationActivity((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)v44);
    if ( v42 >= 0x10 )
      operator delete(v40[0]);
    v42 = 15LL;
    v41 = 0LL;
    LOBYTE(v40[0]) = 0;
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
