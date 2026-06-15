/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140019260 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057DE4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057F88 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005806C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DB7C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 */

void __fastcall AERTDestroyZoneHeap(void *a1)
{
  _QWORD *v2; // rcx
  int v3; // edi
  _BYTE EventTrace[64]; // [rsp+28h] [rbp-29h] BYREF
  void *v5; // [rsp+68h] [rbp+17h]
  __int64 v6; // [rsp+70h] [rbp+1Fh]
  __int64 v7; // [rsp+78h] [rbp+27h]
  __int64 v8; // [rsp+80h] [rbp+2Fh]
  __int64 v9; // [rsp+88h] [rbp+37h]
  __int64 v10; // [rsp+90h] [rbp+3Fh]
  __int64 v11; // [rsp+98h] [rbp+47h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_3e42f0fdf336358029d789576155ad31_Traceguids, a1);
    v2 = WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    v3 = RtlDestroyMemoryZone(a1);
    if ( (v3 & 0xC0000000) != 0xC0000000 )
    {
LABEL_7:
      v2 = WPP_GLOBAL_Control;
      goto LABEL_8;
    }
    v2 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_3e42f0fdf336358029d789576155ad31_Traceguids, a1);
      goto LABEL_7;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_8:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_QWORD *)&EventTrace[48] = 0LL;
    *(_DWORD *)&EventTrace[56] = 0;
    v9 = 0LL;
    v10 = 0LL;
    v6 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    strcpy(EventTrace, "x");
    v11 = v3;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_MEMORY;
    *(_WORD *)&EventTrace[4] = 1028;
    v5 = a1;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x40000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_(v2[2], 53LL, &WPP_3e42f0fdf336358029d789576155ad31_Traceguids);
}
