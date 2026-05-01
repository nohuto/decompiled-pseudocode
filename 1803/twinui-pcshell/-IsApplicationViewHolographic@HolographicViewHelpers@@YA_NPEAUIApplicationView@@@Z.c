/*
 * XREFs of ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800954CC
 * Callers:
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180020F20 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18027A0C4 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall HolographicViewHelpers::IsApplicationViewHolographic(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  bool v3; // bl
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, PVOID *); // rax
  int PositionerPriority; // eax
  __int64 (__fastcall *v6)(RTL_SRWLOCK *); // rax
  int CurrentPositioner; // eax
  struct IShellPositionerPriority *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, PVOID *))*((_QWORD *)this->Ptr + 33);
  if ( v4 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(this, (PVOID *)&v9);
  else
    PositionerPriority = v4(this, (PVOID *)&v9);
  if ( PositionerPriority >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(RTL_SRWLOCK *))(*(_QWORD *)v9 + 24LL);
    if ( v6 == PositionerPriority::GetCurrentPositioner )
      CurrentPositioner = PositionerPriority::GetCurrentPositioner((RTL_SRWLOCK *)v9);
    else
      CurrentPositioner = v6((RTL_SRWLOCK *)v9);
    v3 = CurrentPositioner == 4;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  return v3;
}
