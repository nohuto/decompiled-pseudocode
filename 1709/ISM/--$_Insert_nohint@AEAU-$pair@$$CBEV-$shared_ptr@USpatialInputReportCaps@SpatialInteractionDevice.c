/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007BA4C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007B404 (--$_Insert_hint@AEAU-$pair@$$CBEV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@1@1@Z @ 0x18007B7C8 (--$_Insert_at@AEAU-$pair@$$CBKV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevi.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_nohint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        _QWORD *Block)
{
  __int64 **v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // r9
  char v11; // r8
  unsigned __int8 v12; // cl
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 *i; // rax
  volatile signed __int32 *v18; // rsi
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h] BYREF
  __int64 *v22; // [rsp+60h] [rbp+8h]

  try
  {
    v8 = *a1;
    v9 = (*a1)[1];
    v10 = (__int64 *)*a1;
    v11 = 1;
    if ( !*((_BYTE *)v9 + 25) )
    {
      v12 = *a4;
      do
      {
        v10 = v9;
        v11 = v12 < *((_BYTE *)v9 + 32);
        if ( v12 >= *((_BYTE *)v9 + 32) )
          v9 = (__int64 *)v9[2];
        else
          v9 = (__int64 *)*v9;
      }
      while ( !*((_BYTE *)v9 + 25) );
    }
    v13 = v10;
    v22 = v10;
    if ( v11 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
                           a1,
                           &v20,
                           1,
                           v10,
                           v19,
                           Block);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v13 = (__int64 *)v10[2];
      }
      else
      {
        v16 = (__int64 *)*v10;
        if ( *(_BYTE *)(*v10 + 25) )
        {
          for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
            v13 = i;
          if ( !*((_BYTE *)v13 + 25) )
            v13 = i;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = (__int64 *)v16[2];
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
      v22 = v13;
    }
    if ( *((_BYTE *)v13 + 32) >= *a4 )
    {
      v18 = (volatile signed __int32 *)Block[6];
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
        v13 = v22;
      }
      operator delete(Block);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_at<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
                         a1,
                         &v21,
                         v11,
                         v10,
                         v19,
                         Block);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Destroy_if_not_nil(
      v14,
      Block);
    throw;
  }
  return result;
}
