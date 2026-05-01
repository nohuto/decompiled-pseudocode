/*
 * XREFs of ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180072C88
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@1@@Z @ 0x180072310 (--$_Insert@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$share.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  char *v4; // rax
  char *v5; // r10
  __int64 v6; // r8
  char v7; // cl
  signed __int64 v9; // r10
  unsigned __int16 v10; // dx
  int v11; // eax

  v4 = (char *)a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v4 = *(char **)a3;
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v5 = *(char **)a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 != *(_QWORD *)(a3 + 16) )
    return 1;
  v7 = 0;
  if ( v6 )
  {
    v9 = v5 - v4;
    while ( 1 )
    {
      v10 = *(_WORD *)&v4[v9];
      if ( v10 != *(_WORD *)v4 )
        break;
      v4 += 2;
      if ( !--v6 )
        goto LABEL_12;
    }
    v11 = v10 < *(_WORD *)v4 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v11 = 0;
  }
  if ( v11 )
    return 1;
  return v7;
}
