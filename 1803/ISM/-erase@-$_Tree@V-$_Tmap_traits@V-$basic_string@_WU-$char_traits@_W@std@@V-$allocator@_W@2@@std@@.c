/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18009D2A8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x18009D748 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_18009D748.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

unsigned __int64 **__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::erase(
        unsigned __int64 ***a1,
        unsigned __int64 **a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // r8
  unsigned __int64 i; // rax
  __int64 *v10; // r8
  unsigned __int64 *v11; // rdx
  unsigned __int64 **v12; // r10
  unsigned __int64 *v13; // r9
  unsigned __int64 *v14; // rcx
  unsigned __int64 *v15; // rax
  __int64 v16; // rcx
  void **v17; // rax
  char v18; // cl
  bool j; // zf
  unsigned __int64 *v20; // r10
  __int64 *v21; // rcx
  unsigned __int64 **v22; // rcx
  unsigned __int64 **v23; // rax
  unsigned __int64 *v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 *v28; // rax
  __int64 v29; // r9
  unsigned __int64 **v30; // rax
  unsigned __int64 *v31; // rcx
  unsigned __int64 **v32; // rax
  __int64 *v33; // r9
  __int64 **v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 **v36; // rax
  unsigned __int64 **v37; // rax
  unsigned __int64 **result; // rax

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (unsigned __int64 *)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25) && v3 == *(unsigned __int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (unsigned __int64 *)i;
      v3 = (unsigned __int64 *)i;
    }
    else
    {
      v8 = (unsigned __int64 *)*v7;
      v3 = v7;
      if ( !*(_BYTE *)(*v7 + 25) )
      {
        do
        {
          v3 = v8;
          v8 = (unsigned __int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v10 = (__int64 *)a3[2];
  if ( !*(_BYTE *)(*a3 + 25) )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v10 = (__int64 *)*a3;
    }
    else
    {
      v10 = (__int64 *)v3[2];
      if ( v3 != a3 )
      {
        *(_QWORD *)(*a3 + 8) = v3;
        *v3 = *a3;
        if ( v3 == (unsigned __int64 *)a3[2] )
        {
          v11 = v3;
        }
        else
        {
          v11 = (unsigned __int64 *)v3[1];
          if ( !*((_BYTE *)v10 + 25) )
            v10[1] = (__int64)v11;
          *v11 = (unsigned __int64)v10;
          v3[2] = a3[2];
          *(_QWORD *)(a3[2] + 8) = v3;
        }
        if ( (*a1)[1] == a3 )
        {
          (*a1)[1] = v3;
        }
        else
        {
          v17 = (void **)a3[1];
          if ( *v17 == a3 )
            *v17 = v3;
          else
            v17[2] = v3;
        }
        v3[1] = a3[1];
        v18 = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
        *((_BYTE *)a3 + 24) = v18;
        goto LABEL_46;
      }
    }
  }
  v11 = (unsigned __int64 *)a3[1];
  if ( !*((_BYTE *)v10 + 25) )
    v10[1] = (__int64)v11;
  if ( (*a1)[1] == a3 )
  {
    (*a1)[1] = (unsigned __int64 *)v10;
  }
  else if ( (unsigned __int64 *)*v11 == a3 )
  {
    *v11 = (unsigned __int64)v10;
  }
  else
  {
    v11[2] = (unsigned __int64)v10;
  }
  v12 = *a1;
  if ( **a1 == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v13 = v11;
    }
    else
    {
      v14 = (unsigned __int64 *)*v10;
      v13 = (unsigned __int64 *)v10;
      if ( !*(_BYTE *)(*v10 + 25) )
      {
        do
        {
          v13 = v14;
          v14 = (unsigned __int64 *)*v14;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
    *v12 = v13;
  }
  if ( (*a1)[2] == a3 )
  {
    if ( *((_BYTE *)v10 + 25) )
    {
      v15 = v11;
    }
    else
    {
      v16 = v10[2];
      v15 = (unsigned __int64 *)v10;
      while ( !*(_BYTE *)(v16 + 25) )
      {
        v15 = (unsigned __int64 *)v16;
        v16 = *(_QWORD *)(v16 + 16);
      }
    }
    (*a1)[2] = v15;
  }
LABEL_46:
  if ( *((_BYTE *)a3 + 24) != 1 )
    goto LABEL_113;
  for ( j = v10 == (__int64 *)(*a1)[1]; !j; j = v20 == (*a1)[1] )
  {
    v20 = v11;
    if ( *((_BYTE *)v10 + 24) != 1 )
      break;
    v21 = (__int64 *)*v11;
    if ( v10 == (__int64 *)*v11 )
    {
      v21 = (__int64 *)v11[2];
      if ( !*((_BYTE *)v21 + 24) )
      {
        *((_BYTE *)v21 + 24) = 1;
        v22 = (unsigned __int64 **)v11[2];
        *((_BYTE *)v11 + 24) = 0;
        v11[2] = (unsigned __int64)*v22;
        if ( !*((_BYTE *)*v22 + 25) )
          (*v22)[1] = (unsigned __int64)v11;
        v22[1] = (unsigned __int64 *)v11[1];
        if ( v11 == (*a1)[1] )
        {
          (*a1)[1] = (unsigned __int64 *)v22;
        }
        else
        {
          v23 = (unsigned __int64 **)v11[1];
          if ( v11 == *v23 )
            *v23 = (unsigned __int64 *)v22;
          else
            v23[2] = (unsigned __int64 *)v22;
        }
        *v22 = v11;
        v11[1] = (unsigned __int64)v22;
        v21 = (__int64 *)v11[2];
      }
      if ( !*((_BYTE *)v21 + 25) )
      {
        if ( *(_BYTE *)(*v21 + 24) != 1 || *(_BYTE *)(v21[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v21[2] + 24) == 1 )
          {
            *(_BYTE *)(*v21 + 24) = 1;
            v24 = (unsigned __int64 *)*v21;
            *((_BYTE *)v21 + 24) = 0;
            *v21 = v24[2];
            v25 = v24[2];
            if ( !*(_BYTE *)(v25 + 25) )
              *(_QWORD *)(v25 + 8) = v21;
            v24[1] = v21[1];
            if ( v21 == (__int64 *)(*a1)[1] )
            {
              (*a1)[1] = v24;
            }
            else
            {
              v30 = (unsigned __int64 **)v21[1];
              if ( v21 == (__int64 *)v30[2] )
                v30[2] = v24;
              else
                *v30 = v24;
            }
            v24[2] = (unsigned __int64)v21;
            v21[1] = (__int64)v24;
            v21 = (__int64 *)v11[2];
          }
          *((_BYTE *)v21 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(v21[2] + 24) = 1;
          v31 = (unsigned __int64 *)v11[2];
          v11[2] = *v31;
          if ( !*(_BYTE *)(*v31 + 25) )
            *(_QWORD *)(*v31 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == (*a1)[1] )
          {
            (*a1)[1] = v31;
          }
          else
          {
            v32 = (unsigned __int64 **)v11[1];
            if ( v11 == *v32 )
              *v32 = v31;
            else
              v32[2] = v31;
          }
          *v31 = (unsigned __int64)v11;
LABEL_111:
          v11[1] = (unsigned __int64)v31;
          break;
        }
LABEL_80:
        *((_BYTE *)v21 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v21 + 24) )
      {
        *((_BYTE *)v21 + 24) = 1;
        v26 = *v11;
        *((_BYTE *)v11 + 24) = 0;
        *v11 = *(_QWORD *)(v26 + 16);
        v27 = *(_QWORD *)(v26 + 16);
        if ( !*(_BYTE *)(v27 + 25) )
          *(_QWORD *)(v27 + 8) = v11;
        *(_QWORD *)(v26 + 8) = v11[1];
        if ( v11 == (*a1)[1] )
        {
          (*a1)[1] = (unsigned __int64 *)v26;
        }
        else
        {
          v28 = (unsigned __int64 *)v11[1];
          if ( v11 == (unsigned __int64 *)v28[2] )
            v28[2] = v26;
          else
            *v28 = v26;
        }
        *(_QWORD *)(v26 + 16) = v11;
        v11[1] = v26;
        v21 = (__int64 *)*v11;
      }
      if ( !*((_BYTE *)v21 + 25) )
      {
        v29 = v21[2];
        if ( *(_BYTE *)(v29 + 24) != 1 || *(_BYTE *)(*v21 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v21 + 24) == 1 )
          {
            *(_BYTE *)(v29 + 24) = 1;
            v33 = (__int64 *)v21[2];
            *((_BYTE *)v21 + 24) = 0;
            v21[2] = *v33;
            if ( !*(_BYTE *)(*v33 + 25) )
              *(_QWORD *)(*v33 + 8) = v21;
            v33[1] = v21[1];
            if ( v21 == (__int64 *)(*a1)[1] )
            {
              (*a1)[1] = (unsigned __int64 *)v33;
            }
            else
            {
              v34 = (__int64 **)v21[1];
              if ( v21 == *v34 )
                *v34 = v33;
              else
                v34[2] = v33;
            }
            *v33 = (__int64)v21;
            v21[1] = (__int64)v33;
            v21 = (__int64 *)*v11;
          }
          *((_BYTE *)v21 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*v21 + 24) = 1;
          v31 = (unsigned __int64 *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16);
          v35 = v31[2];
          if ( !*(_BYTE *)(v35 + 25) )
            *(_QWORD *)(v35 + 8) = v11;
          v31[1] = v11[1];
          if ( v11 == (*a1)[1] )
          {
            (*a1)[1] = v31;
          }
          else
          {
            v36 = (unsigned __int64 **)v11[1];
            if ( v11 == v36[2] )
              v36[2] = v31;
            else
              *v36 = v31;
          }
          v31[2] = (unsigned __int64)v11;
          goto LABEL_111;
        }
        goto LABEL_80;
      }
    }
    v10 = (__int64 *)v11;
    v11 = (unsigned __int64 *)v11[1];
  }
  *((_BYTE *)v10 + 24) = 1;
LABEL_113:
  std::wstring::_Tidy_deallocate(a3 + 8);
  std::wstring::_Tidy_deallocate(a3 + 4);
  operator delete(a3);
  v37 = a1[1];
  if ( v37 )
    a1[1] = (unsigned __int64 **)((char *)v37 - 1);
  result = a2;
  *a2 = v3;
  return result;
}
