/*
 * XREFs of ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800D9870
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9AA0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foun.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D97A0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::IsWindowManaged(HolographicPositioner *this, HWND a2, int *a3)
{
  int IsViewManaged; // eax
  unsigned int v6; // ebx
  struct IApplicationView *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 10) + 48LL))(
         *((_QWORD *)this + 10),
         a2,
         &v10) < 0
    || (IsViewManaged = HolographicPositioner::IsViewManaged(this, v10, a3), v6 = IsViewManaged, IsViewManaged >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3AF,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
