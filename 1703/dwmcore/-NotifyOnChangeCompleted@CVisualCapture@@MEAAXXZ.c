/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180026FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18006B4C8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B4BF8 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this)
{
  struct CVisual *v2; // rdx

  if ( !*((_BYTE *)this + 288) )
  {
    v2 = (struct CVisual *)*((_QWORD *)this + 44);
    if ( v2 )
    {
      if ( CRenderTarget::SetRoot(this, v2) >= 0 )
        CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
    }
    *((_BYTE *)this + 288) = 1;
  }
}
