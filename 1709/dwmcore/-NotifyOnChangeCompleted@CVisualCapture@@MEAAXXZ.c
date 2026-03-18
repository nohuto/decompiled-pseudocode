/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180078BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180079310 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this)
{
  struct CVisual *v2; // rdx

  if ( !*((_BYTE *)this + 384) )
  {
    v2 = (struct CVisual *)*((_QWORD *)this + 44);
    if ( v2 )
    {
      if ( CRenderTarget::SetRoot(this, v2) >= 0
        && (int)CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this) >= 0 )
      {
        *((_BYTE *)this + 384) = 1;
        *((_BYTE *)this + 210) = 1;
      }
    }
  }
}
