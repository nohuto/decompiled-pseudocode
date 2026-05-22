/*
 * XREFs of ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x180064374
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800629C0 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManager.c)
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180064020 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180064C08 (-StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x18000A98C (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180065EA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_180065EA4.c)
 */

__int64 __fastcall DragNDropProcessor::UpdateVelocityForPointerId(DragNDropProcessor *this, int a2, struct tagPOINT a3)
{
  char *v3; // rsi
  LARGE_INTEGER v6; // rbx
  int v7; // r9d
  __int64 *v8; // rcx
  LARGE_INTEGER *QuadPart; // rax
  __int64 v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  struct tagPOINT *v14; // rbx
  float v15; // xmm1_4
  LONG y; // eax
  LARGE_INTEGER *v18; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+30h] BYREF
  int v20; // [rsp+78h] [rbp+38h] BYREF
  struct tagPOINT v21; // [rsp+80h] [rbp+40h]

  v21 = a3;
  v20 = a2;
  v3 = (char *)this + 184;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 23,
    (__int64 **)&PerformanceCount,
    &v20);
  v6 = PerformanceCount;
  if ( PerformanceCount.QuadPart == *((_QWORD *)this + 24) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      v3,
      (__int64 **)&PerformanceCount,
      &v20);
    v8 = (__int64 *)*((_QWORD *)v3 + 1);
    QuadPart = (LARGE_INTEGER *)PerformanceCount.QuadPart;
    if ( (__int64 *)PerformanceCount.QuadPart == v8 )
    {
      v10 = *v8;
      PerformanceCount.QuadPart = (LONGLONG)&v20;
      v11 = *(__int64 **)(v10 + 8);
      v12 = std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              (_DWORD)v8,
              v10,
              (_DWORD)v11,
              v7,
              (__int64)&PerformanceCount);
      v13 = *((_QWORD *)v3 + 2);
      if ( v13 == 0x555555555555554LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)v3 + 2) = v13 + 1;
      *(_QWORD *)(v10 + 8) = v12;
      *v11 = v12;
      std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
        (float *)v3,
        (__int64)&v18,
        (unsigned int *)(**((_QWORD **)v3 + 1) + 16LL),
        **((__int64 ***)v3 + 1));
      QuadPart = v18;
    }
    v14 = (struct tagPOINT *)&QuadPart[3];
    QueryPerformanceCounter(QuadPart + 3);
    v14[1] = a3;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart != *(_QWORD *)(v6.QuadPart + 24) )
    {
      v15 = (float)(PerformanceCount.LowPart - *(_DWORD *)(v6.QuadPart + 24)) / (float)(int)*((_QWORD *)this + 22);
      y = v21.y;
      *(float *)(v6.QuadPart + 40) = (float)(a3.x - *(_DWORD *)(v6.QuadPart + 32)) / v15;
      *(float *)(v6.QuadPart + 44) = (float)(y - *(_DWORD *)(v6.QuadPart + 36)) / v15;
      *(struct tagPOINT *)(v6.QuadPart + 32) = a3;
      *(LARGE_INTEGER *)(v6.QuadPart + 24) = PerformanceCount;
    }
  }
  return 0LL;
}
