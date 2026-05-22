/*
 * XREFs of ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x1800657D0
 * Callers:
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006411C (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180064C08 (-StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180065C38 (--$_Insert@AEAU-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$_List_unchecked_iterator@V-.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180065EE0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_180065EE0.c)
 */

__int64 *__fastcall std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[](
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 *v3; // r8
  int v4; // r9d
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    a1,
    &v13,
    a2);
  v5 = (__int64 *)a1[1];
  v6 = v13;
  if ( v13 == v5 )
  {
    v7 = *v5;
    v13 = v3;
    v8 = *(__int64 **)(v7 + 8);
    v9 = std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
           (_DWORD)v5,
           v7,
           (_DWORD)v8,
           v4,
           (__int64)&v13);
    v10 = a1[2];
    if ( v10 == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v10 + 1;
    *(_QWORD *)(v7 + 8) = v9;
    *v8 = v9;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Insert<std::pair<unsigned long const,DragNDropProcessor::MessageInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>>>>(
      a1,
      &v12,
      *(_QWORD *)a1[1] + 16LL);
    v6 = v12;
  }
  return v6 + 3;
}
