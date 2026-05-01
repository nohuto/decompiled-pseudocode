/*
 * XREFs of ?put_PointerActivationPolicy@ViewWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180140A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::put_PointerActivationPolicy(__int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 168), &SRWLock);
  *(_DWORD *)(a1 + 496) = a2;
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
  {
    LOBYTE(v4) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 192LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
      v5,
      v4);
    v6 = 0;
  }
  else
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x664,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v6;
}
