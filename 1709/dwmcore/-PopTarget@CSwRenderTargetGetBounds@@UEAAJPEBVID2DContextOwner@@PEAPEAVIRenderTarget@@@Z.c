/*
 * XREFs of ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18002C760
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::PopTarget(
        CSwRenderTargetGetBounds *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  char *v6; // rbx

  --*((_DWORD *)this + 6);
  if ( a3 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      v6 = (char *)this - 24;
      CMILCOMBase::InternalAddRef((CSwRenderTargetGetBounds *)((char *)this - 24));
      *a3 = (struct IRenderTarget *)(((unsigned __int64)this - 8) & -(__int64)(v6 != 0LL));
    }
    else
    {
      *a3 = 0LL;
    }
  }
  return 0LL;
}
