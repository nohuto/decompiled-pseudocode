/*
 * XREFs of ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F6D0
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001955C (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051658 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004F8F4 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientOutputEndpoint *a1)
{
  CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 48) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)a1 + 49) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)a1 + 50) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)a1 + 54) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)a1 + 57) = &ATL::CComObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessControl'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
