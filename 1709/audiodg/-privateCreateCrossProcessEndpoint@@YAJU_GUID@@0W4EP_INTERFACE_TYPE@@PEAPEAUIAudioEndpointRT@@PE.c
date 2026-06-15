/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140018E8C
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400024B0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400143D0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140016400 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140017868 (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050EAC (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050F50 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050FF4 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  void *v8; // rax
  CCrossProcessServerInputEndpoint *v9; // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( !v6 )
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v9 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x2B0uLL, v8);
    v10 = (__int64)v9;
    if ( v9 )
    {
      CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(v9);
      *(_QWORD *)v10 = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
      *(_QWORD *)(v10 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
      *(_QWORD *)(v10 + 384) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
      *(_QWORD *)(v10 + 440) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
      if ( v11 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
        ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v10);
      else
        v11(v10);
      goto LABEL_9;
    }
    return (unsigned int)-2147024882;
  }
  v13 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
  if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
    v13 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
  if ( v13 )
  {
    v16 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
    if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
      v16 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
    if ( v16 )
    {
      v19 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
      if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
        v19 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
      if ( v19 )
        return (unsigned int)-2147024846;
      v20 = (void *)AERTGetDLLRTHeap();
      v21 = AERTAllocate(0x218uLL, v20);
      if ( v21 )
        v10 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v21);
      else
        v10 = 0LL;
    }
    else
    {
      v17 = (void *)AERTGetDLLRTHeap();
      v18 = AERTAllocate(0x210uLL, v17);
      if ( v18 )
        v10 = ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v18);
      else
        v10 = 0LL;
    }
  }
  else
  {
    v14 = (void *)AERTGetDLLRTHeap();
    v15 = AERTAllocate(0x238uLL, v14);
    if ( v15 )
      v10 = ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v15);
    else
      v10 = 0LL;
  }
  if ( !v10 )
    return (unsigned int)-2147024882;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_9:
  *(_OWORD *)(v10 + 192) = *a2;
  *a4 = v10 + 8;
  return v7;
}
