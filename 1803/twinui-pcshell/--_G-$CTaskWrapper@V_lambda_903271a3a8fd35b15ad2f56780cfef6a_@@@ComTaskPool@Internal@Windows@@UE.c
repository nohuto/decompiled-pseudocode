/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_903271a3a8fd35b15ad2f56780cfef6a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801369B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_903271a3a8fd35b15ad2f56780cfef6a_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 6));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
