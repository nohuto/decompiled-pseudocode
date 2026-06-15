/*
 * XREFs of ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x180021ED4
 * Callers:
 *     ??_ECVolumeLimitTrackerImpl@@UEAAPEAXI@Z @ 0x180021EA0 (--_ECVolumeLimitTrackerImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x180021F28 (-Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ.c)
 *     ??1CDriverListener@@UEAA@XZ @ 0x180023294 (--1CDriverListener@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVolumeLimitTrackerImpl::~CVolumeLimitTrackerImpl(CVolumeLimitTrackerImpl *this)
{
  *(_QWORD *)this = &CVolumeLimitTrackerImpl::`vftable';
  CVolumeLimitTrackerImpl::Shutdown(this);
  CDriverListener::~CDriverListener((CVolumeLimitTrackerImpl *)((char *)this + 184));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 136);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
