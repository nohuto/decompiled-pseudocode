/*
 * XREFs of ?SetIsDismissed@UAPViewWrapper@@UEAAJE@Z @ 0x18013B430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetIsDismissed(RTL_SRWLOCK **this, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(this - 44), &SRWLock);
  v5 = (__int64)*(this - 42);
  if ( v5 )
  {
    if ( a2 != *((_BYTE *)this + 28) )
    {
      *((_BYTE *)this + 28) = a2;
      LOBYTE(v4) = a2 != 0;
      (*(void (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)(*(this - 44))[65].Ptr + 128LL))(
        (*(this - 44))[65].Ptr,
        v5,
        v4);
    }
    v6 = 0;
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v6;
}
