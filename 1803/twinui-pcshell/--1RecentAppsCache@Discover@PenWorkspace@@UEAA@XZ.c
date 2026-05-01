/*
 * XREFs of ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x180191648
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x180191A70 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@@Z @ 0x180193118 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rcx
  char *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  char *v11; // rcx
  char **v12; // rax
  char *v13; // rdx
  char *v14; // rcx
  char *v15; // rbx

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 208);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  v3 = (wil::details *)*((_QWORD *)this + 19);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (char *)*((_QWORD *)this + 18);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 17);
    if ( !v5 )
      break;
    v6 = v5 - 1;
    *((_QWORD *)this + 17) = v6;
    if ( !v6 )
      *((_QWORD *)this + 16) = 0LL;
  }
  v7 = *((_QWORD *)this + 15);
  while ( v7 )
  {
    --v7;
    v8 = *(char **)(*((_QWORD *)this + 14) + 8 * v7);
    if ( v8 )
      std::_Deallocate(v8, 1uLL, 0xCuLL);
  }
  v9 = (char *)*((_QWORD *)this + 14);
  if ( v9 )
    std::_Deallocate(v9, *((_QWORD *)this + 15), 8uLL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  std::_Deallocate(*((char **)this + 13), 1uLL, 0x10uLL);
  *((_QWORD *)this + 13) = 0LL;
  v10 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (char *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    std::_Deallocate(v11, (__int64)(*((_QWORD *)this + 7) - (_QWORD)v11) >> 3, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v12 = (char **)*((_QWORD *)this + 3);
  v13 = *v12;
  *v12 = (char *)v12;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  v14 = (char *)*((_QWORD *)this + 3);
  if ( v13 != v14 )
  {
    do
    {
      v15 = *(char **)v13;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::_Freenode();
      v14 = (char *)*((_QWORD *)this + 3);
      v13 = v15;
    }
    while ( v15 != v14 );
  }
  std::_Deallocate(v14, 1uLL, 0x40uLL);
  *((_DWORD *)this + 3) = -1073741823;
}
