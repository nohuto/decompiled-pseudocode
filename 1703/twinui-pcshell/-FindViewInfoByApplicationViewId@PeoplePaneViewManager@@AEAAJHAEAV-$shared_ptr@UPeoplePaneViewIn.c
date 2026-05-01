/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9E00
 * Callers:
 *     ?GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1800E895C (-GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1800E9050 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z @ 0x1800E9620 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1800E9710 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  volatile signed __int32 *v3; // r9
  _OWORD *Ptr; // rbx
  _OWORD *v8; // rdi
  bool v9; // al
  __int128 *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+40h] [rbp-10h]
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+40h] BYREF
  PVOID v17; // [rsp+A0h] [rbp+50h]
  _OWORD *v18; // [rsp+A8h] [rbp+58h]

  v3 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  v15 = v3;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 12, &SRWLock);
  Ptr = a1[14].Ptr;
  v8 = a1[13].Ptr;
  v14 = 0LL;
  v17 = Ptr;
  v18 = v8;
  while ( v8 != Ptr )
  {
    if ( *(_QWORD *)(*(_QWORD *)v8 + 48LL) )
    {
      v9 = ~*(_DWORD *)(*(_QWORD *)v8 + 48LL) == a2;
    }
    else
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=(&v14, v8);
      v9 = 0;
    }
    if ( v9 )
      break;
    ++v8;
  }
  if ( v8 == a1[14].Ptr )
  {
    if ( !(_QWORD)v14 )
    {
      v11 = -2147023728;
      goto LABEL_18;
    }
    v10 = &v14;
  }
  else
  {
    v10 = v8;
  }
  std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v10);
  v11 = 0;
LABEL_18:
  v12 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v11;
}
