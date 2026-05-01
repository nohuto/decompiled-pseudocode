/*
 * XREFs of ?SetHostViewInstanceId@ViewWrapperBase@@UEAAXI@Z @ 0x1800530C0
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 * Callees:
 *     ?SetHostViewInstanceIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x180055EB0 (-SetHostViewInstanceIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::SetHostViewInstanceId(
        ViewWrapperBase *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r8
  struct IUnknown *v6; // rdx
  __int64 (__fastcall *v7)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  ViewManagerBridge *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  v6 = (struct IUnknown *)*((_QWORD *)this + 23);
  v7 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 20) + 520LL)
                                                                                              + 176LL);
  v8 = *(ViewManagerBridge **)(*((_QWORD *)this + 20) + 520LL);
  if ( v7 == ViewManagerBridge::SetHostViewInstanceIdForView )
    v9 = ViewManagerBridge::SetHostViewInstanceIdForView(v8, v6, v5);
  else
    v9 = v7(v8, v6, v5);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v9,
      a5);
}
