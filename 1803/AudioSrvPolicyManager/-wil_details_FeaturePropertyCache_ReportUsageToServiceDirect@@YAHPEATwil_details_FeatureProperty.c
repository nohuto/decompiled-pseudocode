/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18001FDA4
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18002000C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  signed __int32 v8; // r8d
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(union wil_details_FeaturePropertyCache *, __int128 **); // r14
  signed __int32 v12; // r15d
  signed __int32 v13; // r8d
  int v14; // eax
  volatile unsigned __int32 v15; // edx
  int v17; // [rsp+20h] [rbp-51h]
  volatile signed __int32 v18; // [rsp+20h] [rbp-51h]
  volatile signed __int32 v19; // [rsp+24h] [rbp-4Dh]
  signed __int32 v20; // [rsp+24h] [rbp-4Dh]
  volatile signed __int32 v21; // [rsp+28h] [rbp-49h] BYREF
  __int128 v22; // [rsp+30h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h]
  __int128 *v24; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+50h] [rbp-21h]
  __int64 v26; // [rsp+58h] [rbp-19h]
  _QWORD v27[2]; // [rsp+60h] [rbp-11h] BYREF
  int v28; // [rsp+70h] [rbp-1h]
  int v29; // [rsp+74h] [rbp+3h]
  __int128 v30; // [rsp+78h] [rbp+7h] BYREF
  __int64 v31; // [rsp+88h] [rbp+17h]

  v5 = 0;
  v22 = 0uLL;
  v23 = 0LL;
  if ( a3 < 0 )
    goto LABEL_25;
  if ( a3 <= 1 )
  {
LABEL_20:
    v25 = a3;
    v24 = &v22;
    v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
    v26 = a5;
    if ( (a3 & 0xFFFFFFFB) == 0 )
      v11 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
    while ( 1 )
    {
      v21 = *a1;
      v21 = *a1;
      v12 = v21;
      if ( !(unsigned int)v11((union wil_details_FeaturePropertyCache *)&v21, &v24) )
        goto LABEL_18;
      if ( v12 == _InterlockedCompareExchange(a1, v21, v12) )
      {
LABEL_17:
        v10 = 0;
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
          LODWORD(v23) = 1;
          goto LABEL_33;
        }
        v21 = 64;
        do
        {
          v18 = *a1;
          v13 = *a1;
          v14 = *a1 & 0x40;
          LODWORD(v22) = 0;
        }
        while ( v14 != 64 && v13 != _InterlockedCompareExchange(a1, v18 | 0x40, v13) );
      }
      DWORD1(v22) = a5;
      *((_QWORD *)&v22 + 1) = (unsigned int)a3;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v17 = 0x10000;
      break;
    case 3:
      v17 = 0x40000;
      break;
    case 6:
      v17 = 0x20000;
      break;
    default:
      v17 = 0x80000;
      break;
  }
  while ( 1 )
  {
    v19 = *a1;
    v8 = *a1;
    v9 = v17 & *a1;
    LODWORD(v22) = 0;
    if ( v9 == v17 )
      break;
    v20 = v17 | v19;
    if ( (v20 & 8) == 0 )
    {
      LODWORD(v22) = 1;
      v20 |= 8u;
    }
    if ( v8 == _InterlockedCompareExchange(a1, v20, v8) )
      goto LABEL_17;
  }
LABEL_18:
  v10 = 1;
LABEL_19:
  LODWORD(v23) = v10;
LABEL_33:
  v31 = v23;
  v30 = v22;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0x9B19E6u,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v30);
    v15 = *a1;
    if ( (*a1 & 0x30) == 0x20 )
    {
      v28 = 0;
      v29 = (v15 >> 2) & 1;
      v27[0] = 0LL;
      v27[1] = (unsigned int)a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10164710LL, 0LL, v27);
    }
  }
  LOBYTE(v5) = (_DWORD)v31 == 0;
  return v5;
}
