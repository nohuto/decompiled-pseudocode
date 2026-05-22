/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800CC084
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x1800CB17C (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@PropertyC.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::erase(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  char *v3; // rbx
  __int64 v7; // rax
  char *j; // r8
  __int64 i; // rax
  __int64 **v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // r10
  _QWORD *v13; // r9
  __int64 *k; // rcx
  __int64 **v15; // rax
  __int64 *m; // rcx
  void **v17; // rax
  char v18; // cl
  bool n; // zf
  __int64 **v20; // r10
  char *v21; // rcx
  __int64 **v22; // rcx
  __int64 **v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // rcx
  __int64 **v32; // rax
  char **v33; // r9
  char **v34; // rax
  __int64 v35; // rax
  __int64 **v36; // rax
  char *v37; // rdi
  __int64 v38; // rax

  v3 = a3;
  if ( !a3[25] )
  {
    v7 = *((_QWORD *)a3 + 2);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *((_QWORD *)a3 + 1); !*(_BYTE *)(i + 25) && v3 == *(char **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (char *)i;
      v3 = (char *)i;
    }
    else
    {
      v3 = (char *)*((_QWORD *)a3 + 2);
      for ( j = *(char **)v7; !j[25]; j = *(char **)j )
        v3 = j;
    }
  }
  v10 = (__int64 **)*((_QWORD *)a3 + 2);
  if ( !*(_BYTE *)(*(_QWORD *)a3 + 25LL) )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v10 = *(__int64 ***)a3;
    }
    else
    {
      v10 = (__int64 **)*((_QWORD *)v3 + 2);
      if ( v3 != a3 )
      {
        *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v3;
        *(_QWORD *)v3 = *(_QWORD *)a3;
        if ( v3 == *((char **)a3 + 2) )
        {
          v11 = (__int64 *)v3;
        }
        else
        {
          v11 = (__int64 *)*((_QWORD *)v3 + 1);
          if ( !*((_BYTE *)v10 + 25) )
            v10[1] = v11;
          *v11 = (__int64)v10;
          *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
          *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL) = v3;
        }
        if ( *(char **)(*a1 + 8LL) == a3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v3;
        }
        else
        {
          v17 = (void **)*((_QWORD *)a3 + 1);
          if ( *v17 == a3 )
            *v17 = v3;
          else
            v17[2] = v3;
        }
        *((_QWORD *)v3 + 1) = *((_QWORD *)a3 + 1);
        v18 = v3[24];
        v3[24] = a3[24];
        a3[24] = v18;
        goto LABEL_46;
      }
    }
  }
  v11 = (__int64 *)*((_QWORD *)a3 + 1);
  if ( !*((_BYTE *)v10 + 25) )
    v10[1] = v11;
  if ( *(char **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
  }
  else if ( (char *)*v11 == a3 )
  {
    *v11 = (__int64)v10;
  }
  else
  {
    v11[2] = (__int64)v10;
  }
  v12 = (_QWORD *)*a1;
  if ( *(char **)*a1 == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v13 = v11;
    }
    else
    {
      v13 = v10;
      for ( k = *v10; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v13 = k;
    }
    *v12 = v13;
  }
  if ( *(char **)(*a1 + 16LL) == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v15 = (__int64 **)v11;
    }
    else
    {
      v15 = v10;
      for ( m = v10[2]; !*((_BYTE *)m + 25); m = (__int64 *)m[2] )
        v15 = (__int64 **)m;
    }
    *(_QWORD *)(*a1 + 16LL) = v15;
  }
LABEL_46:
  if ( a3[24] != 1 )
    goto LABEL_113;
  for ( n = v10 == *(__int64 ***)(*a1 + 8LL); !n; n = v20 == *(__int64 ***)(*a1 + 8LL) )
  {
    v20 = (__int64 **)v11;
    if ( *((_BYTE *)v10 + 24) != 1 )
      break;
    v21 = (char *)*v11;
    if ( v10 == (__int64 **)*v11 )
    {
      v21 = (char *)v11[2];
      if ( !v21[24] )
      {
        v21[24] = 1;
        *((_BYTE *)v11 + 24) = 0;
        v22 = (__int64 **)v11[2];
        v11[2] = (__int64)*v22;
        if ( !*((_BYTE *)*v22 + 25) )
          (*v22)[1] = (__int64)v11;
        v22[1] = (__int64 *)v11[1];
        if ( v11 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v22;
        }
        else
        {
          v23 = (__int64 **)v11[1];
          if ( v11 == *v23 )
            *v23 = (__int64 *)v22;
          else
            v23[2] = (__int64 *)v22;
        }
        *v22 = v11;
        v11[1] = (__int64)v22;
        v21 = (char *)v11[2];
      }
      if ( !v21[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
            v21[24] = 0;
            v24 = *(_QWORD *)v21;
            *(_QWORD *)v21 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
            v25 = *(_QWORD *)(v24 + 16);
            if ( !*(_BYTE *)(v25 + 25) )
              *(_QWORD *)(v25 + 8) = v21;
            *(_QWORD *)(v24 + 8) = *((_QWORD *)v21 + 1);
            if ( v21 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v24;
            }
            else
            {
              v30 = (_QWORD *)*((_QWORD *)v21 + 1);
              if ( v21 == (char *)v30[2] )
                v30[2] = v24;
              else
                *v30 = v24;
            }
            *(_QWORD *)(v24 + 16) = v21;
            *((_QWORD *)v21 + 1) = v24;
            v21 = (char *)v11[2];
          }
          v21[24] = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) = 1;
          v31 = (__int64 *)v11[2];
          v11[2] = *v31;
          if ( !*(_BYTE *)(*v31 + 25) )
            *(_QWORD *)(*v31 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v31;
          }
          else
          {
            v32 = (__int64 **)v11[1];
            if ( v11 == *v32 )
              *v32 = v31;
            else
              v32[2] = v31;
          }
          *v31 = (__int64)v11;
LABEL_111:
          v11[1] = (__int64)v31;
          break;
        }
LABEL_80:
        v21[24] = 0;
      }
    }
    else
    {
      if ( !v21[24] )
      {
        v21[24] = 1;
        *((_BYTE *)v11 + 24) = 0;
        v26 = *v11;
        *v11 = *(_QWORD *)(*v11 + 16);
        v27 = *(_QWORD *)(v26 + 16);
        if ( !*(_BYTE *)(v27 + 25) )
          *(_QWORD *)(v27 + 8) = v11;
        *(_QWORD *)(v26 + 8) = v11[1];
        if ( v11 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v26;
        }
        else
        {
          v28 = (_QWORD *)v11[1];
          if ( v11 == (__int64 *)v28[2] )
            v28[2] = v26;
          else
            *v28 = v26;
        }
        *(_QWORD *)(v26 + 16) = v11;
        v11[1] = v26;
        v21 = (char *)*v11;
      }
      if ( !v21[25] )
      {
        v29 = *((_QWORD *)v21 + 2);
        if ( *(_BYTE *)(v29 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) == 1 )
          {
            *(_BYTE *)(v29 + 24) = 1;
            v21[24] = 0;
            v33 = (char **)*((_QWORD *)v21 + 2);
            *((_QWORD *)v21 + 2) = *v33;
            if ( !(*v33)[25] )
              *((_QWORD *)*v33 + 1) = v21;
            v33[1] = (char *)*((_QWORD *)v21 + 1);
            if ( v21 == *(char **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v33;
            }
            else
            {
              v34 = (char **)*((_QWORD *)v21 + 1);
              if ( v21 == *v34 )
                *v34 = (char *)v33;
              else
                v34[2] = (char *)v33;
            }
            *v33 = v21;
            *((_QWORD *)v21 + 1) = v33;
            v21 = (char *)*v11;
          }
          v21[24] = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
          v31 = (__int64 *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16);
          v35 = v31[2];
          if ( !*(_BYTE *)(v35 + 25) )
            *(_QWORD *)(v35 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v31;
          }
          else
          {
            v36 = (__int64 **)v11[1];
            if ( v11 == v36[2] )
              v36[2] = v31;
            else
              *v36 = v31;
          }
          v31[2] = (__int64)v11;
          goto LABEL_111;
        }
        goto LABEL_80;
      }
    }
    v11 = (__int64 *)v11[1];
    v10 = v20;
  }
  *((_BYTE *)v10 + 24) = 1;
LABEL_113:
  v37 = a3 + 48;
  std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Erase(
    (__int64)(a3 + 48),
    *(__int64 **)(*((_QWORD *)a3 + 6) + 8LL));
  *(_QWORD *)(*(_QWORD *)v37 + 8LL) = *(_QWORD *)v37;
  **(_QWORD **)v37 = *(_QWORD *)v37;
  *(_QWORD *)(*(_QWORD *)v37 + 16LL) = *(_QWORD *)v37;
  *((_QWORD *)a3 + 7) = 0LL;
  operator delete(*((void **)a3 + 6));
  operator delete(a3);
  v38 = a1[1];
  if ( v38 )
    a1[1] = v38 - 1;
  *a2 = v3;
  return a2;
}
