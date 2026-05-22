/*
 * XREFs of ?SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z @ 0x1800BD578
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C8360 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphDeviceNotUsable_(
        HolographicDriverClientTrace *this,
        const wchar_t *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v3 > 2u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
  {
    LODWORD(v4) = 0;
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a2[v4] );
    }
    v8 = 0;
    if ( !a2 )
      a2 = &sourceString;
    v6 = a2;
    v7 = 2 * v4 + 2;
    TlgWrite((TraceLoggingHProvider)v3, &unk_1801126D9, 0LL, 0LL, 3u, &pData);
  }
}
