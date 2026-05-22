/*
 * XREFs of SpatialInteractionDevices::GetReportCaps @ 0x180079290
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40 (--0-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA?AV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@0@XZ @ 0x18007A500 (--$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA-AV-$shared_ptr@USp.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBE@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBE@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18007B3BC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBE@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x18007B404 (--$_Insert_hint@AEAU-$pair@$$CBEV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetReportCaps(unsigned __int8 a1, __int64 a2)
{
  __int64 **v2; // rdi
  __int64 *v3; // rdx
  __int64 *v4; // r8
  __int64 *v5; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rdx
  void *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+60h] [rbp-20h]
  _BYTE v18[8]; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v19; // [rsp+70h] [rbp-10h]
  unsigned __int8 v20; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int8 *v21; // [rsp+A8h] [rbp+28h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp+30h]
  __int64 *v23; // [rsp+B8h] [rbp+38h]

  v20 = a1;
  v2 = (__int64 **)(a2 + 288);
  v3 = *(__int64 **)(a2 + 288);
  v4 = (__int64 *)v3[1];
  v5 = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_BYTE *)v4 + 32) >= a1 )
    {
      v5 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  v23 = v3;
  if ( v5 == v3 || a1 < *((_BYTE *)v5 + 32) )
    v5 = v3;
  if ( v5 != v3 )
    return v5[5];
  std::make_shared<SpatialInteractionDevices::SpatialInputReportCaps,>(&v16);
  v7 = (__int64 *)(*v2)[1];
  v8 = *v2;
  LOBYTE(v9) = v20;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_BYTE *)v7 + 32) >= v20 )
    {
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v8 == *v2 || v20 < *((_BYTE *)v8 + 32) )
  {
    v21 = &v20;
    v10 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned char const &>,std::tuple<>>(
                    v2,
                    v9,
                    &v21);
    std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_hint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
      (int)v2,
      v10);
    v8 = v22;
  }
  v11 = (__int64 *)std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
                     v18,
                     &v16);
  v12 = v11[1];
  v11[1] = v8[6];
  v8[6] = v12;
  v13 = *v11;
  *v11 = v8[5];
  v8[5] = v13;
  v14 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
  {
    v15 = v17;
    (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return v16;
}
