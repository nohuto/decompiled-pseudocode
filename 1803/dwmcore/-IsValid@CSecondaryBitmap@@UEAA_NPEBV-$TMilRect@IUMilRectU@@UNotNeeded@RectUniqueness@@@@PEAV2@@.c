/*
 * XREFs of ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180083790
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180077B9C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18007D734 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18007E100 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180083124 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180083744 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CSecondaryBitmap::IsValid(
        const struct FastRegion::Internal::CRgnData **a1,
        const struct MilRectU *a2,
        __int64 a3)
{
  const struct FastRegion::Internal::CRgnData *v5; // rdx
  char v6; // di
  char v7; // di
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  struct FastRegion::Internal::CRgnData *v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h] BYREF

  v10 = (struct FastRegion::Internal::CRgnData *)&v11;
  v11 = 0;
  if ( !a2 )
  {
    CSecondaryBitmap::GetBitmapRect((CSecondaryBitmap *)a1, (struct MilRectU *)v9);
    a2 = (const struct MilRectU *)v9;
  }
  CRegion::SetRectangle((CRegion *)&v10, a2);
  if ( *(_DWORD *)v10 && (v5 = a1[1], *(_DWORD *)v5) )
    v6 = FastRegion::Internal::CRgnData::Intersects(v10, v5);
  else
    v6 = 0;
  v7 = v6 ^ 1;
  if ( a3 )
  {
    if ( v7 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
    else
    {
      FastRegion::CRegion::Intersect(&v10, a1 + 1);
      CRegion::GetBoundingRect((CRegion *)&v10, (struct MilRectU *)a3);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v10);
  return v7;
}
