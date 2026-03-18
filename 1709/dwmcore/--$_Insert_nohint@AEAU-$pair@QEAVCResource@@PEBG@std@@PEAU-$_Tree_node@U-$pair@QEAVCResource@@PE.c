/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x180156834
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@AEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x18015666C (--$_Insert_hint@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PEBG.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@AEAU?$pair@QEAVCResource@@PEBG@1@1@Z @ 0x180156504 (--$_Insert_at@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PEBG@s.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_nohint<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        void *lpMem)
{
  _QWORD *v7; // r9
  char v8; // r10
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  char v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 i; // rax
  int v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = (_QWORD *)*a1;
  v8 = 1;
  v9 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v9 + 25) )
  {
    v7 = v9;
    if ( *a4 >= (unsigned __int64)v9[4] )
    {
      v9 = (__int64 *)v9[2];
      v8 = 0;
    }
    else
    {
      v9 = (__int64 *)*v9;
      v8 = 1;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == *(_QWORD **)*a1 )
    {
      v11 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (_QWORD *)v7[2];
    }
    else
    {
      v13 = *v7;
      if ( *(_BYTE *)(*v7 + 25LL) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v10 = (_QWORD *)i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v10 = (_QWORD *)v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( !*(_BYTE *)(v13 + 25) );
      }
    }
  }
  if ( v10[4] >= *a4 )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v8;
LABEL_9:
  v12 = std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_at<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
          a1,
          &v17,
          v11,
          v7,
          v16,
          lpMem);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
