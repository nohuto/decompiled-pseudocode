/*
 * XREFs of ?RuntimeClassInitialize@CCortanaConversationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180159A08
 * Callers:
 *     ??$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180159364 (--$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvi.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180306F94 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180307E30 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCortanaConversationExperienceManager::RuntimeClassInitialize(
        CCortanaConversationExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+50h] [rbp-38h]
  HSTRING_HEADER v10; // [rsp+58h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v10,
    L"Windows.Internal.ShellExperience.Cortana.Conversation",
    0x36u,
    0x35u);
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
    0x32u,
    0x31u);
  v4 = (CCortanaConversationExperienceManager *)((char *)this + 72);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CCortanaConversationExperienceManager *)((char *)this + 72),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         a2,
         v9,
         v11);
  if ( v5 < 0 )
  {
    v6 = 42LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI",
    0x2Au,
    0x29u);
  v5 = CSingleViewShellExperience::AddTestAumid(v4, v9);
  if ( v5 < 0 )
  {
    v6 = 45LL;
    goto LABEL_3;
  }
  return 0LL;
}
