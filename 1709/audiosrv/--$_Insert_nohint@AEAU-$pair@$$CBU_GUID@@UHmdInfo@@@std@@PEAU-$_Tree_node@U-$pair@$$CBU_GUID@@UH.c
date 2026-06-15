/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x1800C5AE4
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x1800C5778 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmd.c)
 * Callees:
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x1800C5614 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@Z @ 0x1800C7754 (-_Destroy_if_not_nil@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocato.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5)
{
  _QWORD *v8; // r14
  char v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 i; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-68h]
  __int128 Buf2; // [rsp+40h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF

  try
  {
    v8 = (_QWORD *)*a1;
    v11 = *(_QWORD *)(*a1 + 8);
    v10 = *a1;
LABEL_2:
    v9 = 1;
    while ( !*(_BYTE *)(v11 + 25) )
    {
      v10 = v11;
      Buf2 = *(_OWORD *)(v11 + 32);
      Buf1 = *a4;
      if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0 )
      {
        v11 = *(_QWORD *)v11;
        goto LABEL_2;
      }
      v9 = 0;
      v11 = *(_QWORD *)(v11 + 16);
    }
    v12 = v10;
    if ( v9 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
                           a1,
                           &v21,
                           1,
                           (_QWORD *)v10,
                           v18,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v10 + 25) )
      {
        v12 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v15 = *(_QWORD *)v10;
        if ( *(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          for ( i = *(_QWORD *)(v10 + 8); !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v12 = i;
          if ( !*(_BYTE *)(v12 + 25) )
            v12 = i;
        }
        else
        {
          do
          {
            v12 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
        }
      }
    }
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v12 + 32);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_not_nil(
        v17,
        a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
                         a1,
                         &v21,
                         v9,
                         (_QWORD *)v10,
                         v18,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_not_nil(
      v13,
      a5);
    throw;
  }
  return result;
}
