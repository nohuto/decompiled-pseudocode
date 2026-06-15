/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800D399C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@2@0@Z @ 0x1800D38D0 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_1800D38D0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CB65C (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800D51D4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::unique_ptr<_RecurringTask>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v7; // rcx
  _QWORD *i; // rax
  _QWORD *v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char v17; // cl
  _QWORD *v18; // r11
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  std::_Ref_count_base *v22; // rcx
  std::_Ref_count_base *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *result; // rax

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = a3[2];
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = (_QWORD *)a3[1]; !*((_BYTE *)i + 25) && v3 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
        v3 = i;
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min((_QWORD *)v7);
    }
    v3 = i;
  }
  v9 = (_QWORD *)a3[2];
  if ( *(_BYTE *)(*a3 + 25LL) )
    goto LABEL_13;
  if ( *((_BYTE *)v9 + 25) )
  {
    v9 = (_QWORD *)*a3;
LABEL_13:
    v10 = (_QWORD *)a3[1];
    if ( !*((_BYTE *)v9 + 25) )
      v9[1] = v10;
    if ( *(_QWORD **)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( (_QWORD *)*v10 == a3 )
    {
      *v10 = v9;
    }
    else
    {
      v10[2] = v9;
    }
    v11 = (_QWORD *)*a1;
    v12 = (_QWORD *)*a1;
    if ( *(_QWORD **)*a1 == a3 )
    {
      if ( *((_BYTE *)v9 + 25) )
        v13 = v10;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v9);
      *v11 = v13;
      v11 = (_QWORD *)*a1;
      v12 = (_QWORD *)*a1;
    }
    if ( (_QWORD *)v12[2] == a3 )
    {
      if ( *((_BYTE *)v9 + 25) )
      {
        v14 = v10;
      }
      else
      {
        v15 = v9[2];
        v14 = v9;
        if ( !*(_BYTE *)(v15 + 25) )
        {
          do
          {
            v14 = (_QWORD *)v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
          v12 = v11;
        }
      }
      v12[2] = v14;
    }
    goto LABEL_43;
  }
  v9 = (_QWORD *)v3[2];
  if ( v3 == a3 )
    goto LABEL_13;
  *(_QWORD *)(*a3 + 8LL) = v3;
  *v3 = *a3;
  if ( v3 == (_QWORD *)a3[2] )
  {
    v10 = v3;
  }
  else
  {
    v10 = (_QWORD *)v3[1];
    if ( !*((_BYTE *)v9 + 25) )
      v9[1] = v10;
    *v10 = v9;
    v3[2] = a3[2];
    *(_QWORD *)(a3[2] + 8LL) = v3;
  }
  if ( *(_QWORD **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v16 = (_QWORD *)a3[1];
    if ( (_QWORD *)*v16 == a3 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  v3[1] = a3[1];
  v17 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v17;
LABEL_43:
  if ( *((_BYTE *)a3 + 24) == 1 )
  {
    if ( v9 != *(_QWORD **)(*a1 + 8LL) )
    {
      do
      {
        v18 = v10;
        if ( *((_BYTE *)v9 + 24) != 1 )
          break;
        v19 = (_BYTE *)*v10;
        if ( v9 == (_QWORD *)*v10 )
        {
          v19 = (_BYTE *)v10[2];
          if ( !v19[24] )
          {
            v19[24] = 1;
            *((_BYTE *)v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              a1,
              v10);
            v19 = (_BYTE *)v10[2];
          }
          if ( v19[25] )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
                (__int64)a1,
                v19);
              v19 = (_BYTE *)v10[2];
            }
            v19[24] = *((_BYTE *)v10 + 24);
            *((_BYTE *)v10 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !v19[24] )
          {
            v19[24] = 1;
            *((_BYTE *)v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              v10);
            v19 = (_BYTE *)*v10;
          }
          if ( v19[25] )
            goto LABEL_61;
          v20 = *((_QWORD *)v19 + 2);
          if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
            {
              *(_BYTE *)(v20 + 24) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
                a1,
                v19);
              v19 = (_BYTE *)*v10;
            }
            v19[24] = *((_BYTE *)v10 + 24);
            *((_BYTE *)v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        v19[24] = 0;
LABEL_61:
        v9 = v18;
        v10 = (_QWORD *)v10[1];
      }
      while ( v18 != *(_QWORD **)(*a1 + 8LL) );
    }
    *((_BYTE *)v9 + 24) = 1;
  }
  v21 = a3[8];
  if ( v21 )
  {
    if ( *(_QWORD *)v21 )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)v21, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v21, 1);
      CloseThreadpoolTimer(*(PTP_TIMER *)v21);
    }
    *(_QWORD *)(v21 + 8) = 0LL;
    v22 = *(std::_Ref_count_base **)(v21 + 16);
    *(_QWORD *)(v21 + 16) = 0LL;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    v23 = *(std::_Ref_count_base **)(v21 + 16);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    operator delete((void *)v21, (const struct std::nothrow_t *)0x20);
  }
  v24 = a3[7];
  if ( v24 >= 8 )
    std::_Deallocate((_QWORD *)a3[4], v24 + 1, 2uLL);
  a3[6] = 0LL;
  a3[7] = 7LL;
  *((_WORD *)a3 + 16) = 0;
  std::_Deallocate(a3, 1uLL, 0x48uLL);
  v25 = a1[1];
  if ( v25 )
    a1[1] = v25 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
