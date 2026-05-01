/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18011DC3C (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18011DEC8 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18011E7B4 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18011EB18 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x180120110 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180122688 (-OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_174fcf5b4a41f6f10b72d48900fe127a___::Run @ 0x18012B260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_174fcf5b4a41f6f10b72d48900fe127a___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18012427C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(__int64 a1, __int64 a2, _QWORD *a3)
{
  int MatchingViewEventRegistration; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  PCWSTR StringRawBuffer; // rbx
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  string = 0LL;
  MatchingViewEventRegistration = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL))(a2, &string);
  v7 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration < 0 )
  {
    v8 = 3159LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    goto LABEL_7;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 584LL))(a2);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                    a1,
                                    StringRawBuffer,
                                    v10,
                                    a3,
                                    -2LL);
  v7 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration < 0 )
  {
    v8 = 3164LL;
    goto LABEL_5;
  }
  v7 = 0;
LABEL_7:
  if ( string )
    WindowsDeleteString(string);
  return v7;
}
