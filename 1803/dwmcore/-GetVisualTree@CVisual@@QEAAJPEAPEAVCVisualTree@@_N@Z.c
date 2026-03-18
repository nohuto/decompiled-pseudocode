/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C
 * Callers:
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x180042324 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180045378 (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARG.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4B70 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B5A68 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18014A004 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801FBBB8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800411E4 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004CFEC (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  struct CComposition *v6; // rdi
  CVisualTree *v7; // rax
  volatile signed __int32 *v8; // rax
  struct CVisualTree *v9; // rdi
  __int64 i; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v4 + 4) & 0x40000000) == 0 )
    goto LABEL_2;
  for ( i = v4 + 12; (*(_DWORD *)i & 0x7F000000) != 0x2000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  v13 = *(volatile signed __int32 **)(i + 4);
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
    *a2 = (struct CVisualTree *)v13;
  }
  else
  {
LABEL_2:
    v6 = (struct CComposition *)*((_QWORD *)this + 2);
    v7 = (CVisualTree *)WPF::ProcessHeapImpl::AllocClear(0x4C8uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v8 = (volatile signed __int32 *)CVisualTree::CVisualTree(v7, v6, this);
    v9 = (struct CVisualTree *)v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      CVisual::SetVisualTreeNoRef(this, (struct CVisualTree *)v8);
      *a2 = v9;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du);
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277284, 1u, -2147024882, 0xE00u);
    }
  }
  return v3;
}
