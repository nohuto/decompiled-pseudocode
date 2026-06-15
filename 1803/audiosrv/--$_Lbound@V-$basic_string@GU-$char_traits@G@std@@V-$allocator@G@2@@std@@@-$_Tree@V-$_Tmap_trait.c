/*
 * XREFs of ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800CEBBC
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800CEC80 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::unique_ptr<_RecurringTask>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>,0>>::_Lbound<std::wstring>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v4; // rcx
  __int64 *v5; // rbp
  unsigned __int16 *v6; // rax
  __int64 *v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int16 v11; // r11
  unsigned int v12; // eax
  unsigned int v13; // eax

  v2 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = v4;
    v6 = (unsigned __int16 *)a2;
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v6 = *(unsigned __int16 **)a2;
    v7 = v4 + 4;
    if ( (unsigned __int64)v4[7] >= 8 )
      v7 = (__int64 *)v4[4];
    v8 = v4[6];
    v9 = v8;
    if ( *(_QWORD *)(a2 + 16) < v8 )
      v9 = *(_QWORD *)(a2 + 16);
    if ( v9 )
    {
      v10 = (char *)v7 - (char *)v6;
      while ( 1 )
      {
        v11 = *(unsigned __int16 *)((char *)v6 + v10);
        if ( v11 != *v6 )
          break;
        ++v6;
        if ( !--v9 )
          goto LABEL_12;
      }
      v12 = v11 < *v6 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v12 = 0;
    }
    if ( !v12 )
    {
      if ( v8 >= *(_QWORD *)(a2 + 16) )
        v12 = v8 > *(_QWORD *)(a2 + 16);
      else
        v12 = -1;
    }
    v13 = v12 >> 31;
    if ( (_BYTE)v13 )
      v4 = (__int64 *)v4[2];
    else
      v4 = (__int64 *)*v4;
    if ( !(_BYTE)v13 )
      v2 = v5;
  }
  return v2;
}
