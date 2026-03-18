/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x1800C1524
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float width; // xmm0_4
  struct D2D_RECT_F v7; // xmm0
  struct D2D_RECT_F *result; // rax
  float height; // xmm5_4
  float v10; // xmm1_4
  struct D2D_RECT_F v11; // [rsp+0h] [rbp-40h]
  struct D2D_RECT_F v12; // [rsp+0h] [rbp-40h]
  struct D2D_RECT_F v13; // [rsp+18h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+10h]

  v5 = *((_DWORD *)this + 2);
  HIDWORD(v14) = 0;
  width = 0.0;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      *(_QWORD *)&v11.left = 0LL;
      *(struct D2D_SIZE_F *)&v11.right = *a4;
      v7 = v11;
      if ( a5 )
        *a5 = v11;
      goto LABEL_5;
    }
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v10 = a3->width / a3->height;
      width = a4->width;
      height = a4->width / v10;
      if ( height >= a4->height != (v5 == 3) )
      {
        height = a4->height;
        width = height * v10;
      }
      goto LABEL_8;
    }
  }
  else
  {
    v14 = (__int64)*a3;
    LODWORD(width) = *(const struct D2D_SIZE_F *)&a3->width;
  }
  height = *((float *)&v14 + 1);
LABEL_8:
  v12.left = (float)(a4->width - width) * *(float *)this;
  v12.top = (float)(a4->height - height) * *((float *)this + 1);
  *(_QWORD *)&v13.left = __PAIR64__(COERCE_UNSIGNED_INT(fmaxf(0.0, v12.top)), COERCE_UNSIGNED_INT(fmaxf(0.0, v12.left)));
  *(_QWORD *)&v13.right = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(v12.top + height, a4->height)),
                            COERCE_UNSIGNED_INT(fminf(v12.left + width, a4->width)));
  if ( a5 )
  {
    v12.right = v12.left + width;
    v12.bottom = v12.top + height;
    *a5 = v12;
  }
  v7 = v13;
LABEL_5:
  result = retstr;
  *retstr = v7;
  return result;
}
