/*
 * XREFs of ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180170068
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18016F9A4 (--$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Det.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180306F94 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180307E30 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleTestExperienceManager::RuntimeClassInitialize(
        CWinRTApplicationView **this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  HSTRING_HEADER v8; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+50h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  Microsoft::WRL::ComPtr<IUnknown>::operator=(this + 35, (CWinRTApplicationView *)this);
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.PeopleTest",
    0x2Cu,
    0x2Bu);
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
    0x39u,
    0x38u);
  v4 = (CSingleViewShellExperience *)(this + 10);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CSingleViewShellExperience *)(this + 10),
         (struct IWeakReferenceSource *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
         a2,
         v9,
         v11);
  if ( v5 < 0 )
  {
    v6 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
    0x29u,
    0x28u);
  v5 = CSingleViewShellExperience::AddTestAumid(v4, v9);
  if ( v5 < 0 )
  {
    v6 = 49LL;
    goto LABEL_3;
  }
  return 0LL;
}
