/*
 * XREFs of ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A2A4
 * Callers:
 *     ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18000C8F0 (-AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@.c)
 *     ?AssociateWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18013DC80 (-AssociateWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@1@_NPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@1@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A1DC (--$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_nohint<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 **v6; // rdi
  __int64 *v7; // r9
  char v8; // r10
  __int64 v9; // rax
  __int64 *v10; // rax
  char v11; // r8
  __int64 *v12; // rax
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v7 = *a1;
  v8 = 1;
  v9 = (*a1)[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v7 = (__int64 *)v9;
    if ( *a4 < *(_QWORD *)(v9 + 32) )
    {
      v9 = *(_QWORD *)v9;
      v8 = 1;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
      v8 = 0;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == (__int64 *)**a1 )
    {
      v11 = 1;
      goto LABEL_5;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (__int64 *)v7[2];
    }
    else
    {
      v14 = *v7;
      if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v10 == *(__int64 **)i; i = *(_QWORD *)(i + 8) )
          v10 = (__int64 *)i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = (__int64 *)i;
      }
      else
      {
        do
        {
          v10 = (__int64 *)v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
  }
  if ( (unsigned __int64)v10[4] >= *a4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v8;
  a1 = v6;
LABEL_5:
  v12 = std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_at<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
          a1,
          &v16,
          v11,
          v7,
          a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
