/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140051330
 * Callers:
 *     ??_E?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400517D0 (--_E-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CCrossProcessClientInputEndpoint>::~CComAggObject<CCrossProcessClientInputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientInputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint((CCrossProcessClientInputEndpoint *)(a1 + 24));
}
