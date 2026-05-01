/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801521B0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801527F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, int a3)
{
  char v5; // r14
  char v6; // r15
  bool v7; // di
  HWND ForegroundWindow; // rax
  __int64 v9; // rax
  void (*v10)(void); // rax
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int16 v13; // [rsp+34h] [rbp-1Ch]
  int v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+3Ch] [rbp-14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetCachedFeatureEnabledState();
  LOBYTE(v15) = 3;
  v14 = 0;
  v12 = 0;
  v5 = 1;
  v13 = v15;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetFeaturePropertyCache'::`2'::data,
    0x9738C9u,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    1,
    3);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(*(_QWORD *)(a1 + 32)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 96LL))(*(_QWORD *)(a1 + 32))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 104LL))(*(_QWORD *)(a1 + 32)) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 112LL))(*(_QWORD *)(a1 + 32))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32)) )
      {
        return 0LL;
      }
    }
    v7 = 1;
    ForegroundWindow = GetForegroundWindow();
    if ( (unsigned int)GetWindowBand(ForegroundWindow, &v12) )
      v7 = v12 != 13;
    if ( !v6
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 112LL))(*(_QWORD *)(a1 + 32))) )
    {
      v5 = 0;
    }
    if ( v7 )
    {
      if ( v5 && (((a3 - 1) & 0xFFFFFFFB) == 0 || (unsigned int)(a3 - 8) <= 4) )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), 7LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 112LL))(*(_QWORD *)(a1 + 32))
        && (((a3 - 1) & 0xFFFFFFFB) == 0 || (unsigned int)(a3 - 8) <= 4 || a3 == 6) )
      {
        v9 = **(_QWORD **)(a1 + 32);
        if ( v6 )
        {
          v10 = *(void (**)(void))(v9 + 88);
LABEL_29:
          v10();
          return 0LL;
        }
        if ( !(*(unsigned __int8 (**)(void))(v9 + 128))() )
        {
          v10 = *(void (**)(void))(**(_QWORD **)(a1 + 32) + 80LL);
          goto LABEL_29;
        }
      }
    }
  }
  return 0LL;
}
