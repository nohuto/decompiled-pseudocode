/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E814 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E984 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A6A40 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A81C0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B9014 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800BEE20 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18014B010 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180151F30 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  SIZE_T v18; // r8
  unsigned __int64 v19; // r13
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v5 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v7 = *v5;
  else
    v7 = *(_QWORD *)this & 1LL;
  if ( a3 > v7 )
  {
    v21 = 42;
LABEL_38:
    v8 = -2147024809;
LABEL_40:
    v20 = v8;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
    return v8;
  }
  v8 = 0;
  if ( (a2 & 3) != 0 )
  {
    v21 = 52;
    goto LABEL_38;
  }
  if ( !v7 )
  {
    *(_QWORD *)this = a2 | 1;
    return v8;
  }
  if ( v7 == 1 )
  {
    v11 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = (unsigned __int64)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    if ( !v12 )
      v8 = -2147024882;
    if ( (v8 & 0x80000000) == 0 )
    {
      *(_QWORD *)v12 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v11;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v12 | 2;
      return v8;
    }
    v21 = 87;
    goto LABEL_40;
  }
  v10 = v5[1];
  if ( v7 != v10 )
  {
    if ( a3 < v7 )
      memmove(&v5[a3 + 3], &v5[a3 + 2], 8 * (v7 - a3));
    v5[a3 + 2] = a2;
    ++*v5;
    return v8;
  }
  v13 = 0LL;
  v14 = (double)(int)v10;
  if ( v10 < 0 )
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
  if ( v17 <= v10 )
  {
    v21 = 122;
    v8 = -2147024882;
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
      v8 = -2147024882;
  }
  else
  {
    v8 = -2147024809;
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v21 = 130;
    goto LABEL_40;
  }
  v19 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((void *)(v13 + 16), (const void *)(v19 + 16), 8 * a3);
  *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
  if ( a3 < v7 )
    memcpy_0((void *)(v13 + 8 * (a3 + 3)), (const void *)(v19 + 8 * a3 + 16), 8 * (v7 - a3));
  operator delete((void *)v19);
  *(_QWORD *)v13 = v7 + 1;
  *(_QWORD *)(v13 + 8) = v17 - 2;
  *(_QWORD *)this = v13 | 2;
  return v8;
}
