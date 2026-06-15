/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019530
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DB7C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140045EC8 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x140046674 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE EventTrace[64]; // [rsp+38h] [rbp-29h] BYREF
  void *v9; // [rsp+78h] [rbp+17h]
  unsigned __int64 v10; // [rsp+80h] [rbp+1Fh]
  __int64 v11; // [rsp+88h] [rbp+27h]
  __int64 v12; // [rsp+90h] [rbp+2Fh]
  __int64 v13; // [rsp+98h] [rbp+37h]
  __int64 v14; // [rsp+A0h] [rbp+3Fh]
  __int64 v15; // [rsp+A8h] [rbp+47h]
  __int64 v16; // [rsp+D8h] [rbp+77h] BYREF

  v16 = 0LL;
  v4 = RtlAllocateMemoryZone(a2, a1, &v16);
  if ( !v16 )
  {
    v6 = 0x100000LL;
    if ( a1 > 0x100000 )
      v6 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v6);
    v4 = RtlAllocateMemoryZone(a2, a1, &v16);
    if ( !v16
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_Pq(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, v7, a1, a2);
    }
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_QWORD *)&EventTrace[48] = 0LL;
    *(_DWORD *)&EventTrace[56] = 0;
    v13 = 0LL;
    v14 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    strcpy(EventTrace, "x");
    v15 = v4;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_MEMORY;
    *(_WORD *)&EventTrace[4] = 1286;
    v9 = a2;
    v10 = a1;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  return v16;
}
