/*
 * XREFs of ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180032920 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18008A7FC (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097F30 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800985E0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800D3C60 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800D56B0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800D77C8 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180113B38 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x180120110 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180185240 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180185240.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180185640 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180185640.c)
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1801B1650 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801DEC80 (_anonymous_namespace_--queryLockdownMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int *a4)
{
  LSTATUS ValueW; // eax
  int v6; // ecx
  bool v7; // zf
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp-18h] BYREF
  DWORD v10; // [rsp+44h] [rbp-14h] BYREF
  DWORD v11[4]; // [rsp+48h] [rbp-10h] BYREF

  v10 = 0;
  v11[0] = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, &v9, v11);
  v6 = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v6 = ValueW;
  }
  else
  {
    if ( v10 == 4 )
    {
      if ( v9 > 1 )
        goto LABEL_12;
      v7 = v9 == 1;
    }
    else
    {
      if ( v11[0] != 4 || (unsigned __int16)(v9 - 48) > 1u )
        goto LABEL_12;
      ValueW = 0;
      v7 = (_WORD)v9 == 49;
    }
    LOBYTE(ValueW) = v7;
    v6 = 0;
    *a4 = ValueW;
  }
LABEL_12:
  result = (unsigned __int16)v6 | 0x80070000;
  if ( v6 <= 0 )
    return (unsigned int)v6;
  return result;
}
