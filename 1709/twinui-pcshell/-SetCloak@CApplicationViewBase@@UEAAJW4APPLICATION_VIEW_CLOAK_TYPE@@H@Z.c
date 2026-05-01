/*
 * XREFs of ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800849E0
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18007FAA0 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::SetCloak(RTL_SRWLOCK *a1, unsigned int a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

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
    v6 = a1 + 4;
    AcquireSRWLockExclusive(a1 + 4);
    v7 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD, _QWORD))a1->Ptr + 48))(a1, a2, a3);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v7);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    return 0LL;
  }
}
