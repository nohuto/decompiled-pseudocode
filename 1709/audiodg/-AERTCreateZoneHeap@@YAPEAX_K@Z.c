/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140018A90
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140016A10 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140056070 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14006093C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x1400618F0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 */

__int64 __fastcall AERTCreateZoneHeap(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  __int64 v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  __int64 v12; // [rsp+90h] [rbp+47h]
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF

  v13 = 0LL;
  v2 = RtlCreateMemoryZone(&v13, a1, 0LL);
  v3 = v2;
  if ( (v2 & 0xC0000000) == 0xC0000000
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
  }
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_QWORD *)&EventTrace[48] = 0LL;
    *(_DWORD *)&EventTrace[56] = 0;
    v10 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    strcpy(EventTrace, "x");
    v6 = v13;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_MEMORY;
    *(_WORD *)&EventTrace[4] = 1027;
    v7 = a1;
    v12 = v3;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  return v13;
}
