/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180010280
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v7; // r14d
  signed __int32 v8; // r8d
  int v9; // eax
  __int64 (__fastcall *v10)(union wil_details_FeaturePropertyCache *, __int128 **); // r15
  signed __int32 v11; // r12d
  signed __int32 v12; // r8d
  int v13; // eax
  int v15; // [rsp+20h] [rbp-51h]
  volatile signed __int32 v16; // [rsp+20h] [rbp-51h]
  volatile signed __int32 v17; // [rsp+24h] [rbp-4Dh]
  signed __int32 v18; // [rsp+24h] [rbp-4Dh]
  volatile signed __int32 v19; // [rsp+28h] [rbp-49h] BYREF
  __int128 v20; // [rsp+30h] [rbp-41h] BYREF
  int v21; // [rsp+40h] [rbp-31h]
  __int128 *v22; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+50h] [rbp-21h]
  __int64 v24; // [rsp+58h] [rbp-19h]
  _QWORD v25[2]; // [rsp+60h] [rbp-11h] BYREF
  int v26; // [rsp+70h] [rbp-1h]
  __int128 v27; // [rsp+78h] [rbp+7h] BYREF
  int v28; // [rsp+88h] [rbp+17h]

  v3 = 0;
  v4 = 0;
  v20 = 0uLL;
  v21 = 0;
  v7 = 1;
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
          v15 = 0x10000;
          break;
        case 3:
          v15 = 0x40000;
          break;
        case 6:
          v15 = 0x20000;
          break;
        default:
          v15 = 0x80000;
          break;
      }
      while ( 1 )
      {
        v17 = *a1;
        v8 = *a1;
        v9 = v15 & *a1;
        LODWORD(v20) = 0;
        if ( v9 == v15 )
          goto LABEL_18;
        v18 = v15 | v17;
        if ( (v18 & 8) == 0 )
        {
          LODWORD(v20) = 1;
          v18 |= 8u;
        }
        if ( v8 == _InterlockedCompareExchange(a1, v18, v8) )
          goto LABEL_17;
      }
    }
    if ( a3 <= 5 )
    {
LABEL_19:
      v23 = a3;
      v24 = 1LL;
      v22 = &v20;
      v10 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheOpportunityCallback;
      if ( (a3 & 0xFFFFFFFB) == 0 )
        v10 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, __int128 **))wil_details_SetPropertyCacheUsageCallback;
      while ( 1 )
      {
        v19 = *a1;
        v19 = *a1;
        v11 = v19;
        if ( !(unsigned int)v10((union wil_details_FeaturePropertyCache *)&v19, &v22) )
          goto LABEL_18;
        if ( v11 == _InterlockedCompareExchange(a1, v19, v11) )
        {
LABEL_17:
          v7 = 0;
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
    *((_QWORD *)&v20 + 1) = (unsigned int)a3;
    DWORD1(v20) = 1;
    goto LABEL_32;
  }
  if ( (*(_BYTE *)a1 & 0x40) == 0 )
  {
    v19 = 64;
    do
    {
      v16 = *a1;
      v12 = *a1;
      v13 = *a1 & 0x40;
      LODWORD(v20) = 0;
    }
    while ( v13 != 64 && v12 != _InterlockedCompareExchange(a1, v16 | 0x40, v12) );
    v3 = v21;
    goto LABEL_31;
  }
LABEL_18:
  v3 = v7;
  v21 = v7;
LABEL_32:
  v28 = v3;
  v27 = v20;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0xB6B210u,
      (union wil_details_FeaturePropertyCache *)a1,
      (struct wil_details_RecordUsageResult *)&v27);
    if ( (*a1 & 0x30) == 0x20 )
    {
      v25[0] = 0LL;
      v26 = 0;
      v25[1] = (unsigned int)a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(11973136LL, 0LL, v25);
    }
  }
  LOBYTE(v4) = v28 == 0;
  return v4;
}
