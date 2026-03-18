/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x180054130 (-PrepareForCalculation@CExpression@@MEAAXPEA_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800BAE58 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800C7700 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // edx
  signed __int32 v11; // r8d
  __int64 result; // rax
  volatile signed __int32 v13; // edx
  int (*v14)(union wil_details_FeaturePropertyCache *, void *); // rdx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+70h] [rbp+18h]
  volatile signed __int32 v22; // [rsp+70h] [rbp+18h]
  signed __int32 v23; // [rsp+70h] [rbp+18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 == 2 )
  {
LABEL_2:
    v9 = 0;
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
      case 7:
        v21 = 0x80000;
        break;
    }
    v10 = v21;
    while ( 1 )
    {
      v22 = *a2;
      v11 = *a2;
      *(_DWORD *)a1 = 0;
      if ( (v10 & v22) == v10 )
        break;
      v23 = v10 | v22;
      if ( (v23 & 8) == 0 )
      {
        v23 |= 8u;
        *(_DWORD *)a1 = 1;
      }
      if ( v11 == _InterlockedCompareExchange(a2, v23, v11) )
        goto LABEL_7;
    }
    v9 = 1;
LABEL_7:
    *(_DWORD *)(a1 + 16) = v9;
    return a1;
  }
  else
  {
    switch ( a3 )
    {
      case 0:
      case 1:
      case 4:
      case 5:
        v18 = a1;
        v9 = 0;
        v19 = a3;
        v14 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
        v20 = a5;
        if ( (a3 & 0xFFFFFFFB) != 0 )
          v14 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
        LOBYTE(v9) = (unsigned int)wil_details_ModifyFeatureData(
                                     (union wil_details_FeaturePropertyCache *)a2,
                                     v14,
                                     &v18) == 0;
        goto LABEL_7;
      case 3:
      case 6:
      case 7:
        goto LABEL_2;
      default:
        if ( (unsigned int)(a3 - 320) > 0x3F )
          goto LABEL_14;
        v13 = *a2;
        if ( a3 - 320 != (((unsigned __int32)*a2 >> 7) & 0x3F) )
          goto LABEL_14;
        if ( (v13 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          result = a1;
        }
        else
        {
          v16 = 64;
          v17 = 1;
          v15 = a1;
          wil_details_ModifyFeatureData(
            (union wil_details_FeaturePropertyCache *)a2,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v15);
LABEL_14:
          *(_DWORD *)(a1 + 4) = a5;
          result = a1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 12) = a4;
        }
        break;
    }
  }
  return result;
}
