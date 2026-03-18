/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0011B68
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0011DE8 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v7; // r8d
  int v8; // eax
  unsigned int (__fastcall *v9)(signed __int32 *, __int128 **); // rsi
  signed __int32 v10; // r14d
  int v11; // r8d
  signed __int32 v13; // [rsp+20h] [rbp-41h]
  int v14; // [rsp+24h] [rbp-3Dh]
  signed __int32 v15; // [rsp+28h] [rbp-39h] BYREF
  __int128 v16; // [rsp+30h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h]
  int v18; // [rsp+48h] [rbp-19h]
  __int128 *v19; // [rsp+50h] [rbp-11h] BYREF
  int v20; // [rsp+58h] [rbp-9h]
  __int64 v21; // [rsp+60h] [rbp-1h]
  _QWORD v22[2]; // [rsp+68h] [rbp+7h] BYREF
  int v23; // [rsp+78h] [rbp+17h]
  unsigned int v24; // [rsp+7Ch] [rbp+1Bh]
  __int128 v25; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  v5 = 0;
  v16 = 0uLL;
  v17 = 0LL;
  if ( a3 < 0 )
    goto LABEL_25;
  if ( a3 <= 1 )
  {
LABEL_20:
    v20 = a3;
    v19 = &v16;
    v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    v21 = a5;
    if ( (a3 & 0xFFFFFFFB) == 0 )
      v9 = (unsigned int (__fastcall *)(signed __int32 *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v15 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      v10 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
      if ( !v9(&v15, &v19) )
        goto LABEL_18;
      if ( v10 == _InterlockedCompareExchange(
                    &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                    v15,
                    v10) )
      {
LABEL_17:
        v8 = 0;
        goto LABEL_19;
      }
    }
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_25:
      if ( (unsigned int)(a3 - 320) <= 0x3F
        && a3 - 320 == (((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 7) & 0x3F) )
      {
        if ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x40) != 0 )
        {
          LODWORD(v17) = 1;
          goto LABEL_33;
        }
        v18 = 64;
        do
        {
          v11 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
          LODWORD(v16) = 0;
        }
        while ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x40) != 0x40
             && v11 != _InterlockedCompareExchange(
                         &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                         Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache | 0x40,
                         Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) );
      }
      DWORD1(v16) = a5;
      *((_QWORD *)&v16 + 1) = (unsigned int)a3;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v14 = 0x10000;
      break;
    case 3:
      v14 = 0x40000;
      break;
    case 6:
      v14 = 0x20000;
      break;
    default:
      v14 = 0x80000;
      break;
  }
  while ( 1 )
  {
    v7 = Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    LODWORD(v16) = 0;
    if ( (v14 & Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) == v14 )
      break;
    v13 = v14 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache;
    if ( (((unsigned __int8)v14 | (unsigned __int8)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) & 8) == 0 )
    {
      LODWORD(v16) = 1;
      v13 = v14 | Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache | 8;
    }
    if ( v7 == _InterlockedCompareExchange(
                 &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
                 v13,
                 Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache) )
      goto LABEL_17;
  }
LABEL_18:
  v8 = 1;
LABEL_19:
  LODWORD(v17) = v8;
LABEL_33:
  v26 = v17;
  v25 = v16;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      15299626LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache,
      &v25);
    if ( (Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache & 0x30) == 0x20 )
    {
      v23 = 0;
      v24 = ((unsigned int)Feature_UsbHubDripsWatchdogSurpriseRemove__private_propertyCache >> 2) & 1;
      v22[0] = 0LL;
      v22[1] = (unsigned int)a3;
      g_wil_details_recordFeatureUsage(15299626LL, 0LL, v22);
    }
  }
  LOBYTE(v5) = (_DWORD)v26 == 0;
  return v5;
}
