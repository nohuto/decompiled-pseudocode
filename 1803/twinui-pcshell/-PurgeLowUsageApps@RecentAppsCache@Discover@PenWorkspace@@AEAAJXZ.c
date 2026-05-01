/*
 * XREFs of ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180197468
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800EF740 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x1801982D8 (-erase@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$share.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(RTL_SRWLOCK *this)
{
  _QWORD *Ptr; // rcx
  _QWORD *i; // r11
  const unsigned __int8 *v4; // rcx
  __int64 v5; // rax
  RTL_SRWLOCK *v6; // r11
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rdx
  PVOID v9; // rax
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, this + 21);
  Ptr = this[3].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    if ( *(int *)(i[6] + 32LL) < 3 )
    {
      v4 = (const unsigned __int8 *)(i + 2);
      if ( i[5] >= 8uLL )
        v4 = *(const unsigned __int8 **)v4;
      v5 = std::_Hash_bytes(v4, 2LL * i[4]);
      v7 = (RTL_SRWLOCK *)this[5].Ptr;
      v8 = 2 * ((__int64)this[8].Ptr & v5);
      if ( v7[2 * ((__int64)this[8].Ptr & v5) + 1].Ptr == v6 )
      {
        if ( v7[2 * ((__int64)this[8].Ptr & v5)].Ptr == v6 )
        {
          v7[2 * ((__int64)this[8].Ptr & v5)] = this[3];
          v7 = (RTL_SRWLOCK *)this[5].Ptr;
          v9 = this[3].Ptr;
        }
        else
        {
          v9 = v6[1].Ptr;
        }
        v7[v8 + 1].Ptr = v9;
      }
      else if ( v7[2 * ((__int64)this[8].Ptr & v5)].Ptr == v6 )
      {
        v7[2 * ((__int64)this[8].Ptr & v5)] = (RTL_SRWLOCK)v6->Ptr;
      }
      std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::erase(
        &this[3],
        &v11,
        v6);
      i = v11;
      Ptr = this[3].Ptr;
      if ( v11 == Ptr )
        break;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  return 0LL;
}
