/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUTrackedDeviceSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800BCEE4
 * Callers:
 *     _lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator() @ 0x1800BB3BC (_lambda_ee46ae3407b0869cacd23b14ef71fd42_--operator().c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a___ @ 0x1800BC50C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800BC50C.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5564f7cc49d1c2a4f9643868ea1ba7e4___ @ 0x1800BC5B4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800BC5B4.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800BE28C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@_WU-$char_tr_ea_1800BE28C.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800BE370 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800BE370.c)
 */

_QWORD *__fastcall std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::operator[](
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 *v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  void *v8; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = v5 + 4;
    if ( (unsigned __int64)v5[7] >= 8 )
      v6 = (_QWORD *)*v6;
    if ( (int)_o__wcsicmp(v6) >= 0 )
    {
      v2 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v2 == *(_QWORD **)a1 )
    goto LABEL_12;
  v7 = a2;
  if ( a2[3] >= 8uLL )
    v7 = (_QWORD *)*a2;
  if ( (int)_o__wcsicmp(v7) < 0 )
  {
LABEL_12:
    v10 = a2;
    v8 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
                   a1,
                   a2,
                   &v10);
    std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::_Insert_hint<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot> &,std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>,void *> *>(
      a1,
      v8);
    v2 = v10;
  }
  return v2 + 8;
}
