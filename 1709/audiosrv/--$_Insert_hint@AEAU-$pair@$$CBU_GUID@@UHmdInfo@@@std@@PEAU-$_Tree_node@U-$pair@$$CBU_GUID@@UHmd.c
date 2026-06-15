/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x1800C5778
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1800C5C98 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x1800C5614 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x1800C5AE4 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UH.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_hint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int128 *a4,
        __int64 a5)
{
  __int64 v10; // rsi
  int v11; // r8d
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 *j; // rax
  __int64 *i; // rcx
  __int64 *v17; // rdi
  __int64 *v18; // rax
  __int64 *k; // rax
  int v20; // [rsp+20h] [rbp-68h]
  __int128 Buf2; // [rsp+40h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-38h] BYREF

  if ( !a1[1] )
  {
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
      a1,
      a2,
      1,
      (_QWORD *)*a1,
      v20,
      a5);
    return a2;
  }
  v10 = *a1;
  if ( a3 == *(__int64 **)*a1 )
  {
    Buf2 = *((_OWORD *)a3 + 2);
    Buf1 = *a4;
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == (__int64 *)v10 )
  {
    v12 = *(_QWORD *)(v10 + 16);
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v12 + 32);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)v12,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  Buf1 = *((_OWORD *)a3 + 2);
  Buf2 = *a4;
  if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
    goto LABEL_28;
  v13 = a3;
  if ( *((_BYTE *)a3 + 25) )
  {
    v14 = (__int64 *)a3[2];
  }
  else
  {
    v14 = (__int64 *)*a3;
    if ( *(_BYTE *)(*a3 + 25) )
    {
      for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
        v13 = i;
      v14 = v13;
      if ( !*((_BYTE *)v13 + 25) )
        v14 = i;
    }
    else
    {
      for ( j = (__int64 *)v14[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        v14 = j;
    }
  }
  Buf1 = *a4;
  Buf2 = *((_OWORD *)v14 + 2);
  if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
  {
LABEL_28:
    Buf1 = *a4;
    Buf2 = *((_OWORD *)a3 + 2);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
      goto LABEL_44;
    v17 = a3;
    if ( !*((_BYTE *)a3 + 25) )
    {
      v18 = (__int64 *)a3[2];
      if ( *((_BYTE *)v18 + 25) )
      {
        for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v17 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v17 = k;
        v17 = k;
      }
      else
      {
        do
        {
          v17 = v18;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
    }
    if ( v17 != (__int64 *)v10 )
    {
      Buf1 = *((_OWORD *)v17 + 2);
      Buf2 = *a4;
      if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
      {
LABEL_44:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
                           (_DWORD)a1,
                           (unsigned int)&Buf1,
                           v11,
                           (_DWORD)a4,
                           a5);
        return a2;
      }
    }
    if ( *(_BYTE *)(a3[2] + 25) )
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        0,
        a3,
        v20,
        a5);
    else
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        v17,
        v20,
        a5);
    return a2;
  }
  else
  {
    if ( *(_BYTE *)(v14[2] + 25) )
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        0,
        v14,
        v20,
        a5);
    else
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v20,
        a5);
    return a2;
  }
}
