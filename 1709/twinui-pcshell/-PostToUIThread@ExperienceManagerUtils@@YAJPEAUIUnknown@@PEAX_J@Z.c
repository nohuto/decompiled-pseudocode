/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8
 * Callers:
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180096218 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800A2F70 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_89df0ffbe2c53d06adbb7fd818281742_::_lambda_invoker_cdecl_ @ 0x1800BF230 (_lambda_89df0ffbe2c53d06adbb7fd818281742_--_lambda_invoker_cdecl_.c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180188F90 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     _lambda_73e76d8d16808ac10322fbdb9b07c67c_::_lambda_invoker_cdecl_ @ 0x18018A540 (_lambda_73e76d8d16808ac10322fbdb9b07c67c_--_lambda_invoker_cdecl_.c)
 *     _lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_ @ 0x18018A590 (_lambda_b5008ceb20ea0aaab8abc16420ca4d79_--_lambda_invoker_cdecl_.c)
 *     _lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_ @ 0x18018A5F0 (_lambda_0ecf0782f9870a2c1275b8518c08daa4_--_lambda_invoker_cdecl_.c)
 *     _lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_ @ 0x18018A640 (_lambda_6993ad0a1190e378d2297439533de25a_--_lambda_invoker_cdecl_.c)
 *     _lambda_022506f409195dfb3b8948f4937acd45_::_lambda_invoker_cdecl_ @ 0x18018A790 (_lambda_022506f409195dfb3b8948f4937acd45_--_lambda_invoker_cdecl_.c)
 *     _lambda_e5b0e77d43b437f923ed00fdd0f82a4b_::_lambda_invoker_cdecl_ @ 0x18018AA60 (_lambda_e5b0e77d43b437f923ed00fdd0f82a4b_--_lambda_invoker_cdecl_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___::Run @ 0x18018EF00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(ExperienceManagerUtils *this, struct IUnknown *a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, (unsigned int)a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
