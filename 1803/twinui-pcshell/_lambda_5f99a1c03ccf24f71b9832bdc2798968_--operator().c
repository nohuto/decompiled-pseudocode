/*
 * XREFs of _lambda_5f99a1c03ccf24f71b9832bdc2798968_::operator() @ 0x18022AADC
 * Callers:
 *     ??$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18022AAD0 (--$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@-$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18007AC60 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18022ABB4 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5f99a1c03ccf24f71b9832bdc2798968_::operator()(ImmersiveMonitorHelper **a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v9; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = *((_QWORD *)*a1 + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 72LL))(
         v5,
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v9);
  if ( v6 >= 0 )
  {
    if ( ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a1, v9) )
    {
      ImmersiveMonitorHelper::ConnectToMonitor(*a1, v9);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      202LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v6);
  }
  v4 = 1;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  return v4;
}
