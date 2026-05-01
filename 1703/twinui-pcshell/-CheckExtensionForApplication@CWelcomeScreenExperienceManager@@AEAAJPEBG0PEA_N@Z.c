/*
 * XREFs of ?CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z @ 0x1800B34E8
 * Callers:
 *     ?RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2A9C (-RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B14A4 (--1CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4808 (-Stop@-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@SA?AV01@XZ @ 0x1800B4CE4 (--$Start@$$V@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWelcomeScreenExperienceManager::CheckExtensionForApplication(
        CWelcomeScreenExperienceManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  char v13; // al
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v30[2]; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v33[320]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v30[1] = (HSTRING)-2LL;
  WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::Start<>((WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *)v33);
  *a4 = 0;
  v29 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_a2e68a2e_20c7_49f4_ba27_268b020ad4f8, &v29);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_39;
  }
  v27 = 0LL;
  v8 = v29;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    LODWORD(v9) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(a2, v9, &hstringHeader, &string);
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 128LL))(v8, string, &v27);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v28 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.StateRepository.ApplicationExtension",
           0x35u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v11 = RoGetActivationFactory(string, &GUID_af9817b4_2d09_4467_9b31_4899b2aea6e0, &v28);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 56LL))(v27, v30);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = 0;
        LOBYTE(v25) = 0;
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= LODWORD(v30[0]) )
          {
LABEL_34:
            *a4 = v13 != 0;
            wil::ActivityBase<WelcomeScreenExperienceManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *)v33);
            v7 = 0;
            goto LABEL_35;
          }
          v26 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, v14, &v26);
          v7 = v15;
          if ( v15 < 0 )
            break;
          v16 = v28;
          v17 = -1LL;
          do
            ++v17;
          while ( aWindowsLockscr_0[v17] );
          if ( v17 > 0xFFFFFFFF )
          {
            LODWORD(v17) = -1;
            RaiseException(0xC000000D, 1u, 0, 0LL);
          }
          WindowsCreateStringReference(L"windows.lockScreen", v17, &hstringHeader, &string);
          v15 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, __int64 *))(*(_QWORD *)v16 + 64LL))(
                  v16,
                  v26,
                  string,
                  &v25);
          v7 = v15;
          if ( v15 < 0 )
          {
            v19 = 250LL;
            goto LABEL_32;
          }
          v18 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          ++v14;
          v13 = v25;
          if ( (_BYTE)v25 )
            goto LABEL_34;
        }
        v19 = 249LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
        v20 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_35;
      }
      v12 = 243LL;
    }
    else
    {
      v12 = 240LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_35:
    v21 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xED,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_37:
  v22 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_39:
  v23 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::~CheckExtensionForApplication((WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *)v33);
  return v7;
}
