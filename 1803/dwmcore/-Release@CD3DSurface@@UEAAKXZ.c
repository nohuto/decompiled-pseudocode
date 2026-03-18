/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180042A20
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?Release@CD3DSurface@@WBI@EAAKXZ @ 0x1800DDEC0 (-Release@CD3DSurface@@WBI@EAAKXZ.c)
 *     ?Release@CD3DSurface@@WHI@EAAKXZ @ 0x1800DDED0 (-Release@CD3DSurface@@WHI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, CD3DSurface *); // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, CD3DSurface *))*((_QWORD *)this + 2);
    if ( v4 )
      (**v4)(v4, this);
    else
      (*(void (__fastcall **)(CD3DSurface *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  }
  return v2;
}
