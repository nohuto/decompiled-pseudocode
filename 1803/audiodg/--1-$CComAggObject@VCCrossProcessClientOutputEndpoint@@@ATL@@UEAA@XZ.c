/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB10
 * Callers:
 *     ??_E?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004FFA0 (--_E-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004FE3C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::~CComAggObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 544) )
  {
    *(_BYTE *)(a1 + 544) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 504));
  }
}
