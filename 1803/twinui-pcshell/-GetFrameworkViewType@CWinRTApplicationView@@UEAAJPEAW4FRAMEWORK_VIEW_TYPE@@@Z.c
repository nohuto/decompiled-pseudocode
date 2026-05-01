/*
 * XREFs of ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18001BA50
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020958 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18004C370 (-GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetFrameworkViewType(
        CWinRTApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(CImmersiveApp *__hidden, enum FRAMEWORK_VIEW_TYPE *); // rax
  int FrameworkViewType; // eax
  CImmersiveApp *v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CImmersiveApp *v12; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 6;
  v12 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, CImmersiveApp **))this + 25))(
         *((_QWORD *)this + 25),
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = (unsigned int)v3;
    v10 = 575LL;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, enum FRAMEWORK_VIEW_TYPE *))(*(_QWORD *)v12 + 24LL);
    if ( v5 == CImmersiveApp::GetFrameworkViewType )
      FrameworkViewType = CImmersiveApp::GetFrameworkViewType(v12, a2);
    else
      FrameworkViewType = v5(v12, a2);
    v4 = FrameworkViewType;
    if ( FrameworkViewType >= 0 )
      goto LABEL_5;
    v9 = (unsigned int)FrameworkViewType;
    v10 = 576LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)v9,
    -2);
LABEL_5:
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
