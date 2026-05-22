/*
 * XREFs of ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x1800B3588
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800B7EC0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
        HolographicDriverClientContinuousTrace *this,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct SPATIAL_NODE_ID *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v4 = *((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = 0;
    v11 = 0;
    v9 = &v12;
    v10 = 4;
    v6 = a2;
    v7 = 16;
    TlgWrite((TraceLoggingHProvider)v4, &unk_1800F164C, 0LL, 0LL, 4u, &pData);
  }
}
