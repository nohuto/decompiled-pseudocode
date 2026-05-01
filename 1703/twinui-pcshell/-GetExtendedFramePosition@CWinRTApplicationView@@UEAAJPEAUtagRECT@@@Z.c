/*
 * XREFs of ?GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x18007FF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800825C0 (-_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetExtendedFramePosition(CWinRTApplicationView *this, struct tagRECT *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  CApplicationViewBase *v10; // rcx
  int ExtendedFramePosition; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  HWND v16; // [rsp+60h] [rbp+18h] BYREF

  SetRectEmpty(a2);
  v15 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 20);
  v5 = *v4;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v5 + 24))(
         v4,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 246LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 32LL))(v15, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 249LL;
    goto LABEL_5;
  }
  ExtendedFramePosition = CApplicationViewBase::_GetExtendedFramePosition(v10, v16, a2);
  v8 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ExtendedFramePosition);
LABEL_8:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
