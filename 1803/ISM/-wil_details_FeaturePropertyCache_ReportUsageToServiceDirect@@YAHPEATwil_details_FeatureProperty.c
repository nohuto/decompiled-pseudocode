/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000FC14
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  signed __int32 v9; // r8d
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall *v12)(union wil_details_FeaturePropertyCache *, __int128 **); // r14
  signed __int32 v13; // r15d
  signed __int32 v14; // r8d
  int v15; // eax
  volatile unsigned __int32 v16; // edx
  int v18; // [rsp+20h] [rbp-61h]
  volatile signed __int32 v19; // [rsp+20h] [rbp-61h]
  volatile signed __int32 v20; // [rsp+24h] [rbp-5Dh]
  signed __int32 v21; // [rsp+24h] [rbp-5Dh]
  volatile signed __int32 v22; // [rsp+28h] [rbp-59h] BYREF
  __int128 v23; // [rsp+30h] [rbp-51h] BYREF
  __int64 v24; // [rsp+40h] [rbp-41h]
  __int128 *v25; // [rsp+48h] [rbp-39h] BYREF
  int v26; // [rsp+50h] [rbp-31h]
  __int64 v27; // [rsp+58h] [rbp-29h]
  _QWORD v28[2]; // [rsp+60h] [rbp-21h] BYREF
  int v29; // [rsp+70h] [rbp-11h]
  int v30; // [rsp+74h] [rbp-Dh]
  __int128 v31; // [rsp+78h] [rbp-9h] BYREF
  __int64 v32; // [rsp+88h] [rbp+7h]

  v5 = 0;
  v23 = 0uLL;
  v24 = 0LL;
  if ( a3 < 0 )
    goto LABEL_25;
  if ( a3 <= 1 )
  {
LABEL_20:
    v26 = a3;
    v25 = &v23;
    v12 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    v27 = a5;
    if ( (a3 & 0xFFFFFFFB) == 0 )
      v12 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v22 = *a1;
      v22 = *a1;
      v13 = v22;
      if ( !(unsigned int)v12((union wil_details_FeaturePropertyCache *)&v22, &v25) )
        goto LABEL_18;
      if ( v13 == _InterlockedCompareExchange(a1, v22, v13) )
      {
LABEL_17:
        v11 = 0;
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
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a1 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a1 & 0x40) != 0 )
        {
          LODWORD(v24) = 1;
          goto LABEL_33;
        }
        v22 = 64;
        do
        {
          v19 = *a1;
          v14 = *a1;
          v15 = *a1 & 0x40;
          LODWORD(v23) = 0;
        }
        while ( v15 != 64 && v14 != _InterlockedCompareExchange(a1, v19 | 0x40, v14) );
      }
      DWORD1(v23) = a5;
      *((_QWORD *)&v23 + 1) = (unsigned int)a3;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v18 = 0x10000;
      break;
    case 3:
      v18 = 0x40000;
      break;
    case 6:
      v18 = 0x20000;
      break;
    default:
      v18 = 0x80000;
      break;
  }
  while ( 1 )
  {
    v20 = *a1;
    v9 = *a1;
    v10 = v18 & *a1;
    LODWORD(v23) = 0;
    if ( v10 == v18 )
      break;
    v21 = v18 | v20;
    if ( (v21 & 8) == 0 )
    {
      LODWORD(v23) = 1;
      v21 |= 8u;
    }
    if ( v9 == _InterlockedCompareExchange(a1, v21, v9) )
      goto LABEL_17;
  }
LABEL_18:
  v11 = 1;
LABEL_19:
  LODWORD(v24) = v11;
LABEL_33:
  v32 = v24;
  v31 = v23;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      a2,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v31);
    v16 = *a1;
    if ( (*a1 & 0x30) == 0x20 )
    {
      v29 = 0;
      v30 = (v16 >> 2) & 1;
      v28[0] = 0LL;
      v28[1] = (unsigned int)a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v28);
    }
  }
  LOBYTE(v5) = (_DWORD)v32 == 0;
  return v5;
}
