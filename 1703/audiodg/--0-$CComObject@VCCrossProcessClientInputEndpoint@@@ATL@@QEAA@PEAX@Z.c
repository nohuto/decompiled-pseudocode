/*
 * XREFs of ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FC7C
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400198E0 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051A60 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14004FEA4 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 48) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)a1 + 49) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)a1 + 50) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)a1 + 54) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *((_QWORD *)a1 + 57) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
