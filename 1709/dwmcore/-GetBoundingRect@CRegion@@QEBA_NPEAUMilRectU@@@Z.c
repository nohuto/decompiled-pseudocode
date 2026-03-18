/*
 * XREFs of ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180088C08
 * Callers:
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180088A20 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 */

bool __fastcall CRegion::GetBoundingRect(CRegion *this, struct MilRectU *a2)
{
  bool BoundingRect; // al
  LONG *v3; // r11
  int v4; // r9d
  bool v5; // r10
  LONG right; // eax
  LONG left; // r8d
  int v8; // edx
  LONG top; // ecx
  bool v10; // sf
  int v11; // ecx
  LONG bottom; // eax
  bool result; // al
  struct tagRECT v14; // [rsp+20h] [rbp-18h] BYREF

  BoundingRect = FastRegion::CRegion::GetBoundingRect(this, &v14);
  v4 = -1;
  v5 = BoundingRect;
  right = v14.right;
  left = -1;
  if ( v14.left >= 0 )
    left = v14.left;
  v8 = -1;
  top = v14.top;
  v10 = v14.top < 0;
  *v3 = left;
  if ( !v10 )
    v8 = top;
  v11 = -1;
  v3[1] = v8;
  if ( right >= 0 )
    v11 = right;
  bottom = v14.bottom;
  v10 = v14.bottom < 0;
  v3[2] = v11;
  if ( !v10 )
    v4 = bottom;
  result = v5;
  v3[3] = v4;
  return result;
}
