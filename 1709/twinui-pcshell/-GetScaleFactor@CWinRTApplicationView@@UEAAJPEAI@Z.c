/*
 * XREFs of ?GetScaleFactor@CWinRTApplicationView@@UEAAJPEAI@Z @ 0x1800834C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetScaleFactor(CWinRTApplicationView *this, unsigned int *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int ScaleFactorForWindow; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 100;
  v13 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 23);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v4 + 24))(
                           v3,
                           0LL,
                           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                           v5);
  v7 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow < 0 )
  {
    v8 = 345LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
    goto LABEL_9;
  }
  ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, &v14);
  v7 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow < 0 )
  {
    v8 = 348LL;
    goto LABEL_7;
  }
  ScaleFactorForWindow = GetScaleFactorForWindow(v14, &v12);
  v7 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow < 0 )
  {
    v8 = 351LL;
    goto LABEL_7;
  }
  *a2 = v12;
  v7 = 0;
LABEL_9:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
