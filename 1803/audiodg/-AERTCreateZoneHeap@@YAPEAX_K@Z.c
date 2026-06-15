/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140019140
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017080 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140053D00 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DF1C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EED0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 */

__int64 __fastcall AERTCreateZoneHeap(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-29h] BYREF
  __int64 v6; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+90h] [rbp+47h]
  __int64 v15; // [rsp+B8h] [rbp+6Fh] BYREF

  v15 = 0LL;
  v2 = RtlCreateMemoryZone(&v15, a1, 0LL);
  v3 = v2;
  if ( (v2 & 0xC0000000) == 0xC0000000
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_14502ebd56cd3c22b5b969b047a5e1b2_Traceguids);
  }
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v6 = 0LL;
    v7 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    EventTrace.Size = 120;
    v8 = v15;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1027;
    v9 = a1;
    v14 = v3;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return v15;
}
