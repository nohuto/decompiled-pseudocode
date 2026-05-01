/*
 * XREFs of ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180081B00
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18007CBF0 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::SetCloak(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 || ((a2 - 1LL) & a2) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    wil::srwlock::lock_exclusive(a1 + 3, &SRWLock);
    v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD, _QWORD))a1->Ptr + 48))(a1, a2, a3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v6);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
}
