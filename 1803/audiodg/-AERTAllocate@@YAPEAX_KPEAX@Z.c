/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015B70
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017080 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001955C (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051520 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051658 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051790 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400518C8 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058B30 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058C68 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x140059174 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1400450A4 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x140045850 (WPP_SF_Pq.c)
 */

void *__fastcall AERTAllocate(size_t a1, void *a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _EVENT_TRACE_HEADER EventTrace; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+60h] [rbp-58h]
  int v13; // [rsp+68h] [rbp-50h]
  void *v14; // [rsp+70h] [rbp-48h]
  size_t v15; // [rsp+78h] [rbp-40h]
  __int64 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+88h] [rbp-30h]
  __int64 v18; // [rsp+90h] [rbp-28h]
  __int64 v19; // [rsp+98h] [rbp-20h]
  __int64 v20; // [rsp+A0h] [rbp-18h]
  __int64 v21; // [rsp+D0h] [rbp+18h] BYREF

  if ( g_bSkipRTHeap )
    return operator new(a1);
  v21 = 0LL;
  if ( !a2 )
  {
    v6 = -1073741670;
    goto LABEL_4;
  }
  v4 = RtlAllocateMemoryBlockLookaside(a2, a1, &v21);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741670 )
    {
      v8 = 0x100000LL;
      if ( a1 > 0x100000 )
        v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
      AERTAddMemoryToHeap(a2, v8);
      v6 = RtlAllocateMemoryBlockLookaside(a2, a1, &v21);
      if ( v6 >= 0 )
        goto LABEL_4;
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
      {
        goto LABEL_4;
      }
      v10 = 35LL;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
      {
        goto LABEL_4;
      }
      v10 = 36LL;
    }
    WPP_SF_Pq(v9[2], v10, v5, a1, a2);
  }
LABEL_4:
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.UserTime = 0x20000;
    EventTrace.Size = 120;
    v20 = v6;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_MEMORY;
    LOWORD(EventTrace.Version) = 1286;
    v12 = 0LL;
    v13 = 0;
    v14 = a2;
    v18 = 0LL;
    v19 = 0LL;
    v15 = a1;
    v17 = 0LL;
    v16 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  return (void *)v21;
}
