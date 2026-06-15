/*
 * XREFs of ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x14002EEAC
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CProcessSubmix___::CreateInstance_::_1_::dtor$1 @ 0x14002095E (_ATL--CComCreator_ATL--CComObject_CProcessSubmix___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComAggObject_CProcessSubmix_::CComAggObject_CProcessSubmix__::_1_::dtor$1 @ 0x1400448C8 (_ATL--CComAggObject_CProcessSubmix_--CComAggObject_CProcessSubmix__--_1_--dtor$1.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CProcessSubmix>::~CComContainedObject<CProcessSubmix>(__int64 a1)
{
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 344) )
  {
    *(_BYTE *)(a1 + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 304));
  }
}
