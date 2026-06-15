/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB70
 * Callers:
 *     ??_G?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004FFE0 (--_G-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CCrossProcessServerInputEndpoint>::~CComAggObject<CCrossProcessServerInputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerInputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 536) )
  {
    *(_BYTE *)(a1 + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
}
