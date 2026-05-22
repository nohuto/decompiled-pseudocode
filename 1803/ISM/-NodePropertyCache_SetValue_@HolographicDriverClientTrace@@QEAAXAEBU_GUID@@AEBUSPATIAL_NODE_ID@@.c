/*
 * XREFs of ?NodePropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0PEBX_K@Z @ 0x1800BE1D8
 * Callers:
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x1800C1284 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCache_SetValue_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        const void *a5,
        char a6)
{
  __int64 v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  const struct _GUID *v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  const struct SPATIAL_NODE_ID *v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  const struct _GUID *v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  char *v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]

  v9 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 2) != 0 && (*(_QWORD *)(v9 + 24) & 2LL) == *(_QWORD *)(v9 + 24) )
  {
    v11 = a2;
    v17 = &a6;
    v12 = 16LL;
    v13 = a3;
    v14 = 16LL;
    v15 = a4;
    v16 = 16LL;
    v18 = 8LL;
    TlgWrite((TraceLoggingHProvider)v9, &unk_180110D2E, 0LL, 0LL, 6u, &pData);
  }
}
