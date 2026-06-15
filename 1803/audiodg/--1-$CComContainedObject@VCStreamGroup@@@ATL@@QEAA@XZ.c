/*
 * XREFs of ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x14002EE7C
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$1 @ 0x140020907 (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComAggObject_CStreamGroup_::CComAggObject_CStreamGroup__::_1_::dtor$1 @ 0x140033B83 (_ATL--CComAggObject_CStreamGroup_--CComAggObject_CStreamGroup__--_1_--dtor$1.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CStreamGroup>::~CComContainedObject<CStreamGroup>(__int64 a1)
{
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 352) )
  {
    *(_BYTE *)(a1 + 352) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 312));
  }
}
