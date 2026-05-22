/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180064C08
 * Callers:
 *     ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180062990 (-StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBU_GUID@@PEAVBamoD.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A148 (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x1800631CC (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063598 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x180064374 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800644D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x1800657D0 (--A-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct _GUID *a3,
        struct BamoDragManagerClientProxy *a4)
{
  unsigned int v6; // r15d
  bool v8; // r14
  unsigned __int64 v9; // rbx
  char *v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  struct tagPOINT v17; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v18; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  struct BamoDragManagerClientProxy *v21; // [rsp+70h] [rbp-10h]

  v20 = -2LL;
  v6 = a2;
  v15 = a2;
  v21 = a4;
  if ( a4 )
  {
    (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))a4)(a4);
    v6 = v15;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 13,
    (__int64 **)&v16,
    &v15);
  v8 = v16 != *((_QWORD *)this + 14);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 5,
    (__int64 **)&v16,
    &v15);
  v9 = v16;
  if ( !v8 )
    v8 = v16 == *((_QWORD *)this + 6);
  v18 = *(struct tagPOINT *)(v16 + 24);
  v17 = v18;
  v16 = 0LL;
  DragNDropProcessor::UpdateVelocityForPointerId(this, v6, v18);
  DragNDropProcessor::GetVelocityForPointerId(this, &v19, v15);
  v10 = (char *)a4 + 8;
  if ( v8 )
  {
    InputETW::DragNDrop::DragCancelled(v15, &v18, &v17, 0LL);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, unsigned int *, _QWORD))(*(_QWORD *)v10 + 48LL))(
      (char *)a4 + 8,
      v15,
      &v18,
      &v17,
      &v19,
      0LL);
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
      (_QWORD *)this + 23,
      &v15);
  }
  else
  {
    DragNDropProcessor::HitTest(this, v18, *(HMONITOR *)(v9 + 32), &v17, &v16, 0LL, 0LL);
    v11 = v16;
    InputETW::DragNDrop::DragStarted(v15, &v18, &v17, v16);
    if ( (*(int (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, unsigned int *, unsigned __int64, struct _GUID *))(*(_QWORD *)v10 + 24LL))(
           (char *)a4 + 8,
           v15,
           &v18,
           &v17,
           &v19,
           v11,
           a3) >= 0 )
    {
      v12 = std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[]((char *)this + 104, &v15);
      if ( *(struct BamoDragManagerClientProxy **)(v12 + 24) != a4 )
      {
        (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))a4)(a4);
        v13 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 24) = a4;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      *(_DWORD *)(v12 + 8) = 4;
    }
  }
  (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  return 0LL;
}
