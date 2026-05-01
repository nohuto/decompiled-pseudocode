/*
 * XREFs of ?GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180115960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::GetPropertyAsBoolean(RTL_SRWLOCK **this, HSTRING a2, unsigned __int8 *a3)
{
  RTL_SRWLOCK *v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  ViewEventDispatcher::AcquireLockShared(this[18], &SRWLock);
  v6 = this[20];
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, HSTRING, unsigned __int8 *))(*(_QWORD *)this[18][56].Ptr
                                                                                     + 224LL))(
           this[18][56].Ptr,
           v6,
           a2,
           a3);
  }
  else
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x555,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
