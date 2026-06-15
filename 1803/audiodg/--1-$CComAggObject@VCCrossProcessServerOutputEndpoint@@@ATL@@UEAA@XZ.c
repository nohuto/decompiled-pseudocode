/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FBD0
 * Callers:
 *     ??_G?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050020 (--_G-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::~CComAggObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 536) )
  {
    *(_BYTE *)(a1 + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
}
