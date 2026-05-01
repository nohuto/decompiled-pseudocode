/*
 * XREFs of ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1800CA438
 * Callers:
 *     ?GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800CCAD0 (-GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEA.c)
 * Callees:
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  CVirtualTouchpadExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::`vftable'{for `Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualTouchpadExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager'};
  *((_QWORD *)this + 1) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CVirtualTouchpadExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)this + 3) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = &CVirtualTouchpadExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 56, (char *)this + 48, 1LL);
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 68) = 360;
  *((_DWORD *)this + 66) = 420;
  *((_DWORD *)this + 67) = 420;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_BYTE *)this + 284) = 0;
  memset((char *)this + 288, 0, 0x28uLL);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 50) = (char *)this + 456;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = (char *)this + 360;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 51) = (char *)this + 416;
  *((_DWORD *)this + 104) = 0;
  *((_BYTE *)this + 420) = 0;
  *((_BYTE *)this + 480) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 58) = "TouchpadLaunched";
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 61) = 1LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  memset((char *)this + 496, 0, 0x90uLL);
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 45) = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  result = this;
  *((_BYTE *)this + 672) = 0;
  *((_DWORD *)this + 169) = 15;
  *(GUID *)((char *)this + 680) = GUID_NULL;
  *((_QWORD *)this + 87) = 0LL;
  *((_BYTE *)this + 704) = 0;
  *((_DWORD *)this + 177) = 17;
  *(GUID *)((char *)this + 712) = GUID_NULL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 4;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 100;
  return result;
}
