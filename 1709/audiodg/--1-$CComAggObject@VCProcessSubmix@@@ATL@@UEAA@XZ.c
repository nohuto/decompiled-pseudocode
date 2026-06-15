/*
 * XREFs of ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400464D8
 * Callers:
 *     ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140046540 (--_E-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CProcessSubmix::~CProcessSubmix((CProcessSubmix *)(a1 + 24));
}
