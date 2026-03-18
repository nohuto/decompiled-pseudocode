/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801B6960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        struct D2D_RECT_F *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  bool v6; // al
  _OWORD *v7; // r8
  _OWORD *v8; // r9
  float v9; // xmm5_4
  float left; // xmm2_4
  float top; // xmm3_4
  float right; // xmm1_4
  float bottom; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  _OWORD *result; // rax
  struct D2D_RECT_F v17; // [rsp+20h] [rbp-18h] BYREF

  v17 = *a3;
  v6 = IsEmpty(&v17);
  left = v17.left;
  top = v17.top;
  right = v17.right;
  bottom = v17.bottom;
  if ( !v6 )
  {
    left = v17.left - v9;
    top = v17.top - v9;
    right = v17.right + v9;
    bottom = v17.bottom + v9;
  }
  *(_OWORD *)a5 = *v8;
  if ( left > *(float *)a5 )
    *(float *)a5 = left;
  if ( top > *(float *)(a5 + 4) )
    *(float *)(a5 + 4) = top;
  v14 = *(float *)(a5 + 8);
  if ( v14 > right )
  {
    *(float *)(a5 + 8) = right;
    v14 = right;
  }
  v15 = *(float *)(a5 + 12);
  if ( v15 > bottom )
  {
    *(float *)(a5 + 12) = bottom;
    v15 = bottom;
    v14 = *(float *)(a5 + 8);
  }
  if ( v14 <= *(float *)a5 || v15 <= *(float *)(a5 + 4) )
  {
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)a5 = 0LL;
  }
  result = a6;
  *a6 = *v7;
  return result;
}
