/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140051390
 * Callers:
 *     ??_E?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140051810 (--_E-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::~CComAggObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint((CCrossProcessClientInputEndpoint *)(a1 + 24));
}
