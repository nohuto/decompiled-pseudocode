/*
 * XREFs of ?EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ @ 0x1800424C0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?PreRender@Dwm3DRECompositorThunk@@UEAAJXZ @ 0x18013BCD0 (-PreRender@Dwm3DRECompositorThunk@@UEAAJXZ.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180055630 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA830 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Dwm3DRECompositorThunk::EnsureImpl(Dwm3DRECompositorThunk *this)
{
  signed __int32 v1; // ebx
  struct wil_details_RecordUsageResult *v2; // r9
  signed __int32 v3[2]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v4; // [rsp+58h] [rbp-21h]
  int v5; // [rsp+60h] [rbp-19h] BYREF
  int v6; // [rsp+68h] [rbp-11h] BYREF
  __int16 v7; // [rsp+6Ch] [rbp-Dh]
  __int128 v8; // [rsp+70h] [rbp-9h] BYREF
  __int64 v9; // [rsp+80h] [rbp+7h]
  __int128 *v10; // [rsp+88h] [rbp+Fh] BYREF
  int v11; // [rsp+90h] [rbp+17h]
  int v12; // [rsp+94h] [rbp+1Bh]
  _QWORD v13[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+ACh] [rbp+33h]
  __int128 v16; // [rsp+B0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+47h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetCachedFeatureEnabledState(this);
  v3[0] = 0x20000;
  LOBYTE(v4) = 0;
  v6 = 0;
  v7 = v4;
  v8 = 0uLL;
  v9 = 0LL;
  v10 = &v8;
  v11 = 0x20000;
  v12 = 0;
  v3[1] = 0;
  v5 = 3;
  do
  {
    v3[0] = `wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data;
    v1 = `wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)v3, &v10) )
    {
      LODWORD(v9) = 1;
      goto LABEL_6;
    }
  }
  while ( v1 != _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data,
                  v3[0],
                  v1) );
  LODWORD(v9) = 0;
LABEL_6:
  v17 = v9;
  v16 = v8;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xDDF778,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v16,
        v2);
    else
      g_wil_details_recordFeatureUsage(
        0xDDF778u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v16);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v14 = 0;
      v15 = (`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v13[0] = 0LL;
      v13[1] = 6LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(14546808LL, 0LL, v13);
    }
  }
  if ( !(_DWORD)v17 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xDDF778u,
        (const struct FEATURE_LOGGED_TRAITS *)&v6,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v5,
        0LL,
        0,
        1uLL);
  }
}
