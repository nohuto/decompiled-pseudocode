/*
 * XREFs of ?SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1801F42B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801F2D90 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::SetWindowOwner(WindowWrapperBase *this, HWND a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  int v6; // edi
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 160LL))(*((_QWORD *)this + 39), &SRWLock);
    v4 = *((int *)this + 82);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( !v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        207LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80070490LL);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 39) + 128LL))(
                     *((_QWORD *)this + 39),
                     &v11);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND))(*(_QWORD *)*v5 + 24LL))(*v5, v4, a2);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v11);
    result = 2147943800LL;
    if ( v6 != -2147023496 )
    {
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          219LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v6);
      if ( !a2 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 152LL))(
          *((_QWORD *)this + 39),
          &SRWLock);
        WindowWrapperBase::PushZbidToWindow((__int64)this, *((_DWORD *)this + 118));
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
