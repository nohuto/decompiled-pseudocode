/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4
 * Callers:
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180032D68 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1800350BC (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1801CBF40 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1801CF1C4 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D0598 (-_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0A84 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManager.c)
 * Callees:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800322F0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 *     ?get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004FCB0 (-get_AppUserModelId@ViewWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetExperienceId@ViewWrapperBase@@UEAAPEBGXZ @ 0x180051CB0 (-GetExperienceId@ViewWrapperBase@@UEAAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(__int64 a1, ViewWrapperBase *a2, _QWORD *a3)
{
  __int64 (__fastcall *v6)(ViewWrapperBase *__hidden, HSTRING *); // rax
  int AppUserModelId; // eax
  unsigned int v8; // ebx
  const unsigned __int16 *(__fastcall *v9)(ViewWrapperBase *__hidden); // rax
  const unsigned __int16 *ExperienceId; // rax
  const WCHAR *v11; // rbx
  const WCHAR *StringRawBuffer; // rax
  int MatchingViewEventRegistration; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  string = 0LL;
  v6 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING *))(*(_QWORD *)a2 + 56LL);
  if ( v6 == ViewWrapperBase::get_AppUserModelId )
    AppUserModelId = ViewWrapperBase::get_AppUserModelId(a2, &string);
  else
    AppUserModelId = v6(a2, &string);
  v8 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v15 = (unsigned int)AppUserModelId;
    v16 = 2750LL;
  }
  else
  {
    v9 = *(const unsigned __int16 *(__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)a2 + 600LL);
    if ( v9 == ViewWrapperBase::GetExperienceId )
      ExperienceId = ViewWrapperBase::GetExperienceId(a2);
    else
      ExperienceId = v9(a2);
    v11 = ExperienceId;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                      a1,
                                      StringRawBuffer,
                                      v11,
                                      a3);
    v8 = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v15 = (unsigned int)MatchingViewEventRegistration;
    v16 = 2755LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v15,
    -2);
LABEL_8:
  if ( string )
    WindowsDeleteString(string);
  return v8;
}
