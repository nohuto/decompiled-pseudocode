/*
 * XREFs of ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180210530
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x18020ACC0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18020F0C0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18020FBE8 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::ToggleAllUpView(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebp
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _BYTE v9[80]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = *((_DWORD *)this + 176);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v5 = XamlAllUpViewHost::Show((__int64)this, *((_QWORD *)this + 29), *((void **)this + 30), *((_DWORD *)this + 72));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 270LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
  }
  else
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 368),
      (wil::ActivityThreadWatcher *)v9);
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
      (XamlAllUpViewHost *)((char *)this + 368),
      (__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3,
      0);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
  }
  v5 = XamlAllUpViewHost::DismissViewAnimated((__int64 **)this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 266LL;
    goto LABEL_8;
  }
LABEL_9:
  v6 = 0;
LABEL_10:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
