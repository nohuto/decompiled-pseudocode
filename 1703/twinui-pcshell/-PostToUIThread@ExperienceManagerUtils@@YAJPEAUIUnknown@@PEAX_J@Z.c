/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18018C864
 * Callers:
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180091DE8 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800BC960 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180154D30 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     _lambda_59b3f66d35876ff984be4c819a9e3d92_::_lambda_invoker_cdecl_ @ 0x1801561E0 (_lambda_59b3f66d35876ff984be4c819a9e3d92_--_lambda_invoker_cdecl_.c)
 *     _lambda_d0430a5998976d734de1196e217e0dbe_::_lambda_invoker_cdecl_ @ 0x180156230 (_lambda_d0430a5998976d734de1196e217e0dbe_--_lambda_invoker_cdecl_.c)
 *     _lambda_4413aea68655ea8629f81f0d8b12b8c2_::_lambda_invoker_cdecl_ @ 0x180156290 (_lambda_4413aea68655ea8629f81f0d8b12b8c2_--_lambda_invoker_cdecl_.c)
 *     _lambda_24987672640ecffb87bad989b29ff2cb_::_lambda_invoker_cdecl_ @ 0x1801562E0 (_lambda_24987672640ecffb87bad989b29ff2cb_--_lambda_invoker_cdecl_.c)
 *     _lambda_1fb77cee992fff9e5f1de2af22f8bc69_::_lambda_invoker_cdecl_ @ 0x180156430 (_lambda_1fb77cee992fff9e5f1de2af22f8bc69_--_lambda_invoker_cdecl_.c)
 *     _lambda_14cad72e104b6faacc5f5111e03488e5_::_lambda_invoker_cdecl_ @ 0x180156640 (_lambda_14cad72e104b6faacc5f5111e03488e5_--_lambda_invoker_cdecl_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3643b84ed213cd16b15807000c4c475___::Run @ 0x18015B260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3643b84ed213cd16b15807000c4c475___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18018C89C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
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
