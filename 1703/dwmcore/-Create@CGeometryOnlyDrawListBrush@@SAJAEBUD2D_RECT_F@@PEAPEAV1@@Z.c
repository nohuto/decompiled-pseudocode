/*
 * XREFs of ?Create@CGeometryOnlyDrawListBrush@@SAJAEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800C0104
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800BFAC0 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 */

__int64 __fastcall CGeometryOnlyDrawListBrush::Create(struct D2D_RECT_F *a1, struct CGeometryOnlyDrawListBrush **a2)
{
  unsigned int v4; // ebx
  struct CObjectCache *ObjectCache; // rax
  char *v6; // r8
  int v7; // r10d
  __int128 v8; // xmm0

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CGeometryOnlyDrawListBrush *)a1);
  v6 = 0LL;
  v7 = *((_DWORD *)ObjectCache + 1);
  if ( v7 )
  {
    v6 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
    *((_DWORD *)ObjectCache + 1) = v7 - 1;
  }
  if ( v6 || (v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL)) != 0LL )
  {
    v8 = (__int128)*a1;
    *(_QWORD *)v6 = &CGeometryOnlyDrawListBrush::`vftable';
    *(_OWORD *)(v6 + 8) = v8;
  }
  else
  {
    v6 = 0LL;
  }
  *a2 = (struct CGeometryOnlyDrawListBrush *)v6;
  if ( !v6 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x95u);
  }
  return v4;
}
