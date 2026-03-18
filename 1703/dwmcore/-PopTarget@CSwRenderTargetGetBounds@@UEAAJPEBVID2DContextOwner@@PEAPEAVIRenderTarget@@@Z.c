/*
 * XREFs of ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18003DBE0
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
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
      CBitmapOfDeviceBitmaps::AddRef((CSwRenderTargetGetBounds *)((char *)this - 24));
      *a3 = (struct IRenderTarget *)(((unsigned __int64)this - 8) & -(__int64)(v6 != 0LL));
    }
    else
    {
      *a3 = 0LL;
    }
  }
  return 0LL;
}
