/*
 * XREFs of ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1801590C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180156A08 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180158840 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x180159230 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::ToggleAllUpView(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  HANDLE ProcessHeap; // rax
  LPVOID v11[4]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v12; // [rsp+68h] [rbp+27h] BYREF
  __int64 v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  __int64 v15; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = *((_DWORD *)this + 156);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v5 = XamlAllUpViewHost::Show(
             (__int64)this,
             *((IUnknown **)this + 27),
             *((_QWORD *)this + 28),
             *((_DWORD *)this + 62));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 432LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_16;
      }
      goto LABEL_15;
    }
  }
  else
  {
    v8 = *((_QWORD *)this + 45);
    if ( *(_DWORD *)v8 == 1 )
    {
      wil::ActivityThreadWatcher::ActivityThreadWatcher(
        (wil::ActivityThreadWatcher *)v11,
        (XamlAllUpViewHost *)((char *)this + 312),
        (const struct wil::details::StoredCallContextInfo *)(v8 + 40));
    }
    else
    {
      memset(v11, 0, sizeof(v11));
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v15 = 0LL;
    }
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop((XamlAllUpViewHost *)((char *)this + 312), 0);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
    if ( LOBYTE(v11[3]) )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11[2]);
    }
  }
  v5 = XamlAllUpViewHost::DismissViewAnimated(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 428LL;
    goto LABEL_14;
  }
LABEL_15:
  v6 = 0;
LABEL_16:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v6;
}
