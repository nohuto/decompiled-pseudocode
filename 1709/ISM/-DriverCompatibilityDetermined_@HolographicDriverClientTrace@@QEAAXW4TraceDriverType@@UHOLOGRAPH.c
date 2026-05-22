/*
 * XREFs of ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x1800B1E80
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800B4A94 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::DriverCompatibilityDetermined_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  struct HolographicDriverClientTrace *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const char *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  const char *v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  __int64 *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  __int64 *v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]
  char *v23; // [rsp+A0h] [rbp+1Fh]
  __int64 v24; // [rsp+A8h] [rbp+27h]
  char *v25; // [rsp+B0h] [rbp+2Fh]
  __int64 v26; // [rsp+B8h] [rbp+37h]

  v11 = a3;
  v12 = a4;
  v6 = HolographicDriverClientTrace::Instance();
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 4u && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0 )
  {
    v6 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v7 + 3) & 0x400000000000LL);
    if ( v6 == *((struct HolographicDriverClientTrace **)v7 + 3) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v8 = "SpatialGraph";
        else
          v8 = "(unknown)";
      }
      else
      {
        v8 = "Display";
      }
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      v14 = v8;
      v15 = v9 + 1;
      v17 = &v11;
      v19 = (char *)&v11 + 4;
      v21 = &v12;
      v23 = (char *)&v12 + 4;
      v25 = &a5;
      v16 = 0;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 1LL;
      LODWORD(v6) = TlgWrite(v7, &unk_1800F0ECB, 0LL, 0LL, 8u, &pData);
    }
  }
  return (int)v6;
}
