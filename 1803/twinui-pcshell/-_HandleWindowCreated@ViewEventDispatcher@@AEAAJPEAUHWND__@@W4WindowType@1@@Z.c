/*
 * XREFs of ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F04C0
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x1800F70F4 (-StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z.c)
 *     ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F7248 (--1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x18010B8EC (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreated(ViewEventDispatcher *a1, HWND a2, unsigned int a3)
{
  unsigned int v6; // ebx
  HWND v7; // rdx
  unsigned int PropW; // eax
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  _QWORD v13[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"HandleWindowCreated");
  v13[0] = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleWindowCreated::StartActivity(
    (ViewManagerInteropTraceLogging::HandleWindowCreated *)v13,
    a2,
    a3);
  v6 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a2)
    || (unsigned int)IsShellFrameWindow(a2)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged((ShellManagedWindowHelper *)a2, v7)
    || GetPropW(a2, L"Shell_Logical_Owner_Window_Prop") )
  {
    v10 = 0;
    goto LABEL_14;
  }
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  if ( PropW )
  {
    v9 = ViewEventDispatcher::_HandleWindowCreatedForExistingView(a1, a2, PropW);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 2177LL;
      goto LABEL_11;
    }
  }
  else if ( !a3 )
  {
    v9 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 2172LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
LABEL_14:
      v6 = v10;
      goto LABEL_15;
    }
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
LABEL_15:
  ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated((ViewManagerInteropTraceLogging::HandleWindowCreated *)v13);
  return v6;
}
