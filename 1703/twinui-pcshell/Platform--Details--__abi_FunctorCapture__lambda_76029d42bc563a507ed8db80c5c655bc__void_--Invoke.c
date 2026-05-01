/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_76029d42bc563a507ed8db80c5c655bc__void_::Invoke @ 0x180131150
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_76029d42bc563a507ed8db80c5c655bc__void_::Invoke(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 128LL), &SRWLock);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 88);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, *(_QWORD *)(v2 + 96));
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 88LL) + 128LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL));
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 88LL) + 112LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL));
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 80);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, *(_QWORD *)(v7 + 120));
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL) = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL));
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
