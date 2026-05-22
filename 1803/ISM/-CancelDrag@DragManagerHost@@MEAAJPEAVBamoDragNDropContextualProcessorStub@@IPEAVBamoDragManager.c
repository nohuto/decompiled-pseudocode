/*
 * XREFs of ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800629C0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A148 (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063454 (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x180064374 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800644D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragManagerHost::CancelDrag(
        DragManagerHost *this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoDragManagerClientProxy *a4)
{
  DragNDropProcessor *v6; // r14
  unsigned __int64 v7; // rdi
  struct BamoDragManagerClientProxy *v8; // rbx
  HMONITOR v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  struct tagPOINT v13; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  struct BamoDragManagerClientProxy *v17; // [rsp+60h] [rbp-10h]
  struct tagPOINT v18; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+40h] BYREF

  v16 = -2LL;
  v6 = (DragNDropProcessor *)*((_QWORD *)this + 7);
  v19 = a3;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)v6 + 13,
    (__int64 **)&v14,
    &v19);
  v7 = v14;
  if ( v14 != *((_QWORD *)v6 + 14) )
  {
    v8 = *(struct BamoDragManagerClientProxy **)(v14 + 48);
    v17 = v8;
    if ( v8 )
      (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v8)(v8);
    if ( v8 == a4 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)v6 + 5,
        (__int64 **)&v14,
        &v19);
      if ( v14 != *((_QWORD *)v6 + 6) )
      {
        v13 = *(struct tagPOINT *)(v14 + 24);
        v9 = *(HMONITOR *)(v14 + 32);
        DragNDropProcessor::UpdateVelocityForPointerId(v6, a3, v13);
        DragNDropProcessor::GetVelocityForPointerId(v6, (unsigned int)&v15);
        v18 = v13;
        v14 = 0LL;
        DragNDropProcessor::HitTest(v6, v13, v9, &v18, &v14, 0LL, 0LL);
        v10 = v14;
        InputETW::DragNDrop::DragEnded(a3, &v13, &v18, v14);
        (*(void (__fastcall **)(_QWORD *, _QWORD, struct tagPOINT *, struct tagPOINT *, unsigned int *, unsigned __int64))(*((_QWORD *)v8 + 1) + 40LL))(
          (_QWORD *)v8 + 1,
          a3,
          &v13,
          &v18,
          &v15,
          v10);
        std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
          (_QWORD *)v6 + 23,
          &v19);
        v11 = *(_QWORD *)(v7 + 48);
        if ( v11 )
        {
          *(_QWORD *)(v7 + 48) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        }
        goto LABEL_10;
      }
    }
    if ( v8 )
LABEL_10:
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  return 0LL;
}
