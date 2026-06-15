/*
 * XREFs of ??1CProcessSubmix@@QEAA@XZ @ 0x140030290
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CProcessSubmix___::CreateInstance_::_1_::dtor$1 @ 0x140020710 (_ATL--CComCreator_ATL--CComObject_CProcessSubmix___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CProcessSubmix_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140020E13 (_ATL--CComObject_CProcessSubmix_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x140045748 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x1400457A8 (--1-$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessSubmix::~CProcessSubmix(CProcessSubmix *this)
{
  CSubmixImpl::~CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
