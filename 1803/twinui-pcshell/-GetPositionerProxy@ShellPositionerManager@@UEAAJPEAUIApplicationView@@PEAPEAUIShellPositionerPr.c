/*
 * XREFs of ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x180024430
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BD5C (ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___.c)
 * Callees:
 *     ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x18000B870 (--$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManag.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ShellPositionerManager::GetPositionerProxy(
        unsigned __int64 this,
        struct IApplicationView *a2,
        struct IShellPositionerProxy **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))(this & -(__int64)(this != 88));
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ShellPositionerProxy,IShellPositionerProxy,IShellPositionerManager * &,IApplicationView * &>(
         a3,
         &v9,
         (__int64 *)&v8);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v3,
      v6);
  return v4;
}
