/*
 * XREFs of ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x180070EA4
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070600 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 */

void __fastcall CDrawListBrush::SetNineGridLayout(
        CDrawListBrush *this,
        const struct Matrix3x3 *a2,
        const struct SamplerMode *a3,
        const struct Insets *a4,
        const struct Insets *a5,
        bool a6)
{
  __int64 v6; // r8
  _OWORD *v7; // r9
  __int64 v8; // r10

  *((_DWORD *)this + 6) = 0;
  CopyIfNeeded_Matrix3x3_((char *)this + 28, a2);
  if ( v8 + 64 != v6 )
  {
    *(_WORD *)(v8 + 64) = *(_WORD *)v6;
    *(_BYTE *)(v8 + 66) = *(_BYTE *)(v6 + 2);
  }
  *(_DWORD *)(v8 + 24) = 1;
  if ( (_OWORD *)(v8 + 68) != v7 )
    *(_OWORD *)(v8 + 68) = *v7;
  if ( (const struct Insets *)(v8 + 84) != a5 )
    *(_OWORD *)(v8 + 84) = *(_OWORD *)a5;
  *(_BYTE *)(v8 + 100) = a6;
}
