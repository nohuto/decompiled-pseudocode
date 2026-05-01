/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18019146C
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$19 @ 0x1801913E3 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$19.c)
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@@Z @ 0x180193118 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
        char **a1)
{
  char *v2; // rdx
  char *v3; // rcx
  char *v4; // rbx

  v2 = *(char **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  v3 = *a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(char **)v2;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::_Freenode();
      v3 = *a1;
      v2 = v4;
    }
    while ( v4 != *a1 );
  }
  std::_Deallocate(v3, 1uLL, 0x40uLL);
}
