/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180006F20
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180006E80 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180007000 (-wil_details_SetPropertyCacheOpportunityCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        signed __int32 a4,
        unsigned int a5)
{
  int v5; // esi
  __int64 (__fastcall *v9)(union wil_details_FeaturePropertyCache *, void *); // rbx
  signed __int32 v10; // r15d
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  signed __int32 v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  signed __int32 v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a4;
  v5 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 < 0 )
    goto LABEL_25;
  if ( a3 <= 1 )
  {
LABEL_3:
    v20 = a3;
    v19 = a1;
    v21 = a5;
    v9 = wil_details_SetPropertyCacheUsageCallback;
    if ( (a3 & 0xFFFFFFFB) != 0 )
      v9 = wil_details_SetPropertyCacheOpportunityCallback;
    while ( 1 )
    {
      v22 = *a2;
      v22 = *a2;
      v10 = v22;
      if ( !(v9 == wil_details_SetPropertyCacheOpportunityCallback
           ? wil_details_SetPropertyCacheOpportunityCallback((union wil_details_FeaturePropertyCache *)&v22, &v19)
           : (unsigned int)v9((union wil_details_FeaturePropertyCache *)&v22, &v19)) )
        break;
      if ( v10 == _InterlockedCompareExchange(a2, v22, v10) )
        goto LABEL_9;
    }
    v5 = 1;
    goto LABEL_9;
  }
  if ( a3 > 3 )
  {
    if ( a3 <= 5 )
      goto LABEL_3;
    if ( a3 > 7 )
    {
LABEL_25:
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a2 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a2 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          return a1;
        }
        v22 = 64;
        v17 = 64;
        v18 = 1;
        v16 = a1;
        wil_details_ModifyFeatureData(
          (union wil_details_FeaturePropertyCache *)a2,
          (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetPropertyFlagCallback,
          &v16);
      }
      *(_DWORD *)(a1 + 4) = a5;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
  }
  v22 = 0;
  switch ( a3 )
  {
    case 2:
      v22 = 0x10000;
      break;
    case 3:
      v22 = 0x40000;
      break;
    case 6:
      v22 = 0x20000;
      break;
    default:
      v22 = 0x80000;
      break;
  }
  v14 = v22;
  v15 = 0;
  v13 = a1;
  LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData(
                               (union wil_details_FeaturePropertyCache *)a2,
                               (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetPropertyFlagCallback,
                               &v13) == 0;
LABEL_9:
  *(_DWORD *)(a1 + 16) = v5;
  return a1;
}
