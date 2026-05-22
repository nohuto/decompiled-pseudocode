/*
 * XREFs of ?SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x1800B1474
 * Callers:
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B885C (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryDestroyed_(
        HolographicDriverClientTrace *this,
        const void *a2)
{
  __int64 v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const void **v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  const void *v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 2) != 0 && (*(_QWORD *)(v2 + 24) & 2LL) == *(_QWORD *)(v2 + 24) )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 8;
    TlgWrite((TraceLoggingHProvider)v2, &unk_1800F2483, 0LL, 0LL, 3u, &pData);
  }
}
