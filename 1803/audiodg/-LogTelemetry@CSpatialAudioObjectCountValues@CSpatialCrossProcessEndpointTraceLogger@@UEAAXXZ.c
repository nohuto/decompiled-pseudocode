/*
 * XREFs of ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A6D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ?StdDev@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjectCountTypes@@@Z @ 0x14005B020 (-StdDev@-$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjec.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this)
{
  TraceLoggingHProvider *v1; // rax
  const struct _TlgProvider_t *v3; // rdi
  int v4; // eax
  int v5; // eax
  LPCGUID v6; // r9
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  double v9; // [rsp+38h] [rbp-C8h] BYREF
  double v10; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  char *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  char *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  char *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  double *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  char *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  char *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  char *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  double *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]

  v1 = (TraceLoggingHProvider *)*((_QWORD *)this + 10);
  v3 = *v1;
  if ( *(_DWORD *)*v1 > 4u && TlgKeywordOn(*v1, 0x400000000000uLL) )
  {
    v12 = *((_QWORD *)this + 11);
    v16 = (char *)this + 24;
    v13 = 16LL;
    v14 = (char *)this + 16;
    v15 = 4LL;
    v17 = 8LL;
    if ( *((_DWORD *)this + 4) )
      v4 = *((_DWORD *)this + 8);
    else
      v4 = 0;
    v7 = v4;
    v19 = 4LL;
    v18 = &v7;
    v21 = 4LL;
    v20 = (char *)this + 36;
    v9 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 0LL);
    v22 = &v9;
    v23 = 8LL;
    v26 = (char *)this + 56;
    v24 = (char *)this + 48;
    v25 = 4LL;
    v27 = 8LL;
    if ( *((_DWORD *)this + 12) )
      v5 = *((_DWORD *)this + 16);
    else
      v5 = 0;
    v8 = v5;
    v29 = 4LL;
    v28 = &v8;
    v31 = 4LL;
    v30 = (char *)this + 68;
    v10 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 1LL);
    v32 = &v10;
    v33 = 8LL;
    TlgWrite(v3, &unk_140070562, 0LL, v6, 0xDu, &pData);
  }
}
