/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@@Z @ 0x1801EDAE8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@0@Z @ 0x1800C2ACC (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowB_ea_1800C2ACC.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ACC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  char *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // cl
  __int64 *v15; // rax
  __int64 v16; // rsi
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *result; // rax
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v21 = a3;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v21);
  v6 = *((_QWORD *)v5 + 2);
  v7 = v21;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 25LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *(_QWORD *)v5;
LABEL_5:
    v8 = *((_QWORD *)v5 + 1);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(char **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(char **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v9 = (_QWORD *)*a1;
    v10 = (_QWORD *)*a1;
    if ( *(char **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v11 = (_QWORD *)v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v6);
      *v9 = v11;
      v9 = (_QWORD *)*a1;
      v10 = (_QWORD *)*a1;
    }
    if ( (char *)v10[2] == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 16);
        v12 = v6;
        if ( !*(_BYTE *)(v13 + 25) )
        {
          do
          {
            v12 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    v14 = v5[24];
    goto LABEL_36;
  }
  v6 = *(_QWORD *)(v21 + 16);
  if ( (char *)v21 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v21;
  *(_QWORD *)v7 = *(_QWORD *)v5;
  if ( v7 == *((_QWORD *)v5 + 2) )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = *((_QWORD *)v5 + 2);
    *(_QWORD *)(*((_QWORD *)v5 + 2) + 8LL) = v7;
  }
  if ( *(char **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v15 = (__int64 *)*((_QWORD *)v5 + 1);
    if ( (char *)*v15 == v5 )
      *v15 = v7;
    else
      v15[2] = v7;
  }
  *(_QWORD *)(v7 + 8) = *((_QWORD *)v5 + 1);
  v14 = *(_BYTE *)(v7 + 24);
  *(_BYTE *)(v7 + 24) = v5[24];
  v5[24] = v14;
LABEL_36:
  if ( v14 == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v17 = *(_BYTE **)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v17 = *(_BYTE **)(v8 + 16);
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
              (__int64)a1,
              v8);
            v17 = *(_BYTE **)(v8 + 16);
          }
          if ( v17[25] )
            goto LABEL_54;
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
              v17[24] = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
                (__int64)a1,
                v17);
              v17 = *(_BYTE **)(v8 + 16);
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v17 = *(_BYTE **)v8;
          }
          if ( v17[25] )
            goto LABEL_54;
          v18 = *((_QWORD *)v17 + 2);
          if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
            {
              *(_BYTE *)(v18 + 24) = 1;
              v17[24] = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
                (__int64)a1,
                (__int64)v17);
              v17 = *(_BYTE **)v8;
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v17[24] = 0;
LABEL_54:
        v6 = v16;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  std::_Deallocate(v5, 1uLL, 0x28uLL);
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  result = a2;
  *a2 = v7;
  return result;
}
