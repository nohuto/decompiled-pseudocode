/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run @ 0x18008A130
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180055BE0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, __int64, __int64); // rax

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) + 296LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v3 + 336) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 168) + 520LL);
    v5 = *(unsigned int *)(v3 + 284);
    v6 = *(unsigned int *)(v3 + 148);
    v7 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 32LL);
    if ( v7 == ViewManagerBridge::NavigateView )
      ViewManagerBridge::NavigateView(v4, v6, v5);
    else
      v7(v4, v6, v5);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
