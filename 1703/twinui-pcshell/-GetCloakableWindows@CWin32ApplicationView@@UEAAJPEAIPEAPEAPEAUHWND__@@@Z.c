/*
 * XREFs of ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18007D480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18007D624 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18007D878 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetCloakableWindows(RTL_SRWLOCK *this, unsigned int *a2, HWND **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CWin32ApplicationView *v8; // rbp
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rdi
  void *v13; // rcx
  _QWORD *v15; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  wil::srwlock::lock_exclusive(this - 12, &SRWLock);
  if ( this[9].Ptr )
  {
    v6 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer((CWin32ApplicationView *)&this[-15], a2, a3);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x302,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6);
  }
  else
  {
    v8 = (CWin32ApplicationView *)&this[-15];
    v18 = this - 15;
    wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v15, &v18);
    v9 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[6].Ptr + 24LL))(this[6].Ptr);
    v10 = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
            &this[8],
            v9);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v11 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer(v8, a2, a3);
      v7 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x308,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
          (const char *)(unsigned int)v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x307,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v16 )
    {
      v12 = v15;
      v13 = (void *)v15[23];
      if ( v13 )
      {
        CoTaskMemFree(v13);
        v12[23] = 0LL;
      }
      v12[24] = 0LL;
      v12[26] = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v7;
}
