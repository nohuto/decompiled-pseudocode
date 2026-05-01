/*
 * XREFs of ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1801227F4
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x18011FEB0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x180119D9C (-StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreated(ViewEventDispatcher *a1, HWND a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int PropW; // eax
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  _QWORD v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int *v14; // [rsp+58h] [rbp-A8h]
  int *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h] BYREF
  char v17; // [rsp+6Ch] [rbp-94h]
  int v18; // [rsp+90h] [rbp-70h] BYREF
  const char *v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  char v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  _BYTE v23[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+148h] [rbp+48h]
  __int64 v25; // [rsp+150h] [rbp+50h]
  __int64 v26; // [rsp+158h] [rbp+58h]
  __int64 v27; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v6 = 0;
  v12[1] = 0LL;
  v12[2] = v12;
  v12[3] = 0LL;
  v13 = 0;
  v14 = &v18;
  v15 = &v16;
  v16 = 0;
  v17 = 0;
  v21 = 0;
  v18 = 0;
  v19 = "HandleWindowCreated";
  v20 = 0LL;
  v22 = 1LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  v27 = 0LL;
  v12[0] = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleWindowCreated::StartActivity(
    (ViewManagerInteropTraceLogging::HandleWindowCreated *)v12,
    a2,
    a3);
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
      v10 = 2599LL;
      goto LABEL_11;
    }
  }
  else if ( !a3 )
  {
    v8 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2594LL;
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
