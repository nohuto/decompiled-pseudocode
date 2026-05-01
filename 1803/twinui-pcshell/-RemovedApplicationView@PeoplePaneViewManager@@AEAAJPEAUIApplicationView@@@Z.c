/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C44C0
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1801C3F90 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1801C5624 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *Ptr; // rdi
  _QWORD *v6; // rax
  __int64 *v7; // r8
  PVOID v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  CWinRTApplicationView *v15; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+38h] BYREF

  v4 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  v16 = v4;
  v14[0] = a2;
  v14[1] = this;
  Ptr = (__int64 *)this[17].Ptr;
  v6 = *(_QWORD **)CAutoHandle<void *>::CAutoHandle<void *>(&v15, v14);
  if ( Ptr != v7 )
  {
    do
    {
      if ( *(_QWORD *)(*Ptr + 32) == *v6 )
        break;
      Ptr += 2;
    }
    while ( Ptr != v7 );
    if ( Ptr != v7 )
    {
      v15 = 0LL;
      v8 = this[42].Ptr;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
      if ( (*(int (__fastcall **)(PVOID, CWinRTApplicationView **))(*(_QWORD *)v8 + 72LL))(v8, &v15) >= 0 && v15 == a2 )
      {
        v9 = *Ptr;
        v10 = *Ptr;
        if ( *(_QWORD *)(*Ptr + 24) >= 8uLL )
          v10 = *(_QWORD *)v9;
        PeoplePaneViewManager::NotifyListeners((__int64)this, 3u, v10, *(_DWORD *)(v9 + 40));
      }
      v11 = *Ptr;
      v12 = *Ptr;
      if ( *(_QWORD *)(*Ptr + 24) >= 8uLL )
        v12 = *(_QWORD *)v11;
      PeoplePaneViewManager::NotifyListeners((__int64)this, 1u, v12, *(_DWORD *)(v11 + 40));
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v16, Ptr);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
