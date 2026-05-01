/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803094E8
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800666C0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180154CC8 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18015869C (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801658A8 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_c6c1e235d055ce82db6ba27595194d60_::operator() @ 0x180175EE4 (_lambda_c6c1e235d055ce82db6ba27595194d60_--operator().c)
 *     _lambda_022506f409195dfb3b8948f4937acd45_::_lambda_invoker_cdecl_ @ 0x18022B8E0 (_lambda_022506f409195dfb3b8948f4937acd45_--_lambda_invoker_cdecl_.c)
 *     _lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_ @ 0x18022B910 (_lambda_0ecf0782f9870a2c1275b8518c08daa4_--_lambda_invoker_cdecl_.c)
 *     _lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_ @ 0x18022B960 (_lambda_6993ad0a1190e378d2297439533de25a_--_lambda_invoker_cdecl_.c)
 *     _lambda_73e76d8d16808ac10322fbdb9b07c67c_::_lambda_invoker_cdecl_ @ 0x18022B9B0 (_lambda_73e76d8d16808ac10322fbdb9b07c67c_--_lambda_invoker_cdecl_.c)
 *     _lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_ @ 0x18022BA50 (_lambda_b5008ceb20ea0aaab8abc16420ca4d79_--_lambda_invoker_cdecl_.c)
 *     _lambda_e5b0e77d43b437f923ed00fdd0f82a4b_::_lambda_invoker_cdecl_ @ 0x18022BAB0 (_lambda_e5b0e77d43b437f923ed00fdd0f82a4b_--_lambda_invoker_cdecl_.c)
 *     _lambda_3da77838a00d6ef2652f9f0cca8cef38_::operator() @ 0x18022DF20 (_lambda_3da77838a00d6ef2652f9f0cca8cef38_--operator().c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x18022FEB0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x180094440 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
