/*
 * XREFs of ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140057BFC
 * Callers:
 *     ??_E?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400582E0 (--_E-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::~CComAggObject<CSpatialCrossProcessServerInputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint((CSpatialCrossProcessServerInputEndpoint *)(a1 + 24));
}
