/*
 * XREFs of ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802440D0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180240230 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180245030 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2d0401a0802d62c4237ed0fa9c7fea3c__0__wistd--detai.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18023E24C (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18023E6D0 (-IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18023E7EC (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18024D588 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::UpdateFullLayoutAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+28h] [rbp-29h] BYREF
  __int64 v9; // [rsp+30h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-19h] BYREF
  HSTRING v11; // [rsp+50h] [rbp-1h]
  HSTRING_HEADER v12; // [rsp+58h] [rbp+7h] BYREF
  HSTRING v13; // [rsp+70h] [rbp+1Fh]
  HSTRING_HEADER v14; // [rsp+78h] [rbp+27h] BYREF
  HSTRING v15; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v9 = -2LL;
  v8 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardFullModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v8);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      632LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v8 == 2
    || !v8
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3))
    && !TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(v3) )
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[83], v13, v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        640LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v13 = 0LL;
    v11 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"0", 2u, 1u);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"KeyboardModeEnabled_full106", 0x1Cu, 0x1Bu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[83], v13, v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        641LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"KeyboardModeEnabled_full", 0x19u, 0x18u);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[83], v15, v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        645LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v15 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v12, L"1", 2u, 1u);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_full106",
      0x1Cu,
      0x1Bu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[83], v11, v13);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        646LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v11 = 0LL;
    v13 = 0LL;
  }
}
