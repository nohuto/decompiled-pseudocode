/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NXZ @ 0x180152C78 (-IsEnabled@StartWindowTelemetry@@SA_NXZ.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180154D88 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180158304 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180158644 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801592B4 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, int a2, XamlLauncherState *a3, int a4)
{
  struct _TP_TIMER **v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  bool v8; // zf
  struct _TP_TIMER **v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int started; // eax
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v4 = this - 4;
    if ( a3 == (XamlLauncherState *)(this - 4) )
    {
      if ( !a4 )
      {
        v5 = XamlLauncherState::OnCortanaCutoffTimerFired((XamlLauncherState *)(this - 4));
        if ( v5 >= 0 )
          return (unsigned int)v5;
        v6 = 291LL;
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
        v5 = XamlLauncherState::OnSessionBecameIdle((XamlLauncherState *)(this - 4));
        if ( v5 >= 0 )
          return (unsigned int)v5;
        v6 = 295LL;
        goto LABEL_6;
      }
      if ( a4 == 6 )
      {
        LODWORD(v13) = *((_DWORD *)v4 + 14);
        *((_QWORD *)&v13 + 1) = this - 4;
        wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v14, &v13);
        v8 = v16 == 0;
        *((_BYTE *)v4 + 959) = 0;
        if ( !v8 )
        {
          v16 = 0;
          StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            v14,
            v15 + 56);
        }
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
                v8 = *((_BYTE *)this + 968) == 0;
                *((_BYTE *)this + 925) = 1;
                if ( !v8 )
                {
                  v10 = *((unsigned int *)this + 241);
                  v11 = *((unsigned int *)this + 240);
                  *((_BYTE *)this + 968) = 0;
                  started = XamlLauncherState::ShowStartView(this - 2, v11, v10);
                  if ( started < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x14D,
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
    }
  }
  return 0LL;
}
