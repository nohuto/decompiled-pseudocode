/*
 * XREFs of ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005DA78
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005BE4C (CreateSpatialCrossProcessEndpointRT.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x1400605D0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x140060730 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14006179C (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x1400618F0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingTracer(LPCSTR psz, int a2)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  int *v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+6Ch] [rbp-1Ch]
  int v9; // [rsp+98h] [rbp+10h] BYREF

  v9 = a2;
  if ( (unsigned int)dword_1400890A0 > 5 )
  {
    TlgCreateSz(&pDesc, psz);
    v8 = 0;
    v6 = &v9;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_1400731A7, v2, v3, 4u, &pData);
  }
}
