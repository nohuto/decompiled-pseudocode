/*
 * XREFs of ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x1800824A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x180082380 (-SetFocus@CWinRTApplicationView@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::SwitchTo(CWinRTApplicationView *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 23);
  v3 = *v2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 24))(
         v2,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v4);
  v6 = v5;
  if ( v5 != -2147023728 )
  {
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 32LL))(v12, &v13);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v5 = CWinRTApplicationView::SetFocus(this);
        v6 = v5;
        if ( v5 >= 0 )
        {
          v6 = 0;
          goto LABEL_12;
        }
        v8 = 99LL;
      }
      else
      {
        v8 = 93LL;
      }
    }
    else
    {
      v8 = 90LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
  v7 = CWinRTApplicationView::SetFocus(this);
  v6 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
LABEL_12:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
