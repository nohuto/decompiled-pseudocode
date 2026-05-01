/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18018A310
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0D2C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NXZ @ 0x1801870F0 (-IsEnabled@StartWindowTelemetry@@SA_NXZ.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018C974 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018C9DC (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018CA44 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(char *pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER **v6; // rdi
  struct _TP_TIMER *v7; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  int v10; // eax
  struct _TP_TIMER **v11; // rdi
  struct _TP_TIMER *v12; // rax
  const char *v13; // r9
  struct _TP_TIMER *v14; // rcx
  struct _TP_TIMER **v15; // rdi
  struct _TP_TIMER *v16; // rax
  const char *v17; // r9
  struct _TP_TIMER *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)(pv + 912);
  if ( !*((_QWORD *)pv + 114) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_73e76d8d16808ac10322fbdb9b07c67c_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( !*v1 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x41F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v4);
    v5 = *v1;
    if ( *v1 )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = (struct _TP_TIMER **)(pv + 920);
  if ( !*((_QWORD *)pv + 115) )
  {
    v7 = CreateThreadpoolTimer(lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 115,
      v7);
    if ( !*v6 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x434,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v8);
    v9 = *v6;
    if ( *v6 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled() )
      {
        *((_QWORD *)pv + 128) = 0LL;
        XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu((XamlLauncherState *)pv, (unsigned __int64 *)pv + 128);
        *((_QWORD *)pv + 129) = 0LL;
        XamlLauncherState::SnapshotCpuCyclesUsedByCortana((XamlLauncherState *)pv, (unsigned __int64 *)pv + 129);
        *((_QWORD *)pv + 130) = 0LL;
        v10 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost((XamlLauncherState *)pv, (unsigned __int64 *)pv + 130);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x959,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v10);
      }
    }
  }
  v11 = (struct _TP_TIMER **)(pv + 928);
  if ( !*((_QWORD *)pv + 116) )
  {
    v12 = CreateThreadpoolTimer(lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 116,
      v12);
    if ( !*v11 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x44F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v13);
    v14 = *v11;
    if ( *v11 )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v14, &pftDueTime, 0, 0x3E8u);
    }
  }
  v15 = (struct _TP_TIMER **)(pv + 936);
  if ( !*((_QWORD *)pv + 117) )
  {
    v16 = CreateThreadpoolTimer(lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 117,
      v16);
    if ( !*v15 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x464,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v17);
    v18 = *v15;
    if ( *v15 )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v18, &pftDueTime, 0, 0x3E8u);
    }
  }
}
