/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x18000CC10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x180042324 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18005F25C (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this)
{
  struct CVisual *v2; // rdx

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = (struct CVisual *)*((_QWORD *)this + 51);
    if ( v2 )
    {
      if ( CRenderTarget::SetRoot(this, v2) >= 0
        && (int)CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this) >= 0 )
      {
        *((_BYTE *)this + 448) = 1;
        *((_BYTE *)this + 266) = 1;
      }
    }
  }
}
