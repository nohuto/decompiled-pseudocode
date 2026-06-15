/*
 * XREFs of ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x18002B5B0
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002AA4C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A1F4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18002C3B0 (--0CDriverListener@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
CVolumeLimitTrackerImpl *__fastcall CVolumeLimitTrackerImpl::CVolumeLimitTrackerImpl(CVolumeLimitTrackerImpl *this)
{
  int v2; // eax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVolumeLimitTrackerImpl::`vftable';
  memset((char *)this + 16, 0, 0x28uLL);
  v2 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  *((_QWORD *)this + 7) = 1LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 10;
  CDriverListener::CDriverListener((CVolumeLimitTrackerImpl *)((char *)this + 184));
  *((_QWORD *)this + 88) = 0LL;
  return this;
}
