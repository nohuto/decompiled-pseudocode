/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10
 * Callers:
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000A0F4 (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18000F298 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AC9E4 (-FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ACD0C (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 *     ?CreateNewD2DCommandList@CAtlasedRectsGroup@@IEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1800AF1A4 (-CreateNewD2DCommandList@CAtlasedRectsGroup@@IEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAV.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180165E28 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(SIZE_T dwBytes, struct ID2D1PrivateCompositorBuffer **a2)
{
  int v3; // esi
  unsigned int v4; // edi
  SIZE_T v5; // r8
  LPVOID v6; // rbp
  char *v7; // rax
  char *v8; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = dwBytes;
  v4 = 0;
  v5 = (unsigned int)dwBytes;
  if ( !(_DWORD)dwBytes )
    v5 = 1LL;
  v6 = HeapAlloc(WPF::g_processHeap, 0, v5);
  if ( v6 )
  {
    v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    v8 = v7;
    if ( !v7 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    memset_0(v7, 0, 0x30uLL);
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 3) = v6;
    *((_QWORD *)v8 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_DWORD *)v8 + 8) = v3;
    *((_QWORD *)v8 + 5) = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    *a2 = (struct ID2D1PrivateCompositorBuffer *)(v8 + 16);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Cu);
  }
  return v4;
}
