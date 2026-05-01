/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800724F0
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801972C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v3; // r15
  char *v4; // rbx
  __int64 v5; // r11
  char *v8; // r10
  unsigned __int64 v9; // rax
  __int64 i; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r14
  _QWORD *v19; // rcx
  char *v20; // rdx
  unsigned __int64 v21; // rdi
  char *v22; // r9
  __int64 v23; // r10
  __int64 v24; // r8
  signed __int64 v25; // r9
  char v26; // cl
  _QWORD *v27; // rdx
  signed __int64 v28; // rbx

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = a3;
  if ( v3 >= 8 )
    v8 = *(char **)a3;
  v9 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v9 < 2 * v5; i = 0x100000001B3LL * (v11 ^ i) )
    v11 = (unsigned __int8)v8[v9++];
  v12 = a1[3];
  v13 = a1[6];
  v14 = (_QWORD *)a1[1];
  v15 = 2 * (i & v13);
  v16 = *(_QWORD **)(v12 + 8 * v15);
  v17 = v16;
  v18 = v12 + 8 * v15;
  while ( 1 )
  {
    v19 = v17 == v14 ? v14 : **(_QWORD ***)(v18 + 8);
    if ( v16 == v19 )
      break;
    v20 = v4;
    if ( v3 >= 8 )
      v20 = *(char **)v4;
    v21 = v16[5];
    v22 = (char *)(v16 + 2);
    if ( v21 >= 8 )
      v22 = (char *)v16[2];
    v23 = v16[4];
    if ( v23 == v5 )
    {
      v24 = v16[4];
      if ( !v23 )
      {
LABEL_18:
        v26 = 0;
        goto LABEL_19;
      }
      v25 = v22 - v20;
      while ( *(_WORD *)&v20[v25] == *(_WORD *)v20 )
      {
        v20 += 2;
        if ( !--v24 )
          goto LABEL_18;
      }
    }
    v26 = 1;
LABEL_19:
    if ( !v26 )
    {
      v27 = v16 + 2;
      if ( v21 >= 8 )
        v27 = (_QWORD *)*v27;
      if ( v3 >= 8 )
        v4 = *(char **)v4;
      if ( v5 != v23 )
        goto LABEL_35;
      if ( v5 )
      {
        v28 = v4 - (char *)v27;
        while ( *(_WORD *)((char *)v27 + v28) == *(_WORD *)v27 )
        {
          v27 = (_QWORD *)((char *)v27 + 2);
          if ( !--v5 )
            goto LABEL_29;
        }
LABEL_35:
        v16 = v14;
      }
LABEL_29:
      *a2 = v16;
      return a2;
    }
    v16 = (_QWORD *)*v16;
  }
  *a2 = v14;
  return a2;
}
