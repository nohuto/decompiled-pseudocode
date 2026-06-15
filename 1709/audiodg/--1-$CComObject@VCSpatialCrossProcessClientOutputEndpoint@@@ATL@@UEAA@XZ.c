/*
 * XREFs of ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005A398
 * Callers:
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005AB00 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::~CComObject<CSpatialCrossProcessClientOutputEndpoint>(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 113) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 114) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 115) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 121) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  *((_DWORD *)this + 246) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(this);
}
