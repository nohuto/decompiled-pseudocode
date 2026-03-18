/*
 * XREFs of ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180217F04
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801BD260 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801C6B38 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CDrawingContext *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  struct CObjectCache *ObjectCache; // rax
  char *v9; // rbx
  int v10; // edx
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // eax
  void **v14; // rsi

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL)) != 0LL )
  {
    v9[52] = 0;
    *(_QWORD *)v9 = &CEmptyRegionDrawListBrush::`vftable';
    *(_OWORD *)(v9 + 8) = _xmm;
    *((_QWORD *)v9 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v11 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v9 + 7) = v11;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = v9 + 80;
    *((_DWORD *)v9 + 20) = 0;
  }
  if ( v9 )
  {
    v12 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v9, a1, a2);
    if ( v12 >= 0 )
    {
      *a4 = v9;
      return (unsigned int)v12;
    }
    v14 = (void **)v9;
    v13 = 31;
  }
  else
  {
    v12 = -2147024882;
    v13 = 29;
    v14 = 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
  if ( v9 && v14 )
    CEmptyRegionDrawListBrush::`scalar deleting destructor'(v14, 1);
  return (unsigned int)v12;
}
