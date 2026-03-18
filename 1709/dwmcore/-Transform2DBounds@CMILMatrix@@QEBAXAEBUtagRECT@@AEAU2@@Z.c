/*
 * XREFs of ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x1800C5858
 * Callers:
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x1800C5B24 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009E574 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CMILMatrix::Transform2DBounds(CMILMatrix *this, const struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 i; // rax
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  float v6[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    *(float *)&v5[i] = (float)*(&a2->left + i);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)this, (__int64)v5, v6);
  *a3 = *(struct tagRECT *)CMilRectLFromMilRectF(v5, (__int64)v6);
}
