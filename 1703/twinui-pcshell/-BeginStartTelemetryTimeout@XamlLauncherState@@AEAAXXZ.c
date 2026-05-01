/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180155FB0
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E266C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NXZ @ 0x180152C78 (-IsEnabled@StartWindowTelemetry@@SA_NXZ.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801584DC (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180158544 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801585AC (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
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

  v1 = (struct _TP_TIMER **)(pv + 904);
  if ( !*((_QWORD *)pv + 113) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_59b3f66d35876ff984be4c819a9e3d92_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( !*v1 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x40F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v4);
    v5 = *v1;
    if ( *v1 )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = (struct _TP_TIMER **)(pv + 912);
  if ( !*((_QWORD *)pv + 114) )
  {
    v7 = CreateThreadpoolTimer(lambda_d0430a5998976d734de1196e217e0dbe_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 114,
      v7);
    if ( !*v6 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v8);
    v9 = *v6;
    if ( *v6 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 15));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled() )
      {
        *((_QWORD *)pv + 126) = 0LL;
        XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu((XamlLauncherState *)pv, (unsigned __int64 *)pv + 126);
        *((_QWORD *)pv + 127) = 0LL;
        XamlLauncherState::SnapshotCpuCyclesUsedByCortana((XamlLauncherState *)pv, (unsigned __int64 *)pv + 127);
        *((_QWORD *)pv + 128) = 0LL;
        v10 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost((XamlLauncherState *)pv, (unsigned __int64 *)pv + 128);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x941,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v10);
      }
    }
  }
  v11 = (struct _TP_TIMER **)(pv + 920);
  if ( !*((_QWORD *)pv + 115) )
  {
    v12 = CreateThreadpoolTimer(lambda_4413aea68655ea8629f81f0d8b12b8c2_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 115,
      v12);
    if ( !*v11 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x43F,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v13);
    v14 = *v11;
    if ( *v11 )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v14, &pftDueTime, 0, 0x3E8u);
    }
  }
  v15 = (struct _TP_TIMER **)(pv + 928);
  if ( !*((_QWORD *)pv + 116) )
  {
    v16 = CreateThreadpoolTimer(lambda_24987672640ecffb87bad989b29ff2cb_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)pv + 116,
      v16);
    if ( !*v15 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x454,
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
