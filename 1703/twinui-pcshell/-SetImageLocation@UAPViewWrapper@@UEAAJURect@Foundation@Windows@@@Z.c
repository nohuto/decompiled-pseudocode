/*
 * XREFs of ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1801110F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetImageLocation(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  ViewEventDispatcher::AcquireLockShared(*(RTL_SRWLOCK **)(a1 - 352), SRWLock);
  v4 = *(_QWORD *)(a1 - 336);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 - 352) + 448LL) + 136LL))(
      *(_QWORD *)(*(_QWORD *)(a1 - 352) + 448LL),
      v4,
      a2);
    v5 = 0;
  }
  else
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return v5;
}
