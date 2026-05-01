/*
 * XREFs of ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1800771A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180075370 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::WindowEnterpriseIdChanged(RTL_SRWLOCK *this, HWND a2)
{
  int ViewForHwnd; // edi
  struct IApplicationView *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationView *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 7, a2, &v11);
  v3 = v11;
  if ( ViewForHwnd >= 0 )
  {
    v10 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11)(
           v11,
           &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
           &v10);
    ViewForHwnd = v4;
    if ( v4 >= 0 )
    {
      LOBYTE(v5) = 1;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v5);
      ViewForHwnd = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x302,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x301,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v4);
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)ViewForHwnd;
}
