/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400198E0
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001A060 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140002760 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140009410 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXXZ @ 0x14001BB50 (-Clear@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXXZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FC7C (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FD20 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FDC4 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  ULONGLONG TickCount64; // rax
  __int64 v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  if ( !v6 )
  {
    v7 = AERTGetDLLRTHeap();
    v8 = AERTAllocate(0x210uLL, v7);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 464) = 0;
      memset((void *)(v8 + 472), 0, 0x28uLL);
      *(_BYTE *)(v9 + 512) = 0;
      *(_QWORD *)v9 = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
      *(_QWORD *)(v9 + 8) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v9 + 16));
      *(_QWORD *)(v9 + 184) = &CCrossProcessEndpointTraceLogger::`vftable';
      *(GUID *)(v9 + 192) = GUID_00000000_0000_0000_0000_000000000000;
      *(_QWORD *)(v9 + 216) = 0LL;
      *(_QWORD *)(v9 + 224) = 0LL;
      *(_QWORD *)(v9 + 232) = 0LL;
      *(_QWORD *)(v9 + 240) = &g_CrossProcessTelemetryProvider;
      *(_QWORD *)(v9 + 248) = v9 + 192;
      memset((void *)(v9 + 256), 0, 0x20uLL);
      *(_QWORD *)(v9 + 208) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
      *(_QWORD *)(v9 + 296) = v9 + 208;
      *(_WORD *)(v9 + 304) = 0;
      *(_QWORD *)(v9 + 312) = 0LL;
      *(_QWORD *)(v9 + 288) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
      *(_BYTE *)(v9 + 320) = 0;
      *(_QWORD *)(v9 + 328) = 10000LL;
      *(_QWORD *)(v9 + 336) = 0LL;
      *(_QWORD *)(v9 + 344) = 5000LL;
      *(_QWORD *)(v9 + 352) = 0LL;
      *(_QWORD *)(v9 + 360) = 0LL;
      *(_QWORD *)(v9 + 368) = 30000LL;
      *(_QWORD *)(v9 + 376) = 0LL;
      TickCount64 = GetTickCount64();
      *(_BYTE *)(v9 + 320) = 0;
      *(_QWORD *)(v9 + 352) = TickCount64;
      *(_QWORD *)(v9 + 360) = TickCount64;
      *(_QWORD *)(v9 + 376) = TickCount64;
      v11 = *(_QWORD *)(v9 + 296);
      if ( v11 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
        if ( (char *)v12 == (char *)CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::Clear )
          CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::Clear();
        else
          v12();
      }
      *(_BYTE *)(v9 + 304) = 0;
      v13 = *(_QWORD *)(v9 + 296);
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 40LL))(
          v13,
          v9 + 320,
          v9 + 352,
          v9 + 360);
      *(_DWORD *)(v9 + 56) = 0;
      *(_QWORD *)(v9 + 64) = 0LL;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_DWORD *)(v9 + 80) = 0;
      *(_QWORD *)(v9 + 88) = 0LL;
      *(_QWORD *)(v9 + 104) = 0LL;
      *(_QWORD *)(v9 + 112) = 0LL;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_QWORD *)(v9 + 128) = 0LL;
      *(_DWORD *)(v9 + 144) = 1;
      *(_DWORD *)(v9 + 160) = 0;
      *(_QWORD *)(v9 + 168) = 0LL;
      *(_QWORD *)(v9 + 176) = 0LL;
      *(_QWORD *)(v9 + 392) = 0LL;
      *(_QWORD *)(v9 + 400) = 0LL;
      *(_QWORD *)(v9 + 408) = 0LL;
      *(_DWORD *)(v9 + 416) = 0;
      *(_QWORD *)(v9 + 424) = 0LL;
      *(_DWORD *)(v9 + 432) = 0;
      *(_QWORD *)(v9 + 448) = v9;
      *(_QWORD *)(v9 + 456) = 3LL;
      *(_QWORD *)(v9 + 520) = 0LL;
      *(_QWORD *)v9 = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
      *(_QWORD *)(v9 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
      *(_QWORD *)(v9 + 384) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
      *(_QWORD *)(v9 + 440) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL);
      if ( v14 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
        ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v9);
      else
        v14(v9);
      goto LABEL_14;
    }
    return 2147942414LL;
  }
  v16 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
  if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
    v16 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
  if ( !v16 )
  {
    v17 = AERTGetDLLRTHeap();
    v18 = AERTAllocate(0x238uLL, v17);
    if ( v18 )
      v9 = ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v18);
    else
      v9 = 0LL;
    if ( v9 )
    {
LABEL_42:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_14:
      *(_OWORD *)(v9 + 192) = *a2;
      *a4 = v9 + 8;
      return 0LL;
    }
    return 2147942414LL;
  }
  v19 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
  if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
    v19 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
  if ( !v19 )
  {
    v20 = AERTGetDLLRTHeap();
    v21 = AERTAllocate(0x210uLL, v20);
    if ( v21 )
      v9 = ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v21);
    else
      v9 = 0LL;
    if ( v9 )
      goto LABEL_42;
    return 2147942414LL;
  }
  v22 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
  if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
    v22 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
  if ( !v22 )
  {
    v23 = AERTGetDLLRTHeap();
    v24 = AERTAllocate(0x218uLL, v23);
    if ( v24 )
      v9 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v24);
    else
      v9 = 0LL;
    if ( v9 )
      goto LABEL_42;
    return 2147942414LL;
  }
  return 2147942450LL;
}
