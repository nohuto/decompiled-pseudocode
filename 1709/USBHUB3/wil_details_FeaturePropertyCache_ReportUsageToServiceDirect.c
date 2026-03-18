/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0035BC0
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0035E20 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, int a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v6; // esi
  int v7; // edx
  int v8; // r8d
  unsigned int (__fastcall *v9)(signed __int32 *, __int128 **); // r14
  signed __int32 v10; // r15d
  int v11; // r8d
  int v13; // [rsp+28h] [rbp-31h]
  signed __int32 v14; // [rsp+28h] [rbp-31h]
  signed __int32 v15; // [rsp+2Ch] [rbp-2Dh] BYREF
  __int128 v16; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+40h] [rbp-19h]
  __int128 *v18; // [rsp+48h] [rbp-11h] BYREF
  int v19; // [rsp+50h] [rbp-9h]
  __int64 v20; // [rsp+58h] [rbp-1h]
  _QWORD v21[2]; // [rsp+60h] [rbp+7h] BYREF
  int v22; // [rsp+70h] [rbp+17h]
  __int128 v23; // [rsp+78h] [rbp+1Fh] BYREF
  int v24; // [rsp+88h] [rbp+2Fh]

  v3 = 0;
  v4 = 0;
  v16 = 0uLL;
  v17 = 0;
  v6 = 1;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_20;
    if ( a3 <= 3 )
      goto LABEL_6;
    if ( a3 <= 5 )
    {
LABEL_20:
      v19 = a3;
      v20 = 1LL;
      v18 = &v16;
      v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( (a3 & 0xFFFFFFFB) == 0 )
        v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v15 = Feature_SurpriseRemovalLpe__private_propertyCache;
        v10 = Feature_SurpriseRemovalLpe__private_propertyCache;
        if ( !v9(&v15, &v18) )
          goto LABEL_19;
        if ( v10 == _InterlockedCompareExchange(&Feature_SurpriseRemovalLpe__private_propertyCache, v15, v10) )
        {
LABEL_18:
          v6 = 0;
          goto LABEL_19;
        }
      }
    }
    if ( a3 <= 7 )
    {
LABEL_6:
      switch ( a3 )
      {
        case 2:
          v13 = 0x10000;
          break;
        case 3:
          v13 = 0x40000;
          break;
        case 6:
          v13 = 0x20000;
          break;
        default:
          v13 = 0x80000;
          break;
      }
      v7 = v13;
      while ( 1 )
      {
        v8 = Feature_SurpriseRemovalLpe__private_propertyCache;
        LODWORD(v16) = 0;
        if ( (v7 & Feature_SurpriseRemovalLpe__private_propertyCache) == v7 )
          goto LABEL_19;
        v14 = v7 | Feature_SurpriseRemovalLpe__private_propertyCache;
        if ( (((unsigned __int8)v7 | (unsigned __int8)Feature_SurpriseRemovalLpe__private_propertyCache) & 8) == 0 )
        {
          LODWORD(v16) = 1;
          v14 |= 8u;
        }
        if ( v8 == _InterlockedCompareExchange(
                     &Feature_SurpriseRemovalLpe__private_propertyCache,
                     v14,
                     Feature_SurpriseRemovalLpe__private_propertyCache) )
          goto LABEL_18;
      }
    }
  }
  if ( (unsigned int)(a3 - 320) > 0x3F
    || a3 - 320 != (((unsigned int)Feature_SurpriseRemovalLpe__private_propertyCache >> 7) & 0x3F) )
  {
LABEL_32:
    *((_QWORD *)&v16 + 1) = (unsigned int)a3;
    DWORD1(v16) = 1;
    goto LABEL_33;
  }
  if ( (Feature_SurpriseRemovalLpe__private_propertyCache & 0x40) == 0 )
  {
    v15 = 64;
    do
    {
      v11 = Feature_SurpriseRemovalLpe__private_propertyCache;
      LODWORD(v16) = 0;
    }
    while ( (Feature_SurpriseRemovalLpe__private_propertyCache & 0x40) != 0x40
         && v11 != _InterlockedCompareExchange(
                     &Feature_SurpriseRemovalLpe__private_propertyCache,
                     Feature_SurpriseRemovalLpe__private_propertyCache | 0x40,
                     Feature_SurpriseRemovalLpe__private_propertyCache) );
    v3 = v17;
    goto LABEL_32;
  }
LABEL_19:
  v3 = v6;
  v17 = v6;
LABEL_33:
  v24 = v3;
  v23 = v16;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(12882213LL, &Feature_SurpriseRemovalLpe__private_propertyCache, &v23);
    if ( (Feature_SurpriseRemovalLpe__private_propertyCache & 0x30) == 0x20 )
    {
      v21[0] = 0LL;
      v22 = 0;
      v21[1] = (unsigned int)a3;
      g_wil_details_recordFeatureUsage(12882213LL, 0LL, v21);
    }
  }
  LOBYTE(v4) = v24 == 0;
  return v4;
}
