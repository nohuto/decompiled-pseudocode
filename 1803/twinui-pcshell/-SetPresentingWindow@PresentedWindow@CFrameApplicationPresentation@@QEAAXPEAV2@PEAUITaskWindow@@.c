/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800F9724
 * Callers:
 *     _lambda_f5c3a3508d94124ca65af9e8c1942170_::operator() @ 0x180136824 (_lambda_f5c3a3508d94124ca65af9e8c1942170_--operator().c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800F9644 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800F96B8 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        unsigned __int64 a4)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7,
    a2);
  if ( *((_OWORD *)this + 1) != __PAIR128__(a4, (unsigned __int64)a3) )
    *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a3);
  *((_QWORD *)this + 3) = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
}
