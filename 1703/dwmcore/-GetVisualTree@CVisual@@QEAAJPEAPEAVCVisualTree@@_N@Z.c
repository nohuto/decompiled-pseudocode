/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18001FFE8 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180048068 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18005C198 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B4BF8 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801311B4 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801A4320 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800861B8 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B6F34 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  struct CComposition *v6; // rdi
  CVisualTree *v7; // rax
  volatile signed __int32 *v8; // rax
  struct CVisualTree *v9; // rdi
  __int64 i; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 26);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 4) & 0x40000000) == 0 )
    goto LABEL_2;
  for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x2000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
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
    v7 = (CVisualTree *)WPF::ProcessHeapImpl::AllocClear(0x368uLL);
    if ( !v7 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3600, 1u, -2147024882, 0xCC2u);
    }
  }
  return v3;
}
