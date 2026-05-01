/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1801D99F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  _QWORD *v4; // rbx
  RTL_SRWLOCK *v5; // r12
  unsigned __int64 v6; // r13
  _BYTE *Ptr; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // r14
  __int64 *v11; // r15
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+70h] [rbp+18h]

  try
  {
    v4 = 0LL;
    v18 = 0LL;
    v5 = this + 58;
    AcquireSRWLockExclusive(this + 58);
    v19 = v5;
    v6 = 0LL;
    Ptr = this[53].Ptr;
    v8 = this[52].Ptr;
    if ( (Ptr - (_BYTE *)v8) >> 3 )
    {
      do
      {
        v9 = (_QWORD *)v8[v6];
        if ( v9[5] == a2.value )
        {
          v10 = v4;
          v4 = v9;
          v18 = v9;
          if ( v9 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
          if ( v10 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v11 = (__int64 *)this[53].Ptr;
          v12 = (__int64 *)((char *)this[52].Ptr + 8 * v6 + 8);
          if ( v12 != v11 )
          {
            do
            {
              v13 = *v12;
              *v12 = 0LL;
              v14 = *(v12 - 1);
              *(v12 - 1) = v13;
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              ++v12;
            }
            while ( v12 != v11 );
            v11 = (__int64 *)this[53].Ptr;
          }
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v11 - 1);
          this[53].Ptr = (char *)this[53].Ptr - 8;
          Ptr = this[53].Ptr;
        }
        ++v6;
        v8 = this[52].Ptr;
      }
      while ( v6 < (Ptr - (_BYTE *)v8) >> 3 );
    }
    if ( !v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        404LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x197,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v15);
  }
  return result;
}
