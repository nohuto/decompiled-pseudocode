/*
 * XREFs of ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1800CA650
 * Callers:
 *     <none>
 * Callees:
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800C9D5C (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1801DB104 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::`vector deleting destructor'(
        CVirtualTouchpadExperienceManager *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx

  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 93);
  if ( v4 )
    (**v4)(v4, 1LL);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CVirtualTouchpadExperienceManager *)((char *)this + 704));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CVirtualTouchpadExperienceManager *)((char *)this + 672));
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((CVirtualTouchpadExperienceManager *)((char *)this + 360));
  v5 = *((_QWORD *)this + 43);
  if ( v5 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 42);
  if ( v6 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 41);
  if ( v7 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CVirtualTouchpadExperienceManager *)((char *)this + 56));
  v9 = *((_QWORD *)this + 5);
  if ( v9 < 0 )
  {
    v10 = (volatile signed __int32 *)(2 * v9);
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v10 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 32LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
