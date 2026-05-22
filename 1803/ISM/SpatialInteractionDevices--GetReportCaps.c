/*
 * XREFs of SpatialInteractionDevices::GetReportCaps @ 0x18009E738
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBE@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBE@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800A0980 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBE@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x1800A09C0 (--$_Insert_hint@AEAU-$pair@$$CBEV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall SpatialInteractionDevices::GetReportCaps(unsigned __int8 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // r8
  __int64 *v4; // rdx
  __int64 *v5; // rax
  char *v7; // rdi
  __int64 *v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rbx
  void *v11; // rax
  volatile signed __int32 *v12; // rsi
  unsigned __int8 v13; // [rsp+70h] [rbp+8h] BYREF
  char *v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+18h]

  v13 = a1;
  v2 = (__int64 *)(a2 + 248);
  v3 = *(__int64 **)(a2 + 248);
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
  if ( v5 == v3 || a1 < *((_BYTE *)v5 + 32) )
    v5 = v3;
  if ( v5 != v3 )
    return (char *)v5[5];
  v7 = (char *)operator new(0xC0uLL);
  v14 = v7;
  *((_DWORD *)v7 + 2) = 1;
  *((_DWORD *)v7 + 3) = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vftable';
  memset_0(v7 + 16, 0, 0xB0uLL);
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  memset_0(v7 + 64, 0, 0x20uLL);
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  memset_0(v7 + 120, 0, 0x20uLL);
  *((_DWORD *)v7 + 38) = 0;
  *(_QWORD *)(v7 + 156) = 0LL;
  *((_QWORD *)v7 + 21) = 0LL;
  *((_QWORD *)v7 + 22) = 0LL;
  *((_QWORD *)v7 + 23) = 0LL;
  v8 = (__int64 *)*v2;
  v9 = *(__int64 **)(*v2 + 8);
  v10 = (__int64 *)*v2;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *((_BYTE *)v9 + 32) >= v13 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( v10 == v8 || v13 < *((_BYTE *)v10 + 32) )
  {
    v14 = (char *)&v13;
    v11 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned char const &>,std::tuple<>>(
                    v2,
                    v8,
                    &v14);
    std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Insert_hint<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>> &,std::_Tree_node<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>,void *> *>(
      (int)v2,
      v11);
    v10 = v15;
  }
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  v10[5] = (__int64)(v7 + 16);
  v12 = (volatile signed __int32 *)v10[6];
  v10[6] = (__int64)v7;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(void *))v7)(v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return v7 + 16;
}
