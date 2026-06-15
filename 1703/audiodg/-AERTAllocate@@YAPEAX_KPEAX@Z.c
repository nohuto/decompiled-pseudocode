/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015520 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400198E0 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051A60 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051B90 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051CC0 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051DF0 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?Initialize@CFadeWindowLUT@@QEAAJIIH@Z @ 0x1400570D4 (-Initialize@CFadeWindowLUT@@QEAAJIIH@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058820 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058950 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x140058E54 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140045EC8 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x140046674 (WPP_SF_Pq.c)
 */

__int64 __fastcall AERTAllocate(unsigned __int64 a1, void *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _BYTE EventTrace[64]; // [rsp+30h] [rbp-88h] BYREF
  void *v12; // [rsp+70h] [rbp-48h]
  unsigned __int64 v13; // [rsp+78h] [rbp-40h]
  __int64 v14; // [rsp+80h] [rbp-38h]
  __int64 v15; // [rsp+88h] [rbp-30h]
  __int64 v16; // [rsp+90h] [rbp-28h]
  __int64 v17; // [rsp+98h] [rbp-20h]
  __int64 v18; // [rsp+A0h] [rbp-18h]
  __int64 v19; // [rsp+C0h] [rbp+8h] BYREF

  v19 = 0LL;
  if ( !a2 )
  {
    v6 = -1073741670;
    goto LABEL_3;
  }
  v4 = RtlAllocateMemoryBlockLookaside(a2, a1, &v19);
  v6 = v4;
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741670 )
  {
    if ( a1 <= 0x100000 )
      v8 = 0x100000LL;
    else
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    v6 = RtlAllocateMemoryBlockLookaside(a2, a1, &v19);
    if ( v6 >= 0 )
      goto LABEL_3;
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_3;
    }
    v10 = 35LL;
    goto LABEL_20;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    v10 = 36LL;
LABEL_20:
    WPP_SF_Pq(v9[2], v10, v5, a1, a2);
  }
LABEL_3:
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[44] = 0x20000;
    strcpy(EventTrace, "x");
    v18 = v6;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_MEMORY;
    *(_WORD *)&EventTrace[4] = 1286;
    *(_QWORD *)&EventTrace[48] = 0LL;
    *(_DWORD *)&EventTrace[56] = 0;
    v12 = a2;
    v16 = 0LL;
    v17 = 0LL;
    v13 = a1;
    v15 = 0LL;
    v14 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  return v19;
}
