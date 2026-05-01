/*
 * XREFs of ?get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_WindowResizingState(
        RTL_SRWLOCK **this,
        enum Windows::Internal::Shell::ViewManagerInterop::WindowResizingState *a2)
{
  RTL_SRWLOCK *v4; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  ViewEventDispatcher::AcquireLockShared(this[18], &SRWLock);
  v4 = this[20];
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *, enum Windows::Internal::Shell::ViewManagerInterop::WindowResizingState *))(*(_QWORD *)this[18][56].Ptr + 256LL))(
           this[18][56].Ptr,
           v4,
           a2);
    v5 = v6;
    if ( v6 >= 0 )
      v5 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x658,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v6);
  }
  else
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x656,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
