/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x140030240
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$1 @ 0x140020770 (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CStreamGroup_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140020DB0 (_ATL--CComObject_CStreamGroup_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140035494 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x1400354F4 (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  CSubmixImpl::~CSubmixImpl((CStreamGroup *)((char *)this + 24));
  if ( *((_BYTE *)this + 352) )
  {
    *((_BYTE *)this + 352) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  }
}
