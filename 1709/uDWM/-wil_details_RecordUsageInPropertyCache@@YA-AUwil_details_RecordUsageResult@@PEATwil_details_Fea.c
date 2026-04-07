/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180033F74
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180033E64 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180034044 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // esi
  __int64 *v9; // r8
  int (*v10)(union wil_details_FeaturePropertyCache *, void *); // rdx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  v5 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 < 0 )
    goto LABEL_19;
  if ( a3 <= 1 )
  {
LABEL_16:
    v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
    v20 = a5;
    v18 = a1;
    v19 = a3;
    v9 = &v18;
    if ( (a3 & 0xFFFFFFFB) != 0 )
      v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_11;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_19:
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == ((*(_DWORD *)a2 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a2 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          return a1;
        }
        v17 = 1;
        v16 = 64;
        v15 = a1;
        wil_details_ModifyFeatureData(
          a2,
          (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
          &v15);
      }
      *(_DWORD *)(a1 + 4) = a5;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    }
    goto LABEL_16;
  }
LABEL_6:
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
  v9 = &v12;
  v13 = v21;
  v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = a1;
LABEL_11:
  LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData(a2, v10, v9) == 0;
  *(_DWORD *)(a1 + 16) = v5;
  return a1;
}
