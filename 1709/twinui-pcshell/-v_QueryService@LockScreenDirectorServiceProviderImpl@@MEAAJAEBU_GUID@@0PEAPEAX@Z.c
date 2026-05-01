/*
 * XREFs of ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800E19A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1A90 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_QueryService(
        LockScreenDirectorServiceProviderImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // edi
  struct ILockScreenDirector *v8; // rbx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ILockScreenDirector *v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( *(_OWORD *)a2 != *(_OWORD *)&IID_ILockScreenDirector )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
  v12 = 0LL;
  v6 = LockScreenDirectorServiceProviderImpl::EnsureChildServices(
         (LockScreenDirectorServiceProviderImpl *)((char *)this - 48),
         &v12);
  v7 = v6;
  v8 = v12;
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(struct ILockScreenDirector *, const struct _GUID *, void **))v12)(v12, a3, a4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v9 = 78LL;
  }
  else
  {
    v9 = 77LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)(unsigned int)v6);
LABEL_8:
  if ( v8 )
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
