/*
 * XREFs of ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1800B63E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B5A88 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18018C008 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v9));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
