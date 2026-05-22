/*
 * XREFs of ?TrackingStateChanged_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@2@Z @ 0x1800B1620
 * Callers:
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1800B7D80 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::TrackingStateChanged_(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct HolographicDriverClientTrace *v8; // rax
  __int64 v9; // r10
  const char *v10; // rdx
  int v11; // ebx
  const char *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-31h] BYREF
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  const char *v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]
  const char *v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+94h] [rbp+2Bh]
  __int64 *v27; // [rsp+98h] [rbp+2Fh]
  __int64 v28; // [rsp+A0h] [rbp+37h]

  v8 = HolographicDriverClientTrace::Instance();
  v9 = *((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 2) != 0 )
  {
    v8 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v9 + 24) & 2LL);
    if ( v8 == *(struct HolographicDriverClientTrace **)(v9 + 24) )
    {
      v17 = a2;
      v18 = 16LL;
      v10 = "(unknown)";
      v19 = a3;
      v20 = 16LL;
      if ( a4 )
      {
        v11 = a4 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v12 = "OrientationOnly";
          else
            v12 = "(unknown)";
        }
        else
        {
          v12 = "PositionAndOrientation";
        }
      }
      else
      {
        v12 = "Stopped";
      }
      v13 = -1LL;
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v21 = v12;
      v22 = v14 + 1;
      v23 = 0;
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          v10 = "PositionAndOrientation";
        }
        else if ( a5 == 2 )
        {
          v10 = "OrientationOnly";
        }
      }
      else
      {
        v10 = "Stopped";
      }
      do
        ++v13;
      while ( v10[v13] );
      v24 = v10;
      v25 = v13 + 1;
      v27 = &qword_18010F278;
      v26 = 0;
      v28 = 8LL;
      LODWORD(v8) = TlgWrite((TraceLoggingHProvider)v9, &unk_1800F1EA0, 0LL, 0LL, 7u, &pData);
    }
  }
  return (int)v8;
}
