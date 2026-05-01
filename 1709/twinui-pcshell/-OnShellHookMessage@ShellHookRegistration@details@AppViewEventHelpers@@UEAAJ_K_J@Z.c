/*
 * XREFs of ?OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z @ 0x180190DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  void *v8; // rcx
  PVOID Ptr; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v14 = 0LL;
    v6 = this + 8;
    AcquireSRWLockShared(this + 8);
    v8 = v14;
    v14 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    Ptr = this[9].Ptr;
    if ( Ptr )
    {
      v14 = 0LL;
      v10 = (*(__int64 (__fastcall **)(PVOID, GUID *, __int64 *))(*(_QWORD *)Ptr + 24LL))(
              Ptr,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v15);
      if ( v10 >= 0 )
      {
        if ( v15 )
        {
          v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v15)(
                  v15,
                  &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c,
                  &v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        else
        {
          v10 = -2147023728;
        }
      }
      if ( v10 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v10);
      Ptr = v14;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v6 )
    {
      ReleaseSRWLockShared(v6);
      Ptr = v14;
    }
    if ( Ptr )
    {
      v11 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3);
      if ( v14 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
      result = v11;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appvieweventhelpers.h",
                           v7);
  }
  return result;
}
