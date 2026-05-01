/*
 * XREFs of ?IsMirrored@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x180083D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::IsMirrored(CWinRTApplicationView *this, int *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v12 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 23);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 24))(
         v3,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 552LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 32LL))(v12, &hWnd);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 555LL;
    goto LABEL_5;
  }
  *a2 = (unsigned int)GetPropW(hWnd, L"ApplicationFrameRtlTitleBar") != 0;
  v7 = 0;
LABEL_7:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
