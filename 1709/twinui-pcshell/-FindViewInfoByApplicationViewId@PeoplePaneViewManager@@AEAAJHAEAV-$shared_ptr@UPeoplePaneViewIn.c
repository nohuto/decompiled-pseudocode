/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011324C
 * Callers:
 *     ?GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18011182C (-GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x180112010 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z @ 0x1801125B0 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1801126A0 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, __int64 *a3)
{
  volatile signed __int32 *v3; // rbx
  PVOID Ptr; // rbx
  __int64 v8; // rdi
  bool v9; // al
  __int64 *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rbx
  __int64 v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  AcquireSRWLockShared(a1 + 16);
  Ptr = a1[18].Ptr;
  v8 = (__int64)a1[17].Ptr;
  *(_OWORD *)v14 = 0LL;
  while ( (PVOID)v8 != Ptr )
  {
    if ( *(_QWORD *)(*(_QWORD *)v8 + 48LL) )
    {
      v9 = ~*(_DWORD *)(*(_QWORD *)v8 + 48LL) == a2;
    }
    else
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=(v14, v8);
      v9 = 0;
    }
    if ( v9 )
      break;
    v8 += 16LL;
  }
  if ( (PVOID)v8 == a1[18].Ptr )
  {
    if ( !v14[0] )
    {
      v11 = -2147023728;
      goto LABEL_18;
    }
    v10 = v14;
  }
  else
  {
    v10 = (__int64 *)v8;
  }
  std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, (__int64)v10);
  v11 = 0;
LABEL_18:
  v12 = (volatile signed __int32 *)v14[1];
  if ( v14[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14[1] + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( a1 != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockShared(a1 + 16);
  return v11;
}
