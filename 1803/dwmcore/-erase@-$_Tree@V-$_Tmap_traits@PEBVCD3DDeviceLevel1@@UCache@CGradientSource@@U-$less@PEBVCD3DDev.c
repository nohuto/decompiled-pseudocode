/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x1801900B0
 * Callers:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801BDA20 (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ACC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        char *a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  char v14; // cl
  __int64 *v15; // rax
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *result; // rax
  char *v21; // [rsp+50h] [rbp+18h] BYREF

  v21 = a3;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++((__int64 *)&v21);
  v8 = *((_QWORD *)a3 + 2);
  v9 = (__int64)v21;
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(v8 + 25) )
  {
    v8 = *(_QWORD *)a3;
LABEL_5:
    v10 = *((_QWORD *)a3 + 1);
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v10;
    if ( *(char **)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v8;
    }
    else if ( *(char **)v10 == a3 )
    {
      *(_QWORD *)v10 = v8;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v8;
    }
    v7 = (_QWORD *)*a1;
    v11 = (_QWORD *)*a1;
    if ( *(char **)*a1 == a3 )
    {
      if ( *(_BYTE *)(v8 + 25) )
        v12 = (_QWORD *)v10;
      else
        v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v8);
      *v7 = v12;
      v7 = (_QWORD *)*a1;
      v11 = (_QWORD *)*a1;
    }
    if ( (char *)v11[2] == a3 )
    {
      if ( *(_BYTE *)(v8 + 25) )
      {
        v13 = v10;
      }
      else
      {
        v6 = *(_QWORD *)(v8 + 16);
        v13 = v8;
        if ( !*(_BYTE *)(v6 + 25) )
        {
          do
          {
            v13 = v6;
            v6 = *(_QWORD *)(v6 + 16);
          }
          while ( !*(_BYTE *)(v6 + 25) );
          v11 = v7;
        }
      }
      v11[2] = v13;
    }
    v14 = a3[24];
    goto LABEL_36;
  }
  v8 = *((_QWORD *)v21 + 2);
  if ( v21 == a3 )
    goto LABEL_5;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v21;
  *(_QWORD *)v9 = *(_QWORD *)a3;
  if ( v9 == *((_QWORD *)a3 + 2) )
  {
    v10 = v9;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v10;
    *(_QWORD *)v10 = v8;
    *(_QWORD *)(v9 + 16) = *((_QWORD *)a3 + 2);
    *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL) = v9;
  }
  if ( *(char **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
  }
  else
  {
    v15 = (__int64 *)*((_QWORD *)a3 + 1);
    if ( (char *)*v15 == a3 )
      *v15 = v9;
    else
      v15[2] = v9;
  }
  *(_QWORD *)(v9 + 8) = *((_QWORD *)a3 + 1);
  v14 = *(_BYTE *)(v9 + 24);
  *(_BYTE *)(v9 + 24) = a3[24];
  a3[24] = v14;
LABEL_36:
  if ( v14 == 1 )
  {
    if ( v8 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v10;
        if ( *(_BYTE *)(v8 + 24) != 1 )
          break;
        v6 = *(_QWORD *)v10;
        if ( v8 == *(_QWORD *)v10 )
        {
          v6 = *(_QWORD *)(v10 + 16);
          if ( !*(_BYTE *)(v6 + 24) )
          {
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            v6 = *(_QWORD *)(v10 + 16);
          }
          if ( *(_BYTE *)(v6 + 25) )
            goto LABEL_54;
          if ( *(_BYTE *)(*(_QWORD *)v6 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v6 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v6 + 24LL) = 1;
              *(_BYTE *)(v6 + 24) = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
              v6 = *(_QWORD *)(v10 + 16);
            }
            *(_BYTE *)(v6 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v6 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v6 + 24) )
          {
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
            v6 = *(_QWORD *)v10;
          }
          if ( *(_BYTE *)(v6 + 25) )
            goto LABEL_54;
          v17 = *(_QWORD *)(v6 + 16);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v6 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v6 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              *(_BYTE *)(v6 + 24) = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
                (__int64)a1,
                v6);
              v6 = *(_QWORD *)v10;
            }
            *(_BYTE *)(v6 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v6 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
            break;
          }
        }
        *(_BYTE *)(v6 + 24) = 0;
LABEL_54:
        v8 = v16;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v8 + 24) = 1;
  }
  v18 = *((_QWORD *)a3 + 6);
  if ( v18 )
  {
    *((_QWORD *)a3 + 6) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v18 + 16LL))(v18, v6, v7, v10);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)a3 + 5);
  std::_Deallocate(a3, 1uLL, 0x38uLL);
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  result = a2;
  *a2 = v9;
  return result;
}
