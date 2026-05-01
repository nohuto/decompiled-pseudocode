/*
 * XREFs of ?OnMinSizePreferencesUpdated@CWinRTApplicationView@@UEAAJPEAUHWND__@@@Z @ 0x18001BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18004C440 (-OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::OnMinSizePreferencesUpdated(CWinRTApplicationView *this, HWND a2)
{
  CImmersiveApp *v2; // rcx
  int (*v3)(CImmersiveApp *__hidden, HWND); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CImmersiveApp *)*((_QWORD *)this + 25);
  v3 = *(int (**)(CImmersiveApp *__hidden, HWND))(*(_QWORD *)v2 + 312LL);
  if ( v3 == CImmersiveApp::OnMinSizePreferencesUpdated )
    v4 = CImmersiveApp::OnMinSizePreferencesUpdated(v2, a2);
  else
    v4 = ((__int64 (__fastcall *)(CImmersiveApp *, HWND))v3)(v2, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
