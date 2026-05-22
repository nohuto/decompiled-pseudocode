/*
 * XREFs of ?GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x1800BD094
 * Callers:
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x1800C4740 (-GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Win.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeHapticsOutputPeriodMicroseconds_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        char a5)
{
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  const void **v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  const struct _GUID *v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  char *v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  const void *v17; // [rsp+C0h] [rbp+67h] BYREF

  v17 = a2;
  v7 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v10 = 8LL;
    v9 = &v17;
    v15 = &a5;
    v11 = a3;
    v12 = 16LL;
    v13 = a4;
    v14 = 16LL;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_1801109DF, 0LL, 0LL, 6u, &pData);
  }
}
