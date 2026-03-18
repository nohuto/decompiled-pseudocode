/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0008844
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0008960 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0008A64 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0008AE0 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0008B20 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C003763C (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        const struct tagSIZE *a3,
        int a4,
        DpiInternal *a5,
        unsigned int a6,
        int a7,
        struct _DPI_INFORMATION *a8)
{
  struct tagSIZE v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int PlateauIndexForScaleFactor; // eax
  unsigned int v17; // edx
  bool v18; // zf
  int v19; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v20; // [rsp+20h] [rbp-8h]
  struct _DPI_INFORMATION *v21; // [rsp+20h] [rbp-8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v22; // [rsp+68h] [rbp+40h]

  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v13.cx || !v13.cy )
    v13 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v13;
  *((_DWORD *)a8 + 16) = a4;
  if ( a4 == 0xFFFF )
  {
    v14 = (unsigned int)(a3[1].cx - 1);
    if ( a3[1].cx != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * *((_DWORD *)a8 + 9)) / *(_DWORD *)(*(_QWORD *)&a3[2] + 4 * v14) >= 0x2D0 )
          break;
        v18 = (_DWORD)v14 == 1;
        v14 = (unsigned int)(v14 - 1);
      }
      while ( !v18 );
    }
    v19 = 100;
    if ( (_DWORD)v14 )
      v19 = *(_DWORD *)(*(_QWORD *)&a3[3] + 4LL * (unsigned int)(v14 - 1)) + 1;
    LODWORD(v22) = v19;
    HIDWORD(v22) = v19;
  }
  else
  {
    LODWORD(v22) = 100 * a4 * *((_DWORD *)a8 + 10) / 0x6900u;
    v14 = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
    HIDWORD(v22) = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
  }
  v15 = a6;
  *((_QWORD *)a8 + 7) = v22;
  if ( !a6 )
    v15 = (unsigned int)((HIDWORD(v22) + (int)v22) / 2);
  PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                 (DpiInternal *)v15,
                                 (unsigned int)a3,
                                 (const struct _DPI_SCALE_FACTOR_COLLECTION *)v14);
  *((_DWORD *)a8 + 3) = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
                          (DpiInternal *)PlateauIndexForScaleFactor,
                          0,
                          (int)*this,
                          (struct tagSIZE)a3,
                          v20);
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, v17, (int)a3, a8, v21);
}
