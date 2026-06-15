/*
 * XREFs of ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 *     ?StdDev@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjectCountTypes@@@Z @ 0x14005AD60 (-StdDev@-$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjec.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this)
{
  TraceLoggingHProvider *v1; // rax
  const struct _TlgProvider_t *v3; // rdi
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  double v8; // [rsp+38h] [rbp-C8h] BYREF
  double v9; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  char *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  char *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  char *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  double *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  char *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  char *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  double *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]

  v1 = (TraceLoggingHProvider *)*((_QWORD *)this + 10);
  v3 = *v1;
  if ( *(_DWORD *)*v1 > 4u && TlgKeywordOn(*v1, 0x400000000000uLL) )
  {
    v11 = *((_QWORD *)this + 11);
    v15 = (char *)this + 24;
    v12 = 16LL;
    v13 = (char *)this + 16;
    v14 = 4LL;
    v16 = 8LL;
    if ( *((_DWORD *)this + 4) )
      v6 = *((_DWORD *)this + 8);
    else
      v6 = 0;
    v18 = 4LL;
    v17 = &v6;
    v20 = 4LL;
    v19 = (char *)this + 36;
    v8 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 0LL);
    v21 = &v8;
    v22 = 8LL;
    v25 = (char *)this + 56;
    v23 = (char *)this + 48;
    v24 = 4LL;
    v26 = 8LL;
    if ( *((_DWORD *)this + 12) )
      v7 = *((_DWORD *)this + 16);
    else
      v7 = 0;
    v28 = 4LL;
    v27 = &v7;
    v30 = 4LL;
    v29 = (char *)this + 68;
    v9 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 1LL);
    v31 = &v9;
    v32 = 8LL;
    TlgWrite(v3, &unk_14006F910, v4, v5, 0xDu, &pData);
  }
}
