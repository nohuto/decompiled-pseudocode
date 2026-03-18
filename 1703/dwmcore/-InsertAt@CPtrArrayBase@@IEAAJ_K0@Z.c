/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48
 * Callers:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x180010344 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18009F610 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800C05AC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18013FEF0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801446E0 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180160250 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  SIZE_T v18; // r8
  unsigned __int64 v19; // r13
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)this;
  v4 = 0;
  if ( (*(_QWORD *)this & 2) != 0 )
    v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v8 = *(_QWORD *)this & 1LL;
  if ( a3 > v8 )
  {
    v21 = 42;
LABEL_38:
    v4 = -2147024809;
LABEL_40:
    v20 = v4;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
    return v4;
  }
  if ( (a2 & 3) != 0 )
  {
    v21 = 52;
    goto LABEL_38;
  }
  if ( !v8 )
  {
    *(_QWORD *)this = a2 | 1;
    return v4;
  }
  v10 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v8 == 1 )
  {
    v12 = (unsigned __int64)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    if ( !v12 )
      v4 = -2147024882;
    if ( (v4 & 0x80000000) == 0 )
    {
      *(_QWORD *)v12 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v12 | 2;
      return v4;
    }
    v21 = 87;
    goto LABEL_40;
  }
  v11 = v10[1];
  if ( v8 != v11 )
  {
    if ( a3 < v8 )
      memmove(&v10[a3 + 3], &v10[a3 + 2], 8 * (v8 - a3));
    v10[a3 + 2] = a2;
    ++*v10;
    return v4;
  }
  v13 = 0LL;
  v14 = (double)(int)v11;
  if ( v11 < 0 )
    v14 = v14 + 1.844674407370955e19;
  v15 = v14 * 1.5;
  v16 = 0LL;
  if ( v15 >= 9.223372036854776e18 )
  {
    v15 = v15 - 9.223372036854776e18;
    if ( v15 < 9.223372036854776e18 )
      v16 = 0x8000000000000000uLL;
  }
  v17 = v16 + (unsigned int)(int)v15 + 2LL;
  if ( v17 <= v11 )
  {
    v21 = 122;
    v4 = -2147024882;
    v20 = -2147024882;
    goto LABEL_42;
  }
  if ( v17 && 0xFFFFFFFFFFFFFFFFuLL / v17 > 8 )
  {
    v18 = 8 * v17;
    if ( !(8 * v17) )
      v18 = 1LL;
    v13 = (unsigned __int64)HeapAlloc(WPF::g_processHeap, 0, v18);
    if ( !v13 )
      v4 = -2147024882;
  }
  else
  {
    v4 = -2147024809;
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    v21 = 130;
    goto LABEL_40;
  }
  v19 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((void *)(v13 + 16), (const void *)(v19 + 16), 8 * a3);
  *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
  if ( a3 < v8 )
    memcpy_0((void *)(v13 + 8 * (a3 + 3)), (const void *)(v19 + 8 * a3 + 16), 8 * (v8 - a3));
  WPF::ProcessHeapImpl::Free((void *)v19);
  *(_QWORD *)v13 = v8 + 1;
  *(_QWORD *)(v13 + 8) = v17 - 2;
  *(_QWORD *)this = v13 | 2;
  return v4;
}
