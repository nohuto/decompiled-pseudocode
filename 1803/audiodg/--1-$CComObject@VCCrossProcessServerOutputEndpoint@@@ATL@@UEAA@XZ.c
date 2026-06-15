/*
 * XREFs of ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FD98
 * Callers:
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050320 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::~CComObject<CCrossProcessServerOutputEndpoint>(
        CCrossProcessBaseServerEndpoint *this)
{
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)this + 55) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_DWORD *)this + 116) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  }
}
