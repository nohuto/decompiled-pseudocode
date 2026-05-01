/*
 * XREFs of ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800F96B8
 * Callers:
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800F9724 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 */

// Hidden C++ exception states: #wind=1
CFrameApplicationPresentation::PresentedWindowChangeHandler *__fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this,
        struct CFrameApplicationPresentation *a2)
{
  __int64 *v3; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 56LL))(
                    a2,
                    &v5);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)this + 1, v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return this;
}
