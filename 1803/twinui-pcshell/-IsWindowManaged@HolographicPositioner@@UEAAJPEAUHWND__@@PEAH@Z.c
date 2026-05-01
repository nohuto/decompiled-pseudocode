/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180020EA0
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020BD0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 * Callees:
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180020F20 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  CApplicationViewManager *v5; // rcx
  __int64 (__fastcall *v6)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **); // rax
  int ViewForHwnd; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rcx
  int IsViewManaged; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v5 = (CApplicationViewManager *)*((_QWORD *)this + 11);
  v6 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **))(*(_QWORD *)v5 + 48LL);
  if ( v6 == CApplicationViewManager::GetViewForHwnd )
    ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v5, a2, &v13);
  else
    ViewForHwnd = v6(v5, a2, &v13);
  if ( ViewForHwnd < 0
    || (IsViewManaged = HolographicPositioner::IsViewManaged(this, v13, a3), v8 = IsViewManaged, IsViewManaged >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E4,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged,
      -2);
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
