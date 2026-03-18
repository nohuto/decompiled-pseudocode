/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800B932C
 * Callers:
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x1800363E0 (-SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z.c)
 *     ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x1800B9444 (--0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4

  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a2, (__int64)this + 20, (float *)this);
  }
  else
  {
    *(_DWORD *)this = *((_DWORD *)this + 5);
    *((_DWORD *)this + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 2) = *((_DWORD *)this + 7);
    *((_DWORD *)this + 3) = *((_DWORD *)this + 8);
  }
  v3 = *(float *)this;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
  if ( v4 < 8388608.0 )
    v3 = (float)(int)ceilf_0(*(float *)this);
  v5 = *((float *)this + 1);
  *(float *)this = v3;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v6 < 8388608.0 )
    v5 = (float)(int)ceilf_0(v5);
  v7 = *((float *)this + 2);
  *((float *)this + 1) = v5;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v8 < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  *((float *)this + 2) = v7;
  v9 = *((float *)this + 3);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v10 < 8388608.0 )
    v9 = (float)(int)floorf_0(*((float *)this + 3));
  *((float *)this + 3) = v9;
}
