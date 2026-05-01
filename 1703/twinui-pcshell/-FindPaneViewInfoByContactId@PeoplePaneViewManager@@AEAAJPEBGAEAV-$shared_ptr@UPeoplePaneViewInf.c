/*
 * XREFs of ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9CC4
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E8EA0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1800E8F90 (-IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9140 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPaneViewInfoByContactId(RTL_SRWLOCK *a1, _WORD *a2, _QWORD *a3)
{
  volatile signed __int32 *v3; // r9
  char *i; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // r10
  _WORD *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  volatile signed __int32 *v16; // [rsp+28h] [rbp-20h]
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  v3 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  v16 = v3;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 12, &SRWLock);
  for ( i = (char *)a1[13].Ptr; i != a1[14].Ptr; i += 16 )
  {
    v8 = *(_QWORD **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 60LL) )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
      v10 = v8 + 2;
      if ( v8[3] >= 8uLL )
        v8 = (_QWORD *)*v8;
      v11 = *v10;
      v12 = a2;
      if ( v9 < *v10 )
        v11 = v9;
      if ( v11 )
      {
        while ( *(_WORD *)v8 == *v12 )
        {
          v8 = (_QWORD *)((char *)v8 + 2);
          ++v12;
          if ( !--v11 )
            goto LABEL_16;
        }
        v13 = *(_WORD *)v8 < *v12 ? -1 : 1;
      }
      else
      {
LABEL_16:
        v13 = 0;
      }
      if ( !v13 && *v10 >= v9 && *v10 <= v9 )
        break;
    }
  }
  if ( i == a1[14].Ptr )
  {
    v14 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v14 = 0;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v14;
}
