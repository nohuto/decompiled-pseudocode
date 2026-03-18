/*
 * XREFs of ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFAF8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@Win81@@YAIII@Z @ 0x1C01BF89C (-CalcDpi@Win81@@YAIII@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C01BFF34 (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillDpiInfo(
        Win81 *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  int v10; // r15d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagSIZE v15; // r8
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  struct _DPI_INFORMATION *v18; // r9
  __int64 v19; // [rsp+68h] [rbp+30h]
  __int64 v20; // [rsp+68h] [rbp+30h]

  v8 = 0;
  v9 = a4;
  v10 = (int)a3;
  *(_QWORD *)(a6 + 24) = *(_QWORD *)this;
  *(struct tagSIZE *)(a6 + 32) = *a2;
  v12 = *(unsigned int *)this;
  if ( (_DWORD)v12 && *((_DWORD *)this + 1) )
  {
    LODWORD(v19) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cx, v12, (__int64)a3, a4);
    HIDWORD(v19) = Win81::CalcDpi((Win81 *)(unsigned int)a2->cy, *((unsigned int *)this + 1), v13, v14);
    *(_QWORD *)(a6 + 40) = v19;
  }
  *(_DWORD *)(a6 + 64) = v10;
  LODWORD(v20) = 100 * v10 * *(_DWORD *)(a6 + 40) / 0x6900u;
  v15 = (struct tagSIZE)(100 * v10 * *(_DWORD *)(a6 + 44) / 0x6900u);
  HIDWORD(v20) = 100 * v10 * *(_DWORD *)(a6 + 44) / 0x6900u;
  *(_QWORD *)(a6 + 56) = v20;
  v16 = &unk_1C004C198;
  do
  {
    if ( (unsigned int)(((int)v20 + v15.cx) / 2) < *v16 )
      break;
    ++v8;
    ++v16;
  }
  while ( v8 < 4 );
  *(_DWORD *)(a6 + 12) = Win81::SatisfyMinResolutionBarForScaleIdx(
                           (Win81 *)v8,
                           (int)*a2,
                           v15,
                           (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const)(unsigned int)v20);
  Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v9, v17, a6, v18);
}
