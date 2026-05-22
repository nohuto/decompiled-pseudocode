/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B650
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v8; // r14d
  signed __int32 v9; // r8d
  int v10; // eax
  __int64 (__fastcall *v11)(union wil_details_FeaturePropertyCache *, __int128 **); // r15
  signed __int32 v12; // r12d
  signed __int32 v13; // r8d
  int v14; // eax
  int v16; // [rsp+20h] [rbp-61h]
  volatile signed __int32 v17; // [rsp+20h] [rbp-61h]
  volatile signed __int32 v18; // [rsp+24h] [rbp-5Dh]
  signed __int32 v19; // [rsp+24h] [rbp-5Dh]
  volatile signed __int32 v20; // [rsp+28h] [rbp-59h] BYREF
  __int128 v21; // [rsp+30h] [rbp-51h] BYREF
  int v22; // [rsp+40h] [rbp-41h]
  __int128 *v23; // [rsp+48h] [rbp-39h] BYREF
  int v24; // [rsp+50h] [rbp-31h]
  __int64 v25; // [rsp+58h] [rbp-29h]
  _QWORD v26[2]; // [rsp+60h] [rbp-21h] BYREF
  int v27; // [rsp+70h] [rbp-11h]
  __int128 v28; // [rsp+78h] [rbp-9h] BYREF
  int v29; // [rsp+88h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v21 = 0uLL;
  v22 = 0;
  v8 = 1;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_19;
    if ( a3 <= 3 )
    {
LABEL_6:
      switch ( a3 )
      {
        case 2:
          v16 = 0x10000;
          break;
        case 3:
          v16 = 0x40000;
          break;
        case 6:
          v16 = 0x20000;
          break;
        default:
          v16 = 0x80000;
          break;
      }
      while ( 1 )
      {
        v18 = *a1;
        v9 = *a1;
        v10 = v16 & *a1;
        LODWORD(v21) = 0;
        if ( v10 == v16 )
          goto LABEL_18;
        v19 = v16 | v18;
        if ( (v19 & 8) == 0 )
        {
          LODWORD(v21) = 1;
          v19 |= 8u;
        }
        if ( v9 == _InterlockedCompareExchange(a1, v19, v9) )
          goto LABEL_17;
      }
    }
    if ( a3 <= 5 )
    {
LABEL_19:
      v24 = a3;
      v25 = 1LL;
      v23 = &v21;
      v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( (a3 & 0xFFFFFFFB) == 0 )
        v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v20 = *a1;
        v20 = *a1;
        v12 = v20;
        if ( !(unsigned int)v11((union wil_details_FeaturePropertyCache *)&v20, &v23) )
          goto LABEL_18;
        if ( v12 == _InterlockedCompareExchange(a1, v20, v12) )
        {
LABEL_17:
          v8 = 0;
          goto LABEL_18;
        }
      }
    }
    if ( a3 <= 7 )
      goto LABEL_6;
  }
  if ( (unsigned int)(a3 - 320) > 0x3F || a3 - 320 != (((unsigned __int32)*a1 >> 7) & 0x3F) )
  {
LABEL_31:
    *((_QWORD *)&v21 + 1) = (unsigned int)a3;
    DWORD1(v21) = 1;
    goto LABEL_32;
  }
  if ( (*(_BYTE *)a1 & 0x40) == 0 )
  {
    v20 = 64;
    do
    {
      v17 = *a1;
      v13 = *a1;
      v14 = *a1 & 0x40;
      LODWORD(v21) = 0;
    }
    while ( v14 != 64 && v13 != _InterlockedCompareExchange(a1, v17 | 0x40, v13) );
    v5 = v22;
    goto LABEL_31;
  }
LABEL_18:
  v5 = v8;
  v22 = v8;
LABEL_32:
  v29 = v5;
  v28 = v21;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      a2,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v28);
    if ( (*a1 & 0x30) == 0x20 )
    {
      v26[0] = 0LL;
      v27 = 0;
      v26[1] = (unsigned int)a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v26);
    }
  }
  LOBYTE(v4) = v29 == 0;
  return v4;
}
