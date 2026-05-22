/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A084 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003A288 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(_QWORD *a1, int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD *v13; // r10
  _QWORD *i; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-10h] BYREF
  __int16 v19; // [rsp+34h] [rbp-Ch]
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  int v21; // [rsp+78h] [rbp+38h]
  __int16 v22; // [rsp+7Ch] [rbp+3Ch]

  v20 = a3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 3;
  v21 = 0;
  v18 = 0;
  v19 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data,
    0xB3542Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3u);
  if ( a2 != 1 )
    return (unsigned int)-2147024809;
  if ( !a1[6] )
    return (unsigned int)-2147418113;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 0LL;
  do
  {
    v9 = *((unsigned __int8 *)&v20 + v8++);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  while ( v8 < 8 );
  v10 = v7 & a1[13];
  v11 = a1[10];
  v12 = 2 * v10;
  v13 = *(_QWORD **)(v11 + 16 * v10);
  for ( i = v13; ; i = (_QWORD *)*i )
  {
    v15 = v13 == (_QWORD *)a1[8] ? (_QWORD *)a1[8] : **(_QWORD ***)(v11 + 8 * v12 + 8);
    if ( i == v15 )
      break;
    if ( i[2] == a3 )
      goto LABEL_17;
  }
  i = (_QWORD *)a1[8];
LABEL_17:
  v6 = 0;
  if ( i == (_QWORD *)a1[8] )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
      a1 + 7,
      &v20);
    if ( !a1[9] )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[6] + 32LL))(a1[6], a1 + 1);
      if ( v6 >= 0 )
      {
        v16 = a1[6];
        if ( v16 )
        {
          a1[6] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
  }
  return (unsigned int)v6;
}
