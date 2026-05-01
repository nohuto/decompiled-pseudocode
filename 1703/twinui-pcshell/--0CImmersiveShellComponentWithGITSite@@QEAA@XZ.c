/*
 * XREFs of ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x180017500
 * Callers:
 *     ??0CApplicationManager@@QEAA@XZ @ 0x180007628 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x18002E1F8 (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     ??0CApplicationViewManager@@QEAA@XZ @ 0x1800711D8 (--0CApplicationViewManager@@QEAA@XZ.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x1800849A4 (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1800D2F30 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1800D33CC (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x1800E03AC (--0HolographicPositioner@@QEAA@XZ.c)
 *     ??0ViewEventDispatcher@@QEAA@XZ @ 0x1800F0DCC (--0ViewEventDispatcher@@QEAA@XZ.c)
 *     ??0XamlExplorerHostShellComponent@@QEAA@XZ @ 0x18011CBD0 (--0XamlExplorerHostShellComponent@@QEAA@XZ.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18016AD24 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite(
        CImmersiveShellComponentWithGITSite *this)
{
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 1);
  *((_QWORD *)this + 4) = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 5) = &CImmersiveShellComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 4) = &CImmersiveShellComponentWithGITSite::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 5) = &CImmersiveShellComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  return this;
}
