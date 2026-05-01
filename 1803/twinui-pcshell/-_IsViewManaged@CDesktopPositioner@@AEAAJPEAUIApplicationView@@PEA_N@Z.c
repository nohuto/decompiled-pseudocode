/*
 * XREFs of ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18002264C
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180022368 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_IsViewManaged(CDesktopPositioner *this, struct IApplicationView *a2, bool *a3)
{
  __int64 (__fastcall *v5)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct IShellPositionerPriority *); // rax
  int CurrentPositioner; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IShellPositionerPriority *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
  v5 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
  if ( v5 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(a2, &v12);
  else
    PositionerPriority = v5(a2, &v12);
  v7 = PositionerPriority;
  if ( PositionerPriority < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x768,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)PositionerPriority,
      -2);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v12 + 24LL);
    if ( (char *)v8 == (char *)PositionerPriority::GetCurrentPositioner )
      CurrentPositioner = PositionerPriority::GetCurrentPositioner(v12);
    else
      CurrentPositioner = v8(v12);
    *a3 = CurrentPositioner == 0;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
  return v7;
}
