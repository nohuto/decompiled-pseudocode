/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x18014784C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@0@Z @ 0x1800D38A0 (-erase@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@@@s.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@Z @ 0x1800D3854 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::erase(
        _QWORD *a1,
        char **a2,
        __int64 a3)
{
  char *v3; // rbx
  char *v7; // r11
  __int64 v8; // rcx
  char *i; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // cl
  char **v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  char **result; // rax

  v3 = (char *)a3;
  v7 = (char *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v8 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v8 + 25) )
    {
      for ( i = *(char **)(a3 + 8); !i[25] && v3 == *((char **)i + 2); i = (char *)*((_QWORD *)i + 1) )
        v3 = i;
    }
    else
    {
      i = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v8);
    }
    v3 = i;
  }
  v10 = *(_QWORD *)(a3 + 16);
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v10 + 25) )
  {
    v10 = *(_QWORD *)a3;
LABEL_13:
    v11 = *(_QWORD *)(a3 + 8);
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    if ( *(char **)(*a1 + 8LL) == v7 )
    {
      *(_QWORD *)(*a1 + 8LL) = v10;
    }
    else if ( *(char **)v11 == v7 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v10;
    }
    v12 = (_QWORD *)*a1;
    v13 = (_QWORD *)*a1;
    if ( *(char **)*a1 == v7 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v14 = (_QWORD *)v11;
      else
        v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v10);
      *v12 = v14;
      v12 = (_QWORD *)*a1;
      v13 = (_QWORD *)*a1;
    }
    if ( (char *)v13[2] == v7 )
    {
      if ( *(_BYTE *)(v10 + 25) )
      {
        v15 = v11;
      }
      else
      {
        v16 = *(_QWORD *)(v10 + 16);
        v15 = v10;
        if ( !*(_BYTE *)(v16 + 25) )
        {
          do
          {
            v15 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
          v13 = v12;
        }
      }
      v13[2] = v15;
    }
    v17 = *(_BYTE *)(a3 + 24);
    goto LABEL_44;
  }
  v10 = *((_QWORD *)v3 + 2);
  if ( v3 == v7 )
    goto LABEL_13;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *(char **)(a3 + 16) )
  {
    v11 = (__int64)v3;
  }
  else
  {
    v11 = *((_QWORD *)v3 + 1);
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v11 = v10;
    *((_QWORD *)v3 + 2) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v3;
  }
  if ( *(char **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v18 = *(char ***)(a3 + 8);
    if ( *v18 == v7 )
      *v18 = v3;
    else
      v18[2] = v3;
  }
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a3 + 8);
  v17 = v3[24];
  v3[24] = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v17;
LABEL_44:
  if ( v17 == 1 )
  {
    if ( v10 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v19 = v11;
        if ( *(_BYTE *)(v10 + 24) != 1 )
          break;
        v20 = *(_QWORD *)v11;
        if ( v10 == *(_QWORD *)v11 )
        {
          v20 = *(_QWORD *)(v11 + 16);
          if ( !*(_BYTE *)(v20 + 24) )
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v11 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v11);
            v20 = *(_QWORD *)(v11 + 16);
          }
          if ( *(_BYTE *)(v20 + 25) )
            goto LABEL_62;
          if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
              *(_BYTE *)(v20 + 24) = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
              v20 = *(_QWORD *)(v11 + 16);
            }
            *(_BYTE *)(v20 + 24) = *(_BYTE *)(v11 + 24);
            *(_BYTE *)(v11 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v11);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v20 + 24) )
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v11 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
            v20 = *(_QWORD *)v11;
          }
          if ( *(_BYTE *)(v20 + 25) )
            goto LABEL_62;
          v21 = *(_QWORD *)(v20 + 16);
          if ( *(_BYTE *)(v21 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) == 1 )
            {
              *(_BYTE *)(v21 + 24) = 1;
              *(_BYTE *)(v20 + 24) = 0;
              std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
                (__int64)a1,
                v20);
              v20 = *(_QWORD *)v11;
            }
            *(_BYTE *)(v20 + 24) = *(_BYTE *)(v11 + 24);
            *(_BYTE *)(v11 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
            break;
          }
        }
        *(_BYTE *)(v20 + 24) = 0;
LABEL_62:
        v10 = v19;
        v11 = *(_QWORD *)(v11 + 8);
      }
      while ( v19 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v10 + 24) = 1;
  }
  std::_Deallocate(v7, 1uLL, 0x28uLL);
  v22 = a1[1];
  if ( v22 )
    a1[1] = v22 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
