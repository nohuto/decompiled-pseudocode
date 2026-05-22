/*
 * XREFs of ?SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z @ 0x1800B1DD8
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800B8950 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphDeviceNotUsable_(
        HolographicDriverClientTrace *this,
        const wchar_t *a2)
{
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v3 > 2u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = &word_1800DF514;
    LODWORD(v5) = 0;
    if ( a2 )
    {
      v4 = a2;
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    v7 = v4;
    v8 = 2 * v5 + 2;
    v9 = 0;
    TlgWrite((TraceLoggingHProvider)v3, &unk_1800F1C38, 0LL, 0LL, 3u, &pData);
  }
}
