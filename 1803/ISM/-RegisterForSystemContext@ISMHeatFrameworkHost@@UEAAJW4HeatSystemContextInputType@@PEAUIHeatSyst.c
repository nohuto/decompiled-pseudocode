/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039C20
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x180039F38 (-BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSyste.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003A288 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A458 (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x1800903A4 (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        __int64 a1,
        int a2,
        struct IHeatSystemContextClient *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r9
  _QWORD *i; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int16 v18; // [rsp+34h] [rbp-1Ch]
  _QWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF
  struct IHeatSystemContextClient *v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+88h] [rbp+38h]
  __int16 v22; // [rsp+8Ch] [rbp+3Ch]

  v20 = a3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 3;
  v21 = 0;
  v17 = 0;
  v18 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data,
    0xB3542Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v17,
    1,
    3u);
  if ( a2 != 1 )
    return 2147942487LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 0LL;
  do
  {
    v9 = *((unsigned __int8 *)&v20 + v8++);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  while ( v8 < 8 );
  v10 = v7 & *(_QWORD *)(a1 + 104);
  v11 = *(_QWORD *)(a1 + 80);
  v12 = 2 * v10;
  v13 = *(_QWORD **)(v11 + 16 * v10);
  for ( i = v13; ; i = (_QWORD *)*i )
  {
    v15 = v13 == *(_QWORD **)(a1 + 64) ? *(_QWORD **)(a1 + 64) : **(_QWORD ***)(v11 + 8 * v12 + 8);
    if ( i == v15 )
      break;
    if ( (struct IHeatSystemContextClient *)i[2] == a3 )
      goto LABEL_15;
  }
  i = *(_QWORD **)(a1 + 64);
LABEL_15:
  if ( i != *(_QWORD **)(a1 + 64) )
    return 2147942487LL;
  LOBYTE(v13) = v21;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
    a1 + 56,
    v19,
    &v20,
    v13);
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
  {
    memset(v19, 0, sizeof(v19));
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 40LL))(v16, v19);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -2147023728 )
        return 0LL;
    }
    else
    {
      return ISMHeatFrameworkHost::BroadcastInputConfigMessage(
               (ISMHeatFrameworkHost *)a1,
               (struct SystemContextMessage *)v19,
               v20);
    }
  }
  else
  {
    result = InputConfigContextProvider::Create((struct ISystemContextProvider **)(a1 + 48));
    if ( (int)result >= 0 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), a1 + 8);
  }
  return result;
}
