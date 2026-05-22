/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180065138
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180062B40 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragMan.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x1800637F0 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800644D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180065378 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ??A?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@AEBK@Z @ 0x180065558 (--A-$unordered_map@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18008F23C (-CreateDataSource@AnimationDataProvider@@QEAA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18008F54C (-GetDataSourceId@AnimationDataProvider@@SA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  unsigned int v5; // esi
  struct tagPOINTF v6; // rdi
  __int64 v8; // rax
  FLOAT v9; // ebx
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct tagPOINTF *v15; // r14
  struct tagPOINTF v16; // rcx
  struct tagPOINTF v17; // rbx
  struct tagPOINTF v18; // rbx
  __int64 DataSourceId; // r15
  struct tagPOINT *v20; // r14
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct tagPOINTF v22; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+48h] BYREF
  struct tagPOINTF v24; // [rsp+98h] [rbp+58h]

  v23 = a2;
  v5 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 13,
    (__int64 **)&v22,
    &v23);
  v6 = v22;
  if ( v22 != *((_QWORD *)this + 14) )
  {
    if ( *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v22 + 48LL) != a3 )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)&v22 + 48LL) )
    {
      v8 = *((_QWORD *)this + 41);
      v9 = *(float *)(v8 + 40);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 24LL) + 16LL);
      v22.y = *(FLOAT *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 28);
      v22.x = v9;
      v12 = (__int64)v22;
      if ( !*(_QWORD *)&v22 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2D5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          v11);
        JUMPOUT(0x180065374LL);
      }
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 48LL) + 32LL) + 16LL);
      v14 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13) + 32);
      if ( *std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
              (_QWORD *)this + 31,
              (__int64 **)&v22,
              &v23) == *((__int64 **)this + 32) )
      {
        AnimationDataProvider::CreateDataSource((char *)this + 312, &v22, v14);
        v15 = (struct tagPOINTF *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::operator[](
                                    (char *)this + 248,
                                    &v23);
        v16 = *v15;
        v17 = v22;
        if ( *v15 != v22 )
        {
          if ( v22 )
          {
            (***(void (__fastcall ****)(struct tagPOINTF))&v22)(v22);
            v16 = *v15;
          }
          *v15 = v17;
          if ( v16 )
            (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v16 + 8LL))(v16);
          v17 = v22;
        }
        if ( v17 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v17 + 8LL))(v17);
        }
      }
      v18 = *(struct tagPOINTF *)std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::operator[](
                                   (char *)this + 248,
                                   &v23);
      v24 = v18;
      if ( v18 )
        (***(void (__fastcall ****)(struct tagPOINTF))&v18)(v18);
      v22 = v18;
      if ( v18 )
        (***(void (__fastcall ****)(struct tagPOINTF))&v18)(v18);
      DataSourceId = AnimationDataProvider::GetDataSourceId(&v22);
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)this + 5,
        (__int64 **)&v22,
        &v23);
      v20 = (struct tagPOINT *)v22;
      DragNDropProcessor::GetVelocityForPointerId(this, &v22, v23);
      DragNDropProcessor::FeedAnimationDataIfNeeded(this, v23, v20[3], v22);
      InputETW::DragNDrop::StartAnimationCallBack(v23, v12, DataSourceId);
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 48LL)
                                                                                    + 8LL)
                                                                        + 56LL))(
             *(_QWORD *)(*(_QWORD *)&v6 + 48LL) + 8LL,
             v23,
             v12,
             DataSourceId);
      if ( v18 )
        (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v18 + 8LL))(v18);
    }
  }
  return v5;
}
