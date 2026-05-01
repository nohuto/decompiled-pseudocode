/*
 * XREFs of ?IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z @ 0x18001C280
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x18004CDA0 (-IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::IsEqualByAppUserModelId(
        CWinRTApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  CImmersiveApp *v3; // rcx
  int (*v4)(CImmersiveApp *__hidden, const unsigned __int16 *, int *); // rax
  int IsEqualByAppId; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CImmersiveApp *)*((_QWORD *)this + 25);
  v4 = *(int (**)(CImmersiveApp *__hidden, const unsigned __int16 *, int *))(*(_QWORD *)v3 + 88LL);
  if ( v4 == CImmersiveApp::IsEqualByAppId )
    IsEqualByAppId = CImmersiveApp::IsEqualByAppId(v3, a2, a3);
  else
    IsEqualByAppId = ((__int64 (__fastcall *)(CImmersiveApp *, const unsigned __int16 *, int *))v4)(v3, a2, a3);
  v6 = IsEqualByAppId;
  if ( IsEqualByAppId < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)IsEqualByAppId,
      v8);
  return v6;
}
