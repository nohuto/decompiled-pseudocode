/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x14002FE88
 * Callers:
 *     _ATL::CComObject_CStreamGroup_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140021959 (_ATL--CComObject_CStreamGroup_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CStreamGroup___::CreateInstance_::_1_::dtor$1 @ 0x140021ACC (_ATL--CComCreator_ATL--CComObject_CStreamGroup___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140034CD4 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140034D34 (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90 (--1CSubmixImpl@@QEAA@XZ.c)
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
