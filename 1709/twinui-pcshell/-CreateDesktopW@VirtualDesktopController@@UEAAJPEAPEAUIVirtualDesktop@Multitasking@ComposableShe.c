/*
 * XREFs of ?CreateDesktopW@VirtualDesktopController@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B7890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::CreateDesktopW(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  RTL_SRWLOCK *v4; // rdi
  PVOID Ptr; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v4 = this + 13;
  AcquireSRWLockShared(this + 13);
  v13 = v4;
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    v12 = 0LL;
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 80LL))(Ptr, &v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PVOID, __int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **))(*(_QWORD *)this[12].Ptr + 24LL))(
             this[12].Ptr,
             v12,
             a2);
      v6 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x64,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x63,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v7);
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
