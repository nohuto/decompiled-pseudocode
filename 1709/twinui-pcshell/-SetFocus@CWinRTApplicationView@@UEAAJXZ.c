/*
 * XREFs of ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x180082380
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x1800824A0 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007D560 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::SetFocus(CWinRTApplicationView *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  ApplicationViewManagement::CGlobals::GetIam((__int64 *)&v10);
  if ( v10 )
  {
    v9 = 0LL;
    v3 = (**v10)(v10, &GUID_bf63999f_7411_40da_861c_df72c0ffee84, &v9);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, *((_QWORD *)this + 23), 0LL);
      v2 = v4;
      if ( v4 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
          (const char *)(unsigned int)v4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v3);
    }
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  else
  {
    v2 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
  }
  v6 = (__int64)v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v2;
}
