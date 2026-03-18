/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@@Z @ 0x180157FC8
 * Callers:
 *     ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180156BC0 (-FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@0@Z @ 0x180157F00 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$p.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180124E40 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180157EB4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rcx
  __int64 *v6; // r11
  __int64 i; // rbx
  __int64 j; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  char v16; // cl
  __int64 v17; // rbp
  __int64 v18; // r14
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *result; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a3 + 25) )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v5 = (__int64 *)(a3 + 16);
  v6 = (__int64 *)a3;
  i = *(_QWORD *)(a3 + 16);
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && a3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      a3 = i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  if ( *(_BYTE *)(*v6 + 25) )
  {
    v9 = *v5;
LABEL_17:
    v10 = v6[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(__int64 **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( *(__int64 **)v10 == v6 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    if ( *(__int64 **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v11 = v10;
      }
      else
      {
        v12 = *(_QWORD *)v9;
        v11 = v9;
        while ( !*(_BYTE *)(v12 + 25) )
        {
          v11 = v12;
          v12 = *(_QWORD *)v12;
        }
      }
      *(_QWORD *)*a1 = v11;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = v10;
      }
      else
      {
        v14 = *(_QWORD *)(v9 + 16);
        v13 = v9;
        while ( !*(_BYTE *)(v14 + 25) )
        {
          v13 = v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v13;
    }
    goto LABEL_49;
  }
  if ( *(_BYTE *)(*v5 + 25) )
  {
    v9 = *v6;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(i + 16);
  if ( (__int64 *)i == v6 )
    goto LABEL_17;
  *(_QWORD *)(*v6 + 8) = i;
  *(_QWORD *)i = *v6;
  if ( i == *v5 )
  {
    v10 = i;
  }
  else
  {
    v10 = *(_QWORD *)(i + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(i + 16) = *v5;
    *(_QWORD *)(*v5 + 8) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v15 = (__int64 *)v6[1];
    if ( (__int64 *)*v15 == v6 )
      *v15 = i;
    else
      v15[2] = i;
  }
  *(_QWORD *)(i + 8) = v6[1];
  v16 = *(_BYTE *)(i + 24);
  *(_BYTE *)(i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v16;
LABEL_49:
  if ( *((_BYTE *)v6 + 24) == 1 )
  {
    if ( v9 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v17 = v10;
        v18 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        v19 = *(_BYTE **)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          v19 = *(_BYTE **)(v10 + 16);
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            v19 = *(_BYTE **)(v10 + 16);
          }
          if ( v19[25] )
            goto LABEL_67;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
                (__int64)a1,
                v19);
              v19 = *(_BYTE **)(v10 + 16);
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            v19 = *(_BYTE **)v10;
          }
          if ( v19[25] )
            goto LABEL_67;
          v20 = *((_QWORD *)v19 + 2);
          if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
            {
              *(_BYTE *)(v20 + 24) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
                (__int64)a1,
                (__int64)v19);
              v19 = *(_BYTE **)v10;
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            break;
          }
        }
        v19[24] = 0;
LABEL_67:
        v9 = v18;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v17 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  WPF::ProcessHeapImpl::Free(v6);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = a2;
  *a2 = i;
  return result;
}
