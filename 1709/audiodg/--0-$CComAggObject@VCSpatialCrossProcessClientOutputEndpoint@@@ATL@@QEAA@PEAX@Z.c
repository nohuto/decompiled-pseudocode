/*
 * XREFs of ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140059B00
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005ACE0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14005A020 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint((CSpatialCrossProcessClientOutputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[2] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  v4[3] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v4[113] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  v4[114] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  v4[115] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  v4[121] = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  v4[123] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
