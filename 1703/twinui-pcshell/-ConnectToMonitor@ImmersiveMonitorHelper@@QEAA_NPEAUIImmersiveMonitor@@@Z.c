/*
 * XREFs of ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0
 * Callers:
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014ABE0 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     s_HandleCurrentMonitorDisconnect @ 0x1801519B0 (s_HandleCurrentMonitorDisconnect.c)
 *     s_HandleConnectIfNoCurrentMonitorExists @ 0x180151B20 (s_HandleConnectIfNoCurrentMonitorExists.c)
 *     s_HandleConnectIfNewPrimaryArrives @ 0x180151BE0 (s_HandleConnectIfNewPrimaryArrives.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x180151D40 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1801523A8 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ??$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180152940 (--$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@-$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAU.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ImmersiveMonitorHelper::ConnectToMonitor(ImmersiveMonitorHelper *this, struct IImmersiveMonitor *a2)
{
  bool v4; // si
  __int64 v5; // rcx
  HRESULT v6; // eax
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !(unsigned int)SHIsSameObject(
                        *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5),
                        (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
  {
    if ( *((struct IImmersiveMonitor **)this + 5) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = a2;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7)) != 0;
  }
  ppvOut = 0LL;
  v6 = IUnknown_QueryService(
         (IUnknown *)a2,
         &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2,
         &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2,
         &ppvOut);
  if ( v6 >= 0 )
    (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7), ppvOut);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v6);
  v7 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
