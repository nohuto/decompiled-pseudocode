/*
 * XREFs of ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180080470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180080618 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180080868 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetCloakableWindows(RTL_SRWLOCK *this, unsigned int *a2, HWND **a3)
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  PVOID Ptr; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  v6 = this - 12;
  AcquireSRWLockExclusive(this - 12);
  if ( this[11].Ptr )
  {
    v7 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer((CWin32ApplicationView *)&this[-16], a2, a3);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FF,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v9 = this - 16;
    v10 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[8].Ptr + 24LL))(this[8].Ptr);
    v11 = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
            &this[10],
            v10);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer((CWin32ApplicationView *)v9, a2, a3);
      v8 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x305,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
          (const char *)(unsigned int)v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x304,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v11);
    }
    Ptr = v9[26].Ptr;
    if ( Ptr )
    {
      CoTaskMemFree(Ptr);
      v9[26].Ptr = 0LL;
    }
    v9[27].Ptr = 0LL;
    v9[29].Ptr = 0LL;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v8;
}
