/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112D10
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180112800 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180115AC8 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char *Ptr; // rax
  char *i; // rbx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  struct IApplicationView *v11; // rcx
  struct IApplicationView *v13; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+10h]
  char v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  v14 = v4;
  Ptr = (char *)this[18].Ptr;
  for ( i = (char *)this[17].Ptr; i != Ptr && *(struct IApplicationView **)(*(_QWORD *)i + 32LL) != a2; i += 16 )
    ;
  if ( i != Ptr )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)this[42].Ptr + 72LL))(this[42].Ptr, &v13) >= 0
      && v13 == a2 )
    {
      v7 = *(__int64 **)i;
      v8 = *(_QWORD *)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 24LL) >= 8uLL )
        v8 = *v7;
      PeoplePaneViewManager::NotifyListeners(this, 3LL, v8, *((unsigned int *)v7 + 10));
    }
    v9 = *(__int64 **)i;
    v10 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 24LL) >= 8uLL )
      v10 = *v9;
    PeoplePaneViewManager::NotifyListeners(this, 1LL, v10, *((unsigned int *)v9 + 10));
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v15, i);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
