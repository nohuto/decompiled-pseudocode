/*
 * XREFs of ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x180191554
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$1 @ 0x180191403 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@@Z @ 0x180193118 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall std::unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~unordered_map<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        _QWORD *a1)
{
  char *v2; // rcx
  char **v3; // rax
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rbx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(a1[5] - (_QWORD)v2) >> 3, 8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (char **)a1[1];
  v4 = *v3;
  *v3 = (char *)v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (char *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = *(char **)v4;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::_Freenode();
      v5 = (char *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate(v5, 1uLL, 0x40uLL);
}
