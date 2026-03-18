/*
 * XREFs of ??$ValueGetter@P8CMesh2DEffect@@EBA?AUD2D_MATRIX_3X2_F@@XZ$H?GetTextureTransform@1@QEBA?AU2@XZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x180221B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTextureTransform@CMesh2DEffect@@QEBA?AUD2D_MATRIX_3X2_F@@XZ @ 0x1800D7014 (-GetTextureTransform@CMesh2DEffect@@QEBA-AUD2D_MATRIX_3X2_F@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall ValueGetter<D2D_MATRIX_3X2_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_3X2_F CMesh2DEffect::GetTextureTransform(void)const,0},ID2D1EffectImpl>(
        FLOAT *a1,
        struct D2D_MATRIX_3X2_F *a2,
        unsigned int a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  struct D2D_MATRIX_3X2_F v6; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 24;
  if ( a3 && a2 )
  {
    if ( a3 >= 0x18 )
      *a2 = *CMesh2DEffect::GetTextureTransform(a1, &v6);
    else
      return (unsigned int)-2147024774;
  }
  return v4;
}
