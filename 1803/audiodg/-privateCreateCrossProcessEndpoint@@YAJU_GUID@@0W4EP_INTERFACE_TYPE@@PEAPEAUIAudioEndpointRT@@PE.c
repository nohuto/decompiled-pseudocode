/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001955C
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003850 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140015890 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015B70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140017EE8 (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F62C (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F6D0 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F774 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  void *v8; // rax
  CCrossProcessServerInputEndpoint *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(__int64, volatile int *); // rax
  __int64 v14; // rax
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  void *v21; // rax
  void *v22; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( !v6 )
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v9 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x2B0uLL, v8);
    v11 = (__int64)v9;
    if ( v9 )
    {
      CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(v9);
      *(_QWORD *)v11 = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
      *(_QWORD *)(v11 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
      *(_QWORD *)(v11 + 384) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
      *(_QWORD *)(v11 + 440) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      v12 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 8LL);
      if ( v12 == ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef )
        ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(v11, v10);
      else
        ((void (__fastcall *)(__int64))v12)(v11);
      goto LABEL_9;
    }
    return (unsigned int)-2147024882;
  }
  v14 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
  if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
    v14 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
  if ( v14 )
  {
    v17 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
    if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
      v17 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
    if ( v17 )
    {
      v20 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
      if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
        v20 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
      if ( v20 )
        return (unsigned int)-2147024846;
      v21 = (void *)AERTGetDLLRTHeap();
      v22 = AERTAllocate(0x218uLL, v21);
      if ( v22 )
        v11 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v22);
      else
        v11 = 0LL;
    }
    else
    {
      v18 = (void *)AERTGetDLLRTHeap();
      v19 = AERTAllocate(0x210uLL, v18);
      if ( v19 )
        v11 = ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v19);
      else
        v11 = 0LL;
    }
  }
  else
  {
    v15 = (void *)AERTGetDLLRTHeap();
    v16 = AERTAllocate(0x238uLL, v15);
    if ( v16 )
      v11 = ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v16);
    else
      v11 = 0LL;
  }
  if ( !v11 )
    return (unsigned int)-2147024882;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_9:
  *(_OWORD *)(v11 + 192) = *a2;
  *a4 = v11 + 8;
  return v7;
}
