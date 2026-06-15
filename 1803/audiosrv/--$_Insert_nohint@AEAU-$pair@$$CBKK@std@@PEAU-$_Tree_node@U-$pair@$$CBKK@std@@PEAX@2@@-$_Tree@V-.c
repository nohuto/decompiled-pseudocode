/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18001FA90
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x180099614 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CB65C (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800D51D4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  _QWORD *v6; // r10
  __int64 **v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  char v10; // r8
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *v13; // r9
  _QWORD *v14; // r11
  __int64 result; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // r11
  _QWORD *v24; // rbx
  _QWORD *v25; // r11
  __int64 *i; // rax
  __int64 *v27; // rax
  __int64 *v28; // rdx
  int v29; // [rsp+20h] [rbp-28h]
  int v30; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  try
  {
    v7 = (__int64 **)*a1;
    v8 = *(__int64 **)(*a1 + 8LL);
    v9 = (__int64 *)*a1;
    v10 = 1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8;
      if ( *a4 >= *((_DWORD *)v8 + 7) )
      {
        v10 = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v10 = 1;
        v8 = (__int64 *)*v8;
      }
    }
    v11 = v9;
    if ( v10 )
    {
      if ( v9 == *v7 )
      {
        v12 = v6[1];
        if ( v12 >= 0x666666666666665LL )
        {
          std::_Deallocate(a5, 1uLL, 0x28uLL);
          std::_Xlength_error("map/set<T> too long");
        }
        v6[1] = v12 + 1;
        v13 = a5;
        *((_QWORD *)a5 + 1) = v9;
        if ( v9 == (__int64 *)*v6 )
        {
          *(_QWORD *)(*v6 + 8LL) = v13;
          *(_QWORD *)*v6 = v13;
          *(_QWORD *)(*v6 + 16LL) = v13;
        }
        else
        {
          *v9 = (__int64)v13;
          if ( v9 == *(__int64 **)*v6 )
            *(_QWORD *)*v6 = v13;
        }
        v14 = v13;
        while ( !*(_BYTE *)(v14[1] + 24LL) )
        {
          v16 = v14;
          v17 = v14;
          v18 = v14[1];
          v19 = *(__int64 **)(v18 + 8);
          v20 = *v19;
          if ( v18 == *v19 )
          {
            v21 = v19[2];
            if ( *(_BYTE *)(v21 + 24) )
            {
              v22 = *(_QWORD **)(v18 + 16);
              if ( v14 == v22 )
                std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
                  v6,
                  v18);
              v23 = (_QWORD *)v18;
              if ( v17 != v22 )
                v23 = v16;
              *(_BYTE *)(v23[1] + 24LL) = 1;
              *(_BYTE *)(*(_QWORD *)(v23[1] + 8LL) + 24LL) = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(v6);
            }
            else
            {
              *(_BYTE *)(v18 + 24) = 1;
              *(_BYTE *)(v21 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
              v14 = *(_QWORD **)(v14[1] + 8LL);
            }
          }
          else if ( *(_BYTE *)(v20 + 24) )
          {
            v24 = *(_QWORD **)v18;
            if ( v14 == *(_QWORD **)v18 )
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(v6);
            v25 = (_QWORD *)v18;
            if ( v16 != v24 )
              v25 = v16;
            *(_BYTE *)(v25[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v25[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              v6,
              *(_QWORD *)(v25[1] + 8LL));
          }
          else
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
            v14 = *(_QWORD **)(v14[1] + 8LL);
          }
        }
        *(_BYTE *)(*(_QWORD *)(*v6 + 8LL) + 24LL) = 1;
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v11 = (__int64 *)v9[2];
      }
      else if ( *(_BYTE *)(*v9 + 25) )
      {
        v27 = (__int64 *)v9[1];
        if ( !*((_BYTE *)v27 + 25) )
        {
          v28 = v9;
          do
          {
            if ( v28 != (__int64 *)*v27 )
              break;
            v11 = v27;
            v27 = (__int64 *)v27[1];
            v28 = v11;
          }
          while ( !*((_BYTE *)v27 + 25) );
        }
        if ( !*((_BYTE *)v11 + 25) )
          v11 = v27;
      }
      else
      {
        v11 = (__int64 *)*v9;
        for ( i = *(__int64 **)(*v9 + 16); !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
          v11 = i;
      }
    }
    if ( *((_DWORD *)v11 + 7) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x28uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                                   (int)v6,
                                   (int)&v30,
                                   v10,
                                   (int)v9,
                                   v29,
                                   a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate(a5, 1uLL, 0x28uLL);
    throw;
  }
  return result;
}
