/*
 * XREFs of ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801A6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18013F168 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CViewBox::GetRealization(
        const struct D2D_SIZE_F *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  FLOAT width; // xmm2_4
  float *v8; // r8
  int v9; // xmm1_4
  __int128 v10; // xmm0
  unsigned __int64 v11; // xmm1_8
  float v12[6]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]
  struct D2D_RECT_F v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]

  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this[28].width) & _xmm);
  if ( v5 < 0.0000011920929 || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this[28].height) & _xmm), v6 < 0.0000011920929) )
  {
    v10 = _xmm;
    v11 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    StretchAlign::Arrange((StretchAlign *)&this[29], &v15, this + 28, a2, 0LL);
    v12[1] = 0.0;
    v12[2] = 0.0;
    v12[4] = v15.left;
    width = this[27].width;
    v12[0] = (float)(v15.right - v15.left) / *v8;
    v12[5] = v15.top;
    v16 = LODWORD(width) ^ _xmm;
    v12[3] = (float)(v15.bottom - v15.top) / this[28].height;
    v9 = LODWORD(this[27].height) ^ _xmm;
    v15 = (struct D2D_RECT_F)_xmm;
    v17 = v9;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v13,
      (const struct D2D1::Matrix3x2F *)&v15,
      (const struct D2D1::Matrix3x2F *)v12);
    v10 = v13;
    v11 = v14;
  }
  *(_OWORD *)&a3->m11 = v10;
  *(_QWORD *)&a3->m[2][0] = v11;
}
