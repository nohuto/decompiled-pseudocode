/*
 * XREFs of ?GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1800507E0
 * Callers:
 *     ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180047AE0 (-GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ.c)
 * Callees:
 *     ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180057290 (-GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::GetPropertyAsInt(ViewWrapperBase *this, HSTRING a2, int *a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IUnknown *v7; // rdx
  ViewManagerBridge *v8; // rcx
  int (*v9)(ViewManagerBridge *__hidden, struct IUnknown *, HSTRING, int *); // rax
  int ViewClientExtensionMapPropertyAsInt; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  AcquireSRWLockShared(v6);
  v7 = (struct IUnknown *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    v8 = *(ViewManagerBridge **)(*((_QWORD *)this + 20) + 520LL);
    v9 = *(int (**)(ViewManagerBridge *__hidden, struct IUnknown *, HSTRING, int *))(*(_QWORD *)v8 + 240LL);
    if ( v9 == ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt )
      ViewClientExtensionMapPropertyAsInt = ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt(v8, v7, a2, a3);
    else
      ViewClientExtensionMapPropertyAsInt = ((__int64 (__fastcall *)(ViewManagerBridge *, struct IUnknown *, HSTRING, int *))v9)(
                                              v8,
                                              v7,
                                              a2,
                                              a3);
    v11 = ViewClientExtensionMapPropertyAsInt;
  }
  else
  {
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL,
      v13);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v11;
}
