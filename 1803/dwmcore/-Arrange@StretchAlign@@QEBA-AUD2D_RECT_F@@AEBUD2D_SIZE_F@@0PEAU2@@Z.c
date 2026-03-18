/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18013F168
 * Callers:
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801A6C50 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
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
  float v6; // xmm1_4
  float width; // xmm5_4
  float height; // xmm0_4
  struct D2D_RECT_F v10; // [rsp+0h] [rbp-20h]
  struct D2D_RECT_F v11; // [rsp+0h] [rbp-20h]
  struct D2D_RECT_F v12; // [rsp+10h] [rbp-10h]
  __int64 v13; // [rsp+30h] [rbp+10h]

  v5 = *((_DWORD *)this + 2);
  v13 = 0LL;
  if ( !v5 )
  {
    v13 = (__int64)*a3;
    goto LABEL_10;
  }
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v6 = a3->width / a3->height;
      width = a4->width;
      height = a4->width / v6;
      if ( height >= a4->height != (v5 == 3) )
      {
        height = a4->height;
        width = height * v6;
      }
      goto LABEL_11;
    }
LABEL_10:
    width = *(float *)&v13;
    height = *((float *)&v13 + 1);
LABEL_11:
    v11.top = (float)(a4->height - height) * *((float *)this + 1);
    v11.left = (float)(a4->width - width) * *(float *)this;
    v12.left = fmaxf(0.0, v11.left);
    *(_QWORD *)&v12.top = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(width + v11.left, a4->width)),
                            COERCE_UNSIGNED_INT(fmaxf(0.0, v11.top)));
    v12.bottom = fminf(v11.top + height, a4->height);
    if ( a5 )
    {
      v11.right = width + v11.left;
      v11.bottom = v11.top + height;
      *a5 = v11;
    }
    *retstr = v12;
    return retstr;
  }
  *(_QWORD *)&v10.left = 0LL;
  *(struct D2D_SIZE_F *)&v10.right = *a4;
  if ( a5 )
    *a5 = v10;
  *retstr = v10;
  return retstr;
}
