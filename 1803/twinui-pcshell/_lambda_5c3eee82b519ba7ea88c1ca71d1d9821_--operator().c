/*
 * XREFs of _lambda_5c3eee82b519ba7ea88c1ca71d1d9821_::operator() @ 0x1801F02B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___::Run @ 0x1801F3150 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5c3eee82b519ba7ea88c1ca71d1d9821_::operator()(_QWORD *a1)
{
  PCWSTR StringRawBuffer; // rdi
  int v3; // edx
  int v4; // edx
  int v5; // esi
  __int64 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 312LL) + 136LL))(*(_QWORD *)(*a1 + 312LL), &v7);
  if ( v7 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 344LL), 0LL);
    v8 = -1LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 576LL))(*a1 + 8LL, &v8);
    v3 = *((_DWORD *)a1 + 6);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
          v7,
          StringRawBuffer,
          v8,
          a1[2],
          1);
        return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v7);
      }
      if ( v4 != 1 )
        return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v7);
    }
    else
    {
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v7 + 24LL))(
        v7,
        StringRawBuffer,
        v8,
        a1[2],
        0);
    }
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 160LL))(
      *(_QWORD *)(*a1 + 312LL),
      &SRWLock);
    v5 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1) - 4 > 1) + 2;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
      v7,
      StringRawBuffer,
      v8,
      a1[2],
      v5);
  }
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v7);
}
