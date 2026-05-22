/*
 * XREFs of ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x180094304
 * Callers:
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@AEAKAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@1@@Z @ 0x180098B0C (--$_Buynode@AEAKAEAV-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@1@@Z @ 0x180098B68 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$shared_ptr@VSpatialInteractionController@SpatialInteraction.c)
 *     ??0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800C3D70 (--0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KKV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialInputControllerCollection::AddDeviceToCache(__int64 a1, unsigned int a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  unsigned int v9; // r15d
  _DWORD *v11; // rbx
  void *Block; // rax
  int v13; // r8d
  volatile signed __int32 *v14; // rbx
  char *v15; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]
  __int64 *v20; // [rsp+60h] [rbp-A8h]
  _DWORD *v21; // [rsp+68h] [rbp-A0h]
  char *v22; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v23)(); // [rsp+80h] [rbp-88h] BYREF
  __int128 v24; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall ***v25)(); // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  unsigned int v28; // [rsp+110h] [rbp+8h]
  unsigned int v29; // [rsp+118h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+18h]
  __int64 v31; // [rsp+128h] [rbp+20h]

  v29 = a2;
  v18 = -2LL;
  v5 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 2816);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 2816));
  v31 = a1 + 2816;
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v28 = MPCInputInfoHelper::m_nextSpectrumId;
  v6 = *(__int64 **)(a1 + 2856);
  v7 = (__int64 *)v6[1];
  v8 = v6;
  v9 = v29;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 8) >= v29 )
    {
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  v19 = *(_QWORD *)(a1 + 2856);
  if ( v8 == v6 || v29 < *((_DWORD *)v8 + 8) )
    v8 = v6;
  v20 = v6;
  if ( v8 != v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
    if ( a1 != -2816 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 2816));
    return 2147500037LL;
  }
  try
  {
    *(_QWORD *)&v17 = a1;
    DWORD2(v17) = v29;
    v11 = operator new(0x458uLL);
    v21 = v11;
    v11[2] = 1;
    v11[3] = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInteractionController>::`vftable';
    v22 = (char *)(v11 + 4);
    if ( v11 != (_DWORD *)-16LL )
    {
      v23 = off_1800D7C58;
      v24 = v17;
      v25 = &v23;
      SpatialInteractionDevices::SpatialInteractionController::SpatialInteractionController(v11 + 4, v9, v28, &v23);
    }
    v16 = v11;
    v15 = (char *)(v11 + 4);
    Block = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Buynode<unsigned long &,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> &>(
                      a1 + 2856,
                      &v29,
                      &v15);
    std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Insert_nohint<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>> &,std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>,void *> *>(
      a1 + 2856,
      (int)&v26,
      v13,
      (_DWORD)Block + 32,
      Block);
    v14 = (volatile signed __int32 *)a3[1];
    a3[1] = v16;
    *a3 = v15;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  if ( a1 != -2816 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 2816));
  return 0LL;
}
