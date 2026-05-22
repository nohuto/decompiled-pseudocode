/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007B404
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x180079290 (SpatialInteractionDevices--GetReportCaps.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@1@1@Z @ 0x18007B7C8 (--$_Insert_at@AEAU-$pair@$$CBKV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevi.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007BA4C (--$_Insert_nohint@AEAU-$pair@$$CBEV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevice.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_hint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
        __int64 ***a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int8 *a4,
        void *Block)
{
  int v7; // r10d
  __int64 **v9; // rcx
  int v10; // r9d
  __int64 *v11; // r9
  unsigned __int8 v12; // r11
  bool v13; // cf
  __int64 *v14; // rax
  __int64 *v15; // r9
  __int64 *j; // rax
  __int64 *i; // rdx
  int v18; // r9d
  __int64 *v19; // r9
  __int64 *v20; // rax
  __int64 *k; // rax
  int v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = (int)a1;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v9 = *a1;
  if ( a3 == *v9 )
  {
    if ( *a4 < *((_BYTE *)a3 + 32) )
    {
      v10 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
        v7,
        (_DWORD)a2,
        (_DWORD)a3,
        v10);
      return a2;
    }
    goto LABEL_45;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v11 = v9[2];
    if ( *((_BYTE *)v11 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)v11);
      return a2;
    }
    goto LABEL_45;
  }
  v12 = *a4;
  v13 = *((_BYTE *)a3 + 32) < *a4;
  if ( *((_BYTE *)a3 + 32) > *a4 )
  {
    v14 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v15 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
          v14 = i;
        v15 = v14;
        if ( !*((_BYTE *)v14 + 25) )
          v15 = i;
      }
      else
      {
        for ( j = (__int64 *)v15[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          v15 = j;
      }
    }
    if ( *((_BYTE *)v15 + 32) < v12 )
    {
      if ( *(_BYTE *)(v15[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
          v7,
          (_DWORD)a2,
          0,
          (_DWORD)v15);
      }
      else
      {
        v18 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
          v7,
          (_DWORD)a2,
          (_DWORD)a3,
          v18);
      }
      return a2;
    }
    v13 = *((_BYTE *)a3 + 32) < v12;
  }
  if ( !v13 )
    goto LABEL_45;
  v19 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v20 = (__int64 *)a3[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v19 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v19 = k;
      v19 = k;
    }
    else
    {
      do
      {
        v19 = v20;
        v20 = (__int64 *)*v20;
      }
      while ( !*((_BYTE *)v20 + 25) );
    }
  }
  if ( v19 != (__int64 *)v9 && v12 >= *((_BYTE *)v19 + 32) )
  {
LABEL_45:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_nohint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
                       v7,
                       (int)&v22,
                       (int)a3,
                       (int)a4,
                       Block);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
      v7,
      (_DWORD)a2,
      0,
      (_DWORD)a3);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
      v7,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
