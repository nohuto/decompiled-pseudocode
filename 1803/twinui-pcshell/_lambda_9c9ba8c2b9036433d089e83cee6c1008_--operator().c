/*
 * XREFs of _lambda_9c9ba8c2b9036433d089e83cee6c1008_::operator() @ 0x1801EB7B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9c9ba8c2b9036433d089e83cee6c1008___::Run @ 0x1801ED7B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9c9ba8c2b9036433d089e83cee6c1008___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9c9ba8c2b9036433d089e83cee6c1008_::operator()(RTL_SRWLOCK **a1)
{
  int v2; // eax
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rcx
  BOOL v5; // esi
  int v6; // eax
  wil *v7; // rcx
  const char *Ptr_low; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v14 = 0LL;
    SafeRelease<IShellItemArray>(&v14);
    v2 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64 *))a1[1]->Ptr + 6))(a1[1], &v14);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        847LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v2);
    v3 = *a1 + 31;
    AcquireSRWLockShared(v3);
    v4 = *a1;
    v5 = LOBYTE((*a1)[25].Ptr) == 0;
    if ( v3 )
    {
      ReleaseSRWLockShared(v3);
      v4 = *a1;
    }
    v6 = (*(__int64 (__fastcall **)(PVOID, __int64, BOOL))(*(_QWORD *)v4[35].Ptr + 104LL))(v4[35].Ptr, v14, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        854LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v14);
  }
  catch ( ... )
  {
    LODWORD(a1[2]->Ptr) = wil::ResultFromCaughtException(v7);
    Ptr_low = (const char *)LODWORD(a1[2]->Ptr);
    v13 = (unsigned int)Ptr_low;
    if ( (int)Ptr_low < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        Ptr_low);
    return v13;
  }
  return 0LL;
}
