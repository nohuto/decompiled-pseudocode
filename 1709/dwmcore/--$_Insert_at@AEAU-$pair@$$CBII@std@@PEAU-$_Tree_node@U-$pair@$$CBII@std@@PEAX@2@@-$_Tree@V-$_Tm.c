/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x180007690
 * Callers:
 *     ??$insert@U?$pair@II@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@$$QEAU?$pair@II@1@@Z @ 0x18000778C (--$insert@U-$pair@II@std@@@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x1801245A8 (--$_Insert_nohint@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@Z @ 0x1800078C0 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180124E40 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
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
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x666666666666665LL )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  v9 = lpMem;
  a1[1] = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = lpMem;
    *(_QWORD *)*a1 = lpMem;
    v10 = *a1;
LABEL_5:
    *(_QWORD *)(v10 + 16) = lpMem;
    goto LABEL_6;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = lpMem;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = lpMem;
    goto LABEL_6;
  }
  a4[2] = lpMem;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_5;
LABEL_6:
  v11 = *((_QWORD *)lpMem + 1);
  v12 = lpMem;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v16 = v12[1];
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( !*(_BYTE *)(v18 + 24) )
      {
LABEL_15:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(v12[1] + 8LL);
        goto LABEL_14;
      }
      if ( v12 == *(_QWORD **)(v16 + 16) )
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
          v7,
          v12[1],
          a3,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
        v7,
        *(_QWORD *)(v12[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v18 + 24) )
        goto LABEL_15;
      if ( v12 == *(_QWORD **)v16 )
        std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
          v7,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(v12[1] + 8LL),
        a3,
        v12);
    }
LABEL_14:
    v11 = v12[1];
  }
  v13 = *v7;
  *a2 = v9;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
