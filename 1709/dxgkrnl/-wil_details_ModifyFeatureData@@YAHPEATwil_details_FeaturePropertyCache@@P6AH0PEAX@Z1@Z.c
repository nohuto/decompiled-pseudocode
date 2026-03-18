/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C0036A88
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0036B00 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int (__fastcall *a2)(union wil_details_FeaturePropertyCache **, void *),
        void *a3)
{
  signed __int32 v5; // esi
  union wil_details_FeaturePropertyCache *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  while ( 1 )
  {
    LODWORD(v7) = Feature_WCGTestMode__private_propertyCache;
    v5 = Feature_WCGTestMode__private_propertyCache;
    if ( !a2(&v7, a3) )
      break;
    if ( v5 == _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Feature_WCGTestMode__private_propertyCache,
                 (signed __int32)v7,
                 v5) )
      return 1LL;
  }
  return 0LL;
}
