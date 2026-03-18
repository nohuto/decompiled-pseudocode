/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@AEAU?$pair@QEAVCResource@@PEBG@1@1@Z @ 0x180156504
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@AEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x18015666C (--$_Insert_hint@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PEBG.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x180156834 (--$_Insert_nohint@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PE.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180124E40 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180157EB4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_at<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        int a5,
        void *lpMem)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  void *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x555555555555554LL )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  }
  v9 = lpMem;
  a1[1] = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = lpMem;
    *(_QWORD *)*a1 = lpMem;
    v10 = *a1;
LABEL_9:
    *(_QWORD *)(v10 + 16) = lpMem;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = lpMem;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = lpMem;
    goto LABEL_10;
  }
  a4[2] = lpMem;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_9;
LABEL_10:
  v11 = *((_QWORD *)lpMem + 1);
  v12 = lpMem;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = v12[1];
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v15 = v14[2];
      if ( !*(_BYTE *)(v15 + 24) )
        goto LABEL_17;
      if ( v12 == *(_QWORD **)(v13 + 16) )
        std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
          v7,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
        (__int64)v7,
        *(_QWORD **)(v12[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v15 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(v12[1] + 8LL);
        goto LABEL_21;
      }
      if ( v12 == *(_QWORD **)v13 )
        std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
          (__int64)v7,
          (_QWORD *)v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(v12[1] + 8LL));
    }
LABEL_21:
    v11 = v12[1];
  }
  v16 = *v7;
  *a2 = v9;
  v17 = *(_QWORD *)(v16 + 8);
  result = a2;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
