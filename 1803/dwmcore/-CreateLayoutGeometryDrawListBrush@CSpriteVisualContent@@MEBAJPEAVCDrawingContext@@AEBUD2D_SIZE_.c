/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18009CDB0
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180003F40 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CSpriteVisualContent::CreateLayoutGeometryDrawListBrush(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  int Current; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char *v9; // rax
  int v10; // r8d
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  __int128 v13; // xmm0
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Current = CThreadContext::GetCurrent((struct CThreadContext **)&v15);
  v7 = 0;
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v8 = v15;
  v9 = 0LL;
  v10 = *(_DWORD *)(v15 + 188);
  if ( v10 )
  {
    v9 = *(char **)(v15 + 192);
    *(_QWORD *)(v15 + 192) = *(_QWORD *)v9;
    *(_DWORD *)(v8 + 188) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x38uLL)) != 0LL )
  {
    v9[52] = 0;
    *(_QWORD *)v9 = &CGeometryOnlyDrawListBrush::`vftable';
    *(_OWORD *)(v9 + 8) = _xmm;
    *((_QWORD *)v9 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    width = a3->width;
    height = a3->height;
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
    v13 = v15;
    v9[52] = 1;
    *((_DWORD *)v9 + 12) = 50529027;
    *((_OWORD *)v9 + 2) = v13;
    *a4 = (struct CDrawListBrush *)v9;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB7u);
  }
  return v7;
}
