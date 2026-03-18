/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C000BB54
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000BAD8 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C000BBFC (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

_DWORD *__fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  int v6; // esi
  _DWORD *v7; // rdi
  __int64 *v8; // r8
  int (*v9)(union wil_details_FeaturePropertyCache *, void *); // rdx
  union wil_details_FeaturePropertyCache *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  _DWORD *v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  *(_QWORD *)a1 = 0LL;
  v6 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = (_DWORD *)a1;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 < 0 )
    goto LABEL_11;
  if ( a3 <= 1 )
  {
LABEL_20:
    v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
    v20 = a5;
    v18 = a1;
    a1 = (a3 & 0xFFFFFFFB) == 0;
    v19 = a3;
    v8 = &v18;
    if ( (a3 & 0xFFFFFFFB) != 0 )
      v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_7;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_4;
LABEL_11:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v11 = (union wil_details_FeaturePropertyCache *)(unsigned int)(a3 - 320);
        if ( (_DWORD)v11 == ((Feature_DisplayKernelAdvancedColorSupport__private_propertyCache >> 7) & 0x3F) )
        {
          if ( (Feature_DisplayKernelAdvancedColorSupport__private_propertyCache & 0x40) != 0 )
          {
            v7[4] = 1;
            return v7;
          }
          v17 = 1;
          v16 = 64;
          v15 = v7;
          wil_details_ModifyFeatureData(
            v11,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v15);
        }
      }
      v7[1] = a5;
      v7[2] = a3;
      v7[3] = 0;
      return v7;
    }
    goto LABEL_20;
  }
LABEL_4:
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
  v8 = &v12;
  v13 = v21;
  v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = a1;
LABEL_7:
  LOBYTE(v6) = (unsigned int)wil_details_ModifyFeatureData((union wil_details_FeaturePropertyCache *)a1, v9, v8) == 0;
  v7[4] = v6;
  return v7;
}
