/*
 * XREFs of ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BCA38
 * Callers:
 *     ?OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x1800C6FC0 (-OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::StartTracking_(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct HolographicDriverClientTrace *v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  const char *v10; // rax
  __int64 v11; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  __int64 v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+60h] [rbp+Fh]
  __int64 v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  const char *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  __int64 *v21; // [rsp+88h] [rbp+37h]
  __int64 v22; // [rsp+90h] [rbp+3Fh]

  v7 = HolographicDriverClientTrace::Instance();
  v8 = *((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 )
  {
    v7 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v8 + 24) & 2LL);
    if ( v7 == *(struct HolographicDriverClientTrace **)(v8 + 24) )
    {
      v14 = a2;
      v15 = 16LL;
      v16 = a3;
      v17 = 16LL;
      if ( a4 )
      {
        v9 = a4 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = "OrientationOnly";
          else
            v10 = "(unknown)";
        }
        else
        {
          v10 = "PositionAndOrientation";
        }
      }
      else
      {
        v10 = "Stopped";
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      v18 = v10;
      v19 = v11 + 1;
      v21 = &qword_1801366F8;
      v20 = 0;
      v22 = 8LL;
      LODWORD(v7) = TlgWrite((TraceLoggingHProvider)v8, &unk_180112111, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v7;
}
