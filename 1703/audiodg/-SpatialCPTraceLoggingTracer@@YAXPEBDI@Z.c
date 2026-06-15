/*
 * XREFs of ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC28
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x140058F8C (CreateSpatialCrossProcessEndpointRT.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005D800 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005D970 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005E97C (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall SpatialCPTraceLoggingTracer(LPCSTR psz, int a2)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int v9; // [rsp+A8h] [rbp+10h] BYREF

  v9 = a2;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    TlgCreateSz(&pDesc, psz);
    v8 = 0;
    v6 = &v9;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FF81, v2, v3, 4u, &pData);
  }
}
