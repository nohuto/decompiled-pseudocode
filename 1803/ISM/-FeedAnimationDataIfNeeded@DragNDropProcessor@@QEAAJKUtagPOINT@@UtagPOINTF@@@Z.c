/*
 * XREFs of ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180065378
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180065138 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800636DC (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@QEAA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18008F3F8 (-GetBamoDataSourceStub@AnimationDataProvider@@QEAA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18008F54C (-GetDataSourceId@AnimationDataProvider@@SA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::FeedAnimationDataIfNeeded(
        DragNDropProcessor *this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4)
{
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 DataSourceId; // r14
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17[5]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 *v19; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+40h] BYREF
  struct tagPOINT v21; // [rsp+C0h] [rbp+48h]

  v21 = a3;
  v20 = a2;
  v17[2] = -2LL;
  v5 = a2;
  v17[1] = (unsigned __int64)a4;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 31,
    &v19,
    &v20);
  if ( v19 != *((__int64 **)this + 32) )
  {
    v7 = v19[3];
    v17[3] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    v16 = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    AnimationDataProvider::GetBamoDataSourceStub((char *)this + 312, &v19, &v16);
    v17[0] = v7;
    if ( v7 )
      (**(void (__fastcall ***)(__int64))v7)(v7);
    DataSourceId = AnimationDataProvider::GetDataSourceId(v17);
    v9 = *((_QWORD *)this + 41);
    v10 = *(_DWORD *)(v9 + 40);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL) + 16LL);
    HIDWORD(v17[0]) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 28);
    LODWORD(v17[0]) = v10;
    InputETW::DragNDrop::FeedPositionData(v5, v17[0], DataSourceId, a3);
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v19[1] + 48))(v19 + 1, 1LL);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x305,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v19[1] + 48))(v19 + 1, 2LL);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x306,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x180065555LL);
    }
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return 0LL;
}
