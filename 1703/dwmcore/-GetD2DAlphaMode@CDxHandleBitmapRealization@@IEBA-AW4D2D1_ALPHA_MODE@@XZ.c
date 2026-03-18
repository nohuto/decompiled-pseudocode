/*
 * XREFs of ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180079B78
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180079BA0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DAlphaMode(CDxHandleBitmapRealization *this)
{
  CBitmapRealization *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CDxHandleBitmapRealization *)((char *)this + 104);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 48LL);
  if ( (char *)v2 == (char *)CBitmapRealization::GetAlphaMode )
    return CBitmapRealization::GetAlphaMode(v1);
  else
    return v2();
}
