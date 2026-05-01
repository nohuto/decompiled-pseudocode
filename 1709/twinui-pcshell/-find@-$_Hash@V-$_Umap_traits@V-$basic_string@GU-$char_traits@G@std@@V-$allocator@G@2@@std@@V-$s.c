/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800EB110
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1800EA15C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r11
  _QWORD *v6; // r10
  unsigned __int64 v7; // rcx
  __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // r12
  _QWORD *j; // rax
  _QWORD *v14; // rcx
  char *v15; // rdx
  unsigned __int64 v16; // r14
  char *v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rsi
  signed __int64 v20; // r9
  unsigned __int16 v21; // cx
  int v22; // ecx
  _QWORD *v23; // rcx
  signed __int64 v24; // r8
  unsigned __int16 v25; // dx
  int v26; // ecx

  v4 = a3[2];
  v6 = a3;
  if ( a3[3] >= 8uLL )
    v6 = (_QWORD *)*a3;
  v7 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v7 < 2 * v4; i = 0x100000001B3LL * (v9 ^ i) )
    v9 = *((unsigned __int8 *)v6 + v7++);
  v10 = a1[3];
  v11 = a1[1];
  v12 = 2 * (i & a1[6]);
  for ( j = *(_QWORD **)(v10 + 16 * (i & a1[6])); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD *)(v10 + 8 * v12) == v11 )
      v14 = (_QWORD *)a1[1];
    else
      v14 = **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( j == v14 )
    {
      *a2 = v11;
      return a2;
    }
    v15 = (char *)a3;
    if ( a3[3] >= 8uLL )
      v15 = (char *)*a3;
    v16 = j[5];
    v17 = (char *)(j + 2);
    if ( v16 >= 8 )
      v17 = (char *)j[2];
    v18 = j[4];
    if ( v18 == v4 )
    {
      v19 = j[4];
      if ( v18 )
      {
        v20 = v17 - v15;
        while ( 1 )
        {
          v21 = *(_WORD *)&v15[v20];
          if ( v21 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v19 )
            goto LABEL_19;
        }
        v22 = v21 < *(_WORD *)v15 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v22 = 0;
      }
      if ( !v22 )
        break;
    }
  }
  v23 = j + 2;
  if ( v16 >= 8 )
    v23 = (_QWORD *)*v23;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  if ( v4 != v18 )
    goto LABEL_34;
  if ( v4 )
  {
    v24 = (char *)a3 - (char *)v23;
    while ( 1 )
    {
      v25 = *(_WORD *)((char *)v23 + v24);
      if ( v25 != *(_WORD *)v23 )
        break;
      v23 = (_QWORD *)((char *)v23 + 2);
      if ( !--v4 )
        goto LABEL_32;
    }
    v26 = v25 < *(_WORD *)v23 ? -1 : 1;
  }
  else
  {
LABEL_32:
    v26 = 0;
  }
  if ( v26 )
LABEL_34:
    j = (_QWORD *)a1[1];
  *a2 = j;
  return a2;
}
