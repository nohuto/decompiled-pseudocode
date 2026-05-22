/*
 * XREFs of _lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator() @ 0x1800BB3BC
 * Callers:
 *     ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800B3788 (-AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEB.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180075D6C (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180075E4C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUTrackedDeviceSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800BCEE4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UTrackedDeviceSnapshot.c)
 *     ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Nil@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Nil@1@@Z @ 0x1800BD084 (--$_Insert_nohint@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
LARGE_INTEGER *__fastcall lambda_ee46ae3407b0869cacd23b14ef71fd42_::operator()(_QWORD *a1, LARGE_INTEGER *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  char v10; // [rsp+20h] [rbp-78h]
  char v11; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-60h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v15[4]; // [rsp+60h] [rbp-38h] BYREF

  v13 = -2LL;
  v14 = *(_OWORD *)a1[1];
  std::wstring::wstring(v15, a1[2]);
  v10 = v11;
  std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Nil>(
    *a1 + 88LL,
    &PerformanceCount,
    v4,
    &v14,
    v10);
  std::wstring::_Tidy_deallocate(v15);
  v5 = std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::operator[](*(_DWORD *)a1 + 8);
  v6 = a1[1];
  *(_OWORD *)(v5 + 80) = *(_OWORD *)v6;
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 16);
  QueryPerformanceCounter(&PerformanceCount);
  *(LARGE_INTEGER *)(v5 + 104) = PerformanceCount;
  Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
    (LARGE_INTEGER *)v5,
    (LARGE_INTEGER *)a1[2],
    v7);
  return Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
           (LARGE_INTEGER *)(v5 + 40),
           a2,
           v8);
}
