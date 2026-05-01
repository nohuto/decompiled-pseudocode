/*
 * XREFs of ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18013F220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetShellCloak(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(*(RTL_SRWLOCK **)(a1 + 176), &SRWLock);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 464LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 176) + 464LL),
         *(_QWORD *)(a1 + 264),
         a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
