/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180188E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NXZ @ 0x1801870F0 (-IsEnabled@StartWindowTelemetry@@SA_NXZ.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180188FE8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x18018C7A8 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18018CADC (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018D5D8 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, int a2, XamlLauncherState *a3, int a4)
{
  struct _TP_TIMER **v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  struct _TP_TIMER **v9; // rcx
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdx
  int started; // eax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
    return 0LL;
  v4 = this - 5;
  if ( a3 != (XamlLauncherState *)(this - 5) )
    return 0LL;
  if ( !a4 )
  {
    v5 = XamlLauncherState::OnCortanaCutoffTimerFired((XamlLauncherState *)(this - 5));
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 295LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( a4 == 1 )
  {
    v5 = XamlLauncherState::OnSessionBecameIdle((XamlLauncherState *)(this - 5));
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 299LL;
    goto LABEL_6;
  }
  if ( a4 == 6 )
  {
    *((_QWORD *)&v14 + 1) = this - 5;
    LODWORD(v14) = *((_DWORD *)v4 + 16);
    v8 = v14;
    *((_BYTE *)v4 + 968) = 0;
    v15 = 0;
    v14 = v8;
    StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(&v14);
  }
  else
  {
    if ( a4 == 7 )
    {
      v9 = this + 109;
    }
    else
    {
      if ( a4 == 2 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          this + 110,
          0LL);
        if ( StartWindowTelemetry::IsEnabled() )
          XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)v4);
        return 0LL;
      }
      if ( a4 == 8 )
      {
        v9 = this + 111;
      }
      else if ( a4 == 3 )
      {
        v9 = this + 112;
      }
      else
      {
        if ( a4 != 4 )
        {
          if ( a4 == 5 )
          {
            v10 = *((_BYTE *)this + 976) == 0;
            *((_BYTE *)this + 926) = 1;
            if ( !v10 )
            {
              v11 = *((unsigned int *)this + 243);
              v12 = *((unsigned int *)this + 242);
              *((_BYTE *)this + 976) = 0;
              started = XamlLauncherState::ShowStartView(this - 2, v12, v11);
              if ( started < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x151,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)started);
            }
          }
          return 0LL;
        }
        v9 = this + 114;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v9,
      0LL);
  }
  return 0LL;
}
