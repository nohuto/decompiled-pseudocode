/*
 * XREFs of ?SetDehydrationPolicy@ViewWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180053120
 * Callers:
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x18006BFAC (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 * Callees:
 *     ?SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180056230 (-SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManag.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetDehydrationPolicy(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int64, _QWORD); // rax

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 296LL);
  AcquireSRWLockExclusive(v4);
  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    v5 = *(_QWORD *)(a1 + 168);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 520LL);
      v7 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 80LL);
      if ( (char *)v7 == (char *)ViewManagerBridge::SetDehydrationPolicyForView )
        ViewManagerBridge::SetDehydrationPolicyForView(v6, v5, a2);
      else
        v7(v6, v5, a2);
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
