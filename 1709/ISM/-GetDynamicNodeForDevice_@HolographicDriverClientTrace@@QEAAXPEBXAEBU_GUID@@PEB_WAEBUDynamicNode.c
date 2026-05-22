/*
 * XREFs of ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800B1898
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800B5690 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800B6120 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const wchar_t *a4,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a5)
{
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  int v10; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  const void **v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  const struct _GUID *v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  const wchar_t *v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+94h] [rbp+1Bh]
  const struct Windows::Internal::Holographic::DynamicNodeInfo *v19; // [rsp+98h] [rbp+1Fh]
  __int64 v20; // [rsp+A0h] [rbp+27h]
  int *v21; // [rsp+A8h] [rbp+2Fh]
  __int64 v22; // [rsp+B0h] [rbp+37h]
  const void *v23; // [rsp+E0h] [rbp+67h] BYREF

  v23 = a2;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v13 = 8LL;
    v12 = &v23;
    v14 = a3;
    LODWORD(v8) = 0;
    v15 = 16LL;
    v9 = &word_1800DF514;
    if ( a4 )
    {
      v9 = a4;
      v8 = -1LL;
      do
        ++v8;
      while ( a4[v8] );
    }
    v16 = v9;
    v17 = 2 * v8 + 2;
    v19 = a5;
    v18 = 0;
    v20 = 16LL;
    v10 = *((_DWORD *)a5 + 4);
    v21 = &v10;
    v22 = 4LL;
    TlgWrite(v7, &unk_1800F14AB, 0LL, 0LL, 7u, &pData);
  }
}
