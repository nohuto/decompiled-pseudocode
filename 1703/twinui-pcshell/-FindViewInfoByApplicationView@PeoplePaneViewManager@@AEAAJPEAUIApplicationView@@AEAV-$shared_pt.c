/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9F60
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E9870 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1800E9B44 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rbx
  __int64 *i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // bp
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+10h] BYREF

  v13 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 96), &SRWLock);
  v6 = *(__int64 **)(a1 + 112);
  for ( i = *(__int64 **)(a1 + 104); i != v6; i += 2 )
  {
    v8 = *i;
    if ( *(_QWORD *)(*i + 48) )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 160) + 48LL))(
        *(_QWORD *)(a1 + 160),
        *(_QWORD *)(v8 + 48),
        &v14);
      v9 = v14;
      v10 = v14 == a2;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      v10 = 0;
    }
    if ( v10 )
      break;
  }
  if ( i == *(__int64 **)(a1 + 112) )
  {
    v11 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v11 = 0;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v11;
}
