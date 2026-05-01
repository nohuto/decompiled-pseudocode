/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800E5CE4
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1800E56E0 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800E5894 (--1-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@U.c)
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$20 @ 0x1801EC207 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$20.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
        void **a1)
{
  _QWORD *v2; // rsi
  volatile signed __int32 *v3; // rdi
  _QWORD *v4; // r14

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (volatile signed __int32 *)v2[7];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
          if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
      std::wstring::~wstring(v2 + 2);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *a1 );
  }
  operator delete(*a1);
}
