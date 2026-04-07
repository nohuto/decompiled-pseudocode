/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180015070
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180014F74 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180015130 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180018888 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        signed __int32 a4,
        unsigned int a5)
{
  int v5; // esi
  signed __int32 v9; // ebx
  int (*v11)(union wil_details_FeaturePropertyCache *, void *); // rdx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  signed __int32 v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  signed __int32 v21; // [rsp+98h] [rbp+38h] BYREF

  v21 = a4;
  v5 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 < 0 )
    goto LABEL_15;
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
      goto LABEL_4;
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
      {
LABEL_4:
        v21 = 0;
        switch ( a3 )
        {
          case 2:
            v21 = 0x10000;
            break;
          case 3:
            v21 = 0x40000;
            break;
          case 6:
            v21 = 0x20000;
            break;
          default:
            v21 = 0x80000;
            break;
        }
        v13 = v21;
        v14 = 0;
        v12 = a1;
        while ( 1 )
        {
          v21 = *a2;
          v21 = *a2;
          v9 = v21;
          if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v21, &v12) )
            break;
          if ( v9 == _InterlockedCompareExchange(a2, v21, v9) )
          {
            v5 = 1;
            break;
          }
        }
        v5 ^= 1u;
        goto LABEL_9;
      }
LABEL_15:
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a2 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a2 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          return a1;
        }
        v21 = 64;
        v16 = 64;
        v17 = 1;
        v15 = a1;
        wil_details_ModifyFeatureData(
          (union wil_details_FeaturePropertyCache *)a2,
          (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
          &v15);
      }
      *(_DWORD *)(a1 + 4) = a5;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
  }
  v11 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
  v20 = a5;
  v18 = a1;
  v19 = a3;
  if ( (a3 & 0xFFFFFFFB) != 0 )
    v11 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
  LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData((union wil_details_FeaturePropertyCache *)a2, v11, &v18) == 0;
LABEL_9:
  *(_DWORD *)(a1 + 16) = v5;
  return a1;
}
