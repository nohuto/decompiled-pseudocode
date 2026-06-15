/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x180009260
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800090A0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x18007C9D4 (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800A76BC (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x1800A7770 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  __int64 *v6; // rdx
  __int64 *v7; // r8
  unsigned __int8 v8; // r10
  __int64 *v9; // rbx
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  __int64 result; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *j; // rax
  __int64 *i; // rax
  int v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v6 = (__int64 *)(*a1)[1];
    v7 = *a1;
    v8 = 1;
    while ( !*((_BYTE *)v6 + 25) )
    {
      v7 = v6;
      if ( *a4 >= *((_DWORD *)v6 + 7) )
      {
        v8 = 0;
        v6 = (__int64 *)v6[2];
      }
      else
      {
        v8 = 1;
        v6 = (__int64 *)*v6;
      }
    }
    v9 = v7;
    if ( v8 )
    {
      if ( v7 == (__int64 *)**a1 )
      {
        if ( (unsigned __int64)a1[1] >= 0x666666666666665LL )
        {
          std::_Deallocate(a5, 1uLL, 0x28uLL);
          std::_Xlength_error("map/set<T> too long");
        }
        a1[1] = (__int64 *)((char *)a1[1] + 1);
        v10 = a5;
        *((_QWORD *)a5 + 1) = v7;
        if ( v7 == *a1 )
        {
          (*a1)[1] = (__int64)v10;
          **a1 = (__int64)v10;
          (*a1)[2] = (__int64)v10;
        }
        else
        {
          *v7 = (__int64)v10;
          if ( v7 == (__int64 *)**a1 )
            **a1 = (__int64)v10;
        }
        v11 = v10;
        while ( !*(_BYTE *)(v11[1] + 24LL) )
        {
          v13 = v11[1];
          v14 = *(__int64 **)(v13 + 8);
          v15 = *v14;
          if ( v13 == *v14 )
          {
            v16 = v14[2];
            if ( *(_BYTE *)(v16 + 24) )
            {
              if ( v11 == *(_QWORD **)(v13 + 16) )
                std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
              *(_BYTE *)(v11[1] + 24LL) = 1;
              *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                a1,
                *(_QWORD *)(v11[1] + 8LL));
            }
            else
            {
              *(_BYTE *)(v13 + 24) = 1;
              *(_BYTE *)(v16 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
              v11 = *(_QWORD **)(v11[1] + 8LL);
            }
          }
          else if ( *(_BYTE *)(v15 + 24) )
          {
            if ( v11 == *(_QWORD **)v13 )
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                a1,
                v13);
            *(_BYTE *)(v11[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
          }
          else
          {
            *(_BYTE *)(v13 + 24) = 1;
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
            v11 = *(_QWORD **)(v11[1] + 8LL);
          }
        }
        *(_BYTE *)((*a1)[1] + 24) = 1;
        *(_QWORD *)a2 = v10;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v7 + 25) )
      {
        v9 = (__int64 *)v7[2];
      }
      else if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v9 != (__int64 *)*i )
            break;
          v9 = i;
        }
        if ( !*((_BYTE *)v9 + 25) )
          v9 = i;
      }
      else
      {
        v9 = (__int64 *)*v7;
        for ( j = *(__int64 **)(*v7 + 16); !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          v9 = j;
      }
    }
    if ( *((_DWORD *)v9 + 7) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x28uLL);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
                                   (int)a1,
                                   (int)&v20,
                                   v8,
                                   (int)v7,
                                   v19,
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
