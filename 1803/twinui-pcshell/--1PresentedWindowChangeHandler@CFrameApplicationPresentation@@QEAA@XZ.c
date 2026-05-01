/*
 * XREFs of ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800F9644
 * Callers:
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800F9724 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, &v2);
  if ( v2 != *((_QWORD *)this + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 568LL) + 520LL))(*(_QWORD *)(*(_QWORD *)this + 568LL));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
}
