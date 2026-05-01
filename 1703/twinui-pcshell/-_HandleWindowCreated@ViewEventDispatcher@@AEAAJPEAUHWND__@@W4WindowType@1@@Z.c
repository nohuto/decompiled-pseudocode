/*
 * XREFs of ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F7598
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x1800F4FC0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAPEAUHWND__@@K@HandleWindowCreated@ViewManagerInteropTraceLogging@@SA?AV01@AEAPEAUHWND__@@$$QEAK@Z @ 0x1800FEE20 (--$Start@AEAPEAUHWND__@@K@HandleWindowCreated@ViewManagerInteropTraceLogging@@SA-AV01@AEAPEAUHWN.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreated(ViewEventDispatcher *a1, HWND a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int PropW; // eax
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  _QWORD v12[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  ViewManagerInteropTraceLogging::HandleWindowCreated::Start<HWND__ * &,unsigned long>((ViewManagerInteropTraceLogging::HandleWindowCreated *)v12);
  v6 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a2)
    || (unsigned int)IsShellFrameWindow(a2)
    || GetPropW(a2, L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")
    || GetPropW(a2, L"Shell_Logical_Owner_Window_Prop") )
  {
    v9 = 0;
    goto LABEL_14;
  }
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  if ( PropW )
  {
    v8 = ViewEventDispatcher::_HandleWindowCreatedForExistingView(a1, a2, PropW);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2469LL;
      goto LABEL_11;
    }
  }
  else if ( !a3 )
  {
    v8 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2464LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
LABEL_14:
      v6 = v9;
      goto LABEL_15;
    }
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
LABEL_15:
  v12[0] = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  return v6;
}
