/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01E383C
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C01B7354 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-18h]

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current && *((_BYTE *)Current + 322) )
    return 0LL;
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 13) + 208LL))()
    && (!(unsigned __int8)RtlIsMultiSessionSku(v5)
     || (wil_details_FeaturePropertyCache_ReportUsageToService(
           (__int64)&Feature_DirectDisplayApi__private_propertyCache,
           8185225LL,
           (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005EED0,
           0,
           v6),
         (unsigned __int8)ExQueryFastCacheDevLicense())
     && (v2 == 2 || v2 == 1 && !DXGPROCESS::IsCurrentThreadAppContainer())) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
