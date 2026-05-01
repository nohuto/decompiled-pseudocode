/*
 * XREFs of ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18012D83C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180131DA4 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180047B90 (-EnsurePositionOffset@CTaskWindow@@UEAAJXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C444 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C68C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18012FC14 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
        CFrameApplicationPresentation **this,
        struct ITaskWindow *a2,
        __int64 a3)
{
  int v5; // esi
  __int64 (__fastcall *v6)(CTaskWindow *); // rax
  CFrameApplicationPresentation *v7; // rcx
  __int64 (__fastcall *v8)(CFrameApplicationPresentation *, struct ITaskWindow *); // rax
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
         (CImmersiveApp::CImmersiveWindowCollection *)this,
         (__int64)a2,
         a3);
  if ( v5 < 0 )
  {
    v11 = 7143LL;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v6 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)a2 + 72LL);
    if ( v6 == CTaskWindow::EnsurePositionOffset )
      CTaskWindow::EnsurePositionOffset(a2);
    else
      v6(a2);
    v7 = this[17];
    v8 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct ITaskWindow *))(*(_QWORD *)v7 + 24LL);
    if ( v8 == CFrameApplicationPresentation::PresentWindow )
      v9 = CFrameApplicationPresentation::PresentWindow(v7, a2);
    else
      v9 = v8(v7, a2);
    v5 = v9;
    if ( v9 >= 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync((CImmersiveApp::CImmersiveWindowCollection *)this);
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation((CImmersiveApp::CImmersiveWindowCollection *)this);
      goto LABEL_9;
    }
    v11 = 7161LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v5,
      v12);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this[17] + 32LL))(this[17]);
  if ( v5 < 0 )
  {
    v11 = 7172LL;
    goto LABEL_16;
  }
LABEL_9:
  if ( (unsigned __int64)this[20] >= 2 || !a2 )
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation((CImmersiveApp::CImmersiveWindowCollection *)this);
  return 0LL;
}
