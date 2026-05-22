/*
 * XREFs of ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006411C
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180064020 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x180063940 (-ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x1800657D0 (--A-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::StartGestureRecognition(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        int a4)
{
  unsigned int v7; // esi
  char *v8; // r14
  struct BamoDragManagerClientProxy *v9; // rbx
  struct BamoDragSourceClientProxy *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  int InteractionContext; // eax
  int v15; // eax
  PointerInfoAdapter *v16; // rax
  PointerInfoAdapter *v17; // r15
  PointerInfoAdapter *v18; // r15
  PointerInfoAdapter *v19; // rax
  __int64 v20; // rcx
  struct BamoDragSourceClientProxy *v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct BamoDragManagerClientProxy *v25; // [rsp+90h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+48h] BYREF

  v26 = a4;
  v23[1] = -2LL;
  v7 = 0;
  v8 = (char *)this + 104;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 13,
    (__int64 **)&v25,
    &v26);
  if ( v25 == *((struct BamoDragManagerClientProxy **)this + 14) )
  {
    v22 = 0LL;
    v25 = 0LL;
    DragNDropProcessor::HitTest(this, a2, a3, 0LL, 0LL, &v22, &v25);
    v9 = v25;
    v10 = v22;
    if ( v22 && v25 )
    {
      v11 = std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[](v8, &v26);
      if ( *(struct BamoDragSourceClientProxy **)(v11 + 16) != v10 )
      {
        (**(void (__fastcall ***)(struct BamoDragSourceClientProxy *))v10)(v10);
        v12 = *(_QWORD *)(v11 + 16);
        *(_QWORD *)(v11 + 16) = v10;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
      if ( *(struct BamoDragManagerClientProxy **)(v11 + 24) != v9 )
      {
        (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v9)(v9);
        v13 = *(_QWORD *)(v11 + 24);
        *(_QWORD *)(v11 + 24) = v9;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      InteractionContext = CreateInteractionContext(v23);
      if ( InteractionContext < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x100,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          (const char *)(unsigned int)InteractionContext);
        __debugbreak();
      }
      if ( v23[0] )
      {
        *(_QWORD *)(v11 + 40) = v23[0];
        v15 = DragNDropProcessor::MessageInfo::ResetAndInitializeInteractionContext((DragNDropProcessor::MessageInfo *)v11);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x104,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\"
                     "dragndropprocessor.cpp",
            (const char *)(unsigned int)v15);
          JUMPOUT(0x180064371LL);
        }
        v16 = (PointerInfoAdapter *)malloc(0x60uLL);
        v17 = v16;
        if ( v16 )
          memset_0(v16, 0, 0x60uLL);
        v23[2] = v17;
        if ( v17 )
          v18 = PointerInfoAdapter::PointerInfoAdapter(v17, (struct IPointerInfoAdapterClient *)v11);
        else
          v18 = 0LL;
        v19 = *(PointerInfoAdapter **)(v11 + 32);
        if ( v19 != v18 )
        {
          v20 = *(_QWORD *)(v11 + 32);
          if ( v18 )
          {
            (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v18 + 8LL))(v18);
            v20 = *(_QWORD *)(v11 + 32);
          }
          *(_QWORD *)(v11 + 32) = v18;
          v19 = v18;
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            v19 = *(PointerInfoAdapter **)(v11 + 32);
          }
        }
        if ( !v19 )
        {
          v7 = -2147024882;
          (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
          (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
          return v7;
        }
      }
      *(_DWORD *)(v11 + 8) = 2;
    }
    if ( v9 )
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v7;
}
