/*
 * XREFs of ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140035494
 * Callers:
 *     ??_G?$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140035530 (--_G-$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComAggObject<CStreamGroup>::~CComAggObject<CStreamGroup>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CStreamGroup::~CStreamGroup((CStreamGroup *)(a1 + 24));
}
