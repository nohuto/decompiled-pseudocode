/*
 * XREFs of ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800BEE34
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800C4C50 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
        HolographicDriverClientContinuousTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        unsigned __int16 a5,
        const struct SPATIAL_NODE_ID *a6)
{
  __int64 v8; // rcx
  unsigned __int16 v9; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  const void **v11; // [rsp+68h] [rbp-21h]
  __int64 v12; // [rsp+70h] [rbp-19h]
  const struct _GUID *v13; // [rsp+78h] [rbp-11h]
  __int64 v14; // [rsp+80h] [rbp-9h]
  const struct SPATIAL_NODE_ID *v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  __int16 *v17; // [rsp+98h] [rbp+Fh]
  __int64 v18; // [rsp+A0h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B4h] [rbp+2Bh]
  const void *v22; // [rsp+E0h] [rbp+57h] BYREF

  v22 = a2;
  v8 = *((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
  {
    v11 = &v22;
    v9 = a5;
    v17 = (__int16 *)&v9;
    v19 = a6;
    v12 = 8LL;
    v13 = a3;
    v14 = 16LL;
    v15 = a4;
    v16 = 16LL;
    v18 = 2LL;
    v20 = 16 * a5;
    v21 = 0;
    TlgWrite((TraceLoggingHProvider)v8, &unk_180111A62, 0LL, 0LL, 7u, &pData);
  }
}
