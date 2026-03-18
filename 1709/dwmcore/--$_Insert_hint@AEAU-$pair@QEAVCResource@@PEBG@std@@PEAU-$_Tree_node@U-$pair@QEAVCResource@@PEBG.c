/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@AEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x18015666C
 * Callers:
 *     ??$insert@U?$pair@PEAVCResource@@PEBG@std@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@$$QEAU?$pair@PEAVCResource@@PEBG@1@@Z @ 0x18015691C (--$insert@U-$pair@PEAVCResource@@PEBG@std@@@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@P.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@AEAU?$pair@QEAVCResource@@PEBG@1@1@Z @ 0x180156504 (--$_Insert_at@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PEBG@s.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAVCResource@@PEBG@std@@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAVCResource@@PEBG@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@1@@Z @ 0x180156834 (--$_Insert_nohint@AEAU-$pair@QEAVCResource@@PEBG@std@@PEAU-$_Tree_node@U-$pair@QEAVCResource@@PE.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_hint<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        void *a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // r9
  char v8; // r8
  _QWORD *v9; // r10
  unsigned __int64 v10; // r11
  bool v11; // cf
  __int64 v12; // rax
  __int64 j; // rax
  __int64 i; // rdx
  __int64 *v15; // rax
  __int64 k; // rax
  int v18; // [rsp+20h] [rbp-28h]
  void *lpMem; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h] BYREF

  v6 = a2;
  if ( a1[1] )
  {
    v9 = (_QWORD *)*a1;
    if ( a3 == *(_QWORD *)*a1 )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        lpMem = a5;
LABEL_8:
        v7 = (_QWORD *)a3;
        goto LABEL_3;
      }
LABEL_45:
      *v6 = *(_QWORD *)std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_nohint<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
                         (int)a1,
                         (int)&v20,
                         a3,
                         (int)a4,
                         a5);
      return v6;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v7 = (_QWORD *)v9[2];
      if ( v7[4] >= *a4 )
        goto LABEL_45;
      lpMem = a5;
    }
    else
    {
      v10 = *a4;
      v11 = *(_QWORD *)(a3 + 32) < *a4;
      if ( *(_QWORD *)(a3 + 32) > *a4 )
      {
        v12 = a3;
        if ( *(_BYTE *)(a3 + 25) )
        {
          v7 = *(_QWORD **)(a3 + 16);
        }
        else
        {
          v7 = *(_QWORD **)a3;
          if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
          {
            for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
              v12 = i;
            v7 = (_QWORD *)v12;
            if ( !*(_BYTE *)(v12 + 25) )
              v7 = (_QWORD *)i;
          }
          else
          {
            for ( j = v7[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
              v7 = (_QWORD *)j;
          }
        }
        if ( v7[4] < v10 )
        {
          a2 = v6;
          lpMem = a5;
          if ( !*(_BYTE *)(v7[2] + 25LL) )
            goto LABEL_8;
          goto LABEL_12;
        }
        v11 = *(_QWORD *)(a3 + 32) < v10;
      }
      if ( !v11 )
        goto LABEL_45;
      v7 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v15 = *(__int64 **)(a3 + 16);
        if ( *((_BYTE *)v15 + 25) )
        {
          for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v7 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
            v7 = (_QWORD *)k;
          v7 = (_QWORD *)k;
        }
        else
        {
          do
          {
            v7 = v15;
            v15 = (__int64 *)*v15;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
      if ( v7 != v9 && v10 >= v7[4] )
        goto LABEL_45;
      a2 = v6;
      lpMem = a5;
      if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        goto LABEL_3;
      v7 = (_QWORD *)a3;
    }
LABEL_12:
    v8 = 0;
    goto LABEL_4;
  }
  v7 = (_QWORD *)*a1;
  lpMem = a5;
LABEL_3:
  v8 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Insert_at<std::pair<CResource * const,unsigned short const *> &,std::_Tree_node<std::pair<CResource * const,unsigned short const *>,void *> *>(
    a1,
    a2,
    v8,
    v7,
    v18,
    lpMem);
  return v6;
}
