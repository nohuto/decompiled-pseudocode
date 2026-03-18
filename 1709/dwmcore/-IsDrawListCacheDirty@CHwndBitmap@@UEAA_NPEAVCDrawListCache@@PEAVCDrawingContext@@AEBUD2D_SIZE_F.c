/*
 * XREFs of ?IsDrawListCacheDirty@CHwndBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180168000
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 */

char __fastcall CHwndBitmap::IsDrawListCacheDirty(
        CHwndBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  char IsDrawListCacheDirty; // al
  char v8; // r8
  unsigned __int64 v10; // rax

  IsDrawListCacheDirty = CContent::IsDrawListCacheDirty(this, a2, a3, a4, a5);
  v8 = 0;
  if ( IsDrawListCacheDirty )
    return 1;
  v10 = *((_QWORD *)this + 15);
  if ( !v10 || *((_QWORD *)a2 + 3) < v10 )
    return 1;
  return v8;
}
