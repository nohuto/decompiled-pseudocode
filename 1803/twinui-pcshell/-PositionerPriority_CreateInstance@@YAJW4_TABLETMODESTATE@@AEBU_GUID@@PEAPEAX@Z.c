/*
 * XREFs of ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180023878 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180024250 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180024540 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F56F8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800259E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800259E0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x18008AEEC (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJP.c)
 *     ?InternalRelease@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ @ 0x1800951C4 (-InternalRelease@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PositionerPriority_CreateInstance(int a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  int Interface; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  _QWORD **v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<PositionerPriority>::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
         &v13,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 236LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)v9);
    goto LABEL_5;
  }
  v6 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *))**v13;
  if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface(
                  (__int64)v13,
                  (__int64)&GUID_9579607f_b1e9_4350_b203_d2784a62a5cb,
                  a3);
  else
    Interface = v6((__int64)v13, (__int64)&GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, a3);
  v5 = Interface;
  if ( Interface < 0 )
  {
    v9 = (unsigned int)Interface;
    v10 = 237LL;
    goto LABEL_9;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<PositionerPriority>::InternalRelease(&v13);
  return v5;
}
