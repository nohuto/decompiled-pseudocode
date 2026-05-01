/*
 * XREFs of _lambda_f8c8e71abfd185bfe65f9064bc8488ee_::operator() @ 0x1801EBFD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8c8e71abfd185bfe65f9064bc8488ee___::Run @ 0x1801ED800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8c8e71abfd185bfe65f9064bc8488ee___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f8c8e71abfd185bfe65f9064bc8488ee_::operator()(_DWORD **a1)
{
  int v2; // eax
  int v3; // eax
  wil *v4; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v11 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1[1] + 48LL))(a1[1], &v11);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        491LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 35) + 48LL))(*((_QWORD *)*a1 + 35), v11);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        492LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v11);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)(unsigned int)*a1[2];
    v10 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F1,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v6);
    return v10;
  }
  return 0LL;
}
