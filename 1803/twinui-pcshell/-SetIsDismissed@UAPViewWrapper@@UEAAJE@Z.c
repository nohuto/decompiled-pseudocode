/*
 * XREFs of ?SetIsDismissed@UAPViewWrapper@@UEAAJE@Z @ 0x18005B430
 * Callers:
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AB9C (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 * Callees:
 *     ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x180056560 (-SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetIsDismissed(UAPViewWrapper *this, char a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // r8
  struct IUnknown *v6; // rdx
  ViewManagerBridge *v7; // rcx
  void (__fastcall *v8)(ViewManagerBridge *, struct IUnknown *, char); // rax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this - 45) + 296LL);
  AcquireSRWLockExclusive(v4);
  v6 = (struct IUnknown *)*((_QWORD *)this - 42);
  if ( v6 )
  {
    if ( a2 != *((_BYTE *)this + 28) )
    {
      *((_BYTE *)this + 28) = a2;
      LOBYTE(v5) = a2 != 0;
      v7 = *(ViewManagerBridge **)(*((_QWORD *)this - 45) + 520LL);
      v8 = *(void (__fastcall **)(ViewManagerBridge *, struct IUnknown *, char))(*(_QWORD *)v7 + 136LL);
      if ( v8 == ViewManagerBridge::SetSplashScreenDismissed )
        ViewManagerBridge::SetSplashScreenDismissed(v7, v6, v5);
      else
        v8(v7, v6, v5);
    }
    v9 = 0;
  }
  else
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL,
      -2);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v9;
}
