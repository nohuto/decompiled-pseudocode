/*
 * XREFs of ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x1800B1D1C
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800B62F0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::GetSittingStandingOnly_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        char a4)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const void **v7; // [rsp+58h] [rbp+17h]
  __int64 v8; // [rsp+60h] [rbp+1Fh]
  const struct _GUID *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  char *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]
  const void *v13; // [rsp+B0h] [rbp+6Fh] BYREF
  char v14; // [rsp+C0h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a2;
  v5 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = 8LL;
    v7 = &v13;
    v11 = &v14;
    v9 = a3;
    v10 = 16LL;
    v12 = 1LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1800F2268, 0LL, 0LL, 5u, &pData);
  }
}
