/*
 * XREFs of ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400448D8
 * Callers:
 *     ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140044940 (--_E-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 368) )
  {
    *(_BYTE *)(a1 + 368) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 328));
  }
}
