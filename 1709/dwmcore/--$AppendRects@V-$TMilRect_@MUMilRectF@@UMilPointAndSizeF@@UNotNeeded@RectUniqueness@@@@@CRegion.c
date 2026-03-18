/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180089218
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$BuildFromRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C5B18 (--$BuildFromRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CReg.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        FastRegion::CRegion *this,
        float *a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  int v4; // r10d
  int v5; // r14d
  int v7; // [rsp+2Ch] [rbp-A5h]
  int v8; // [rsp+34h] [rbp-9Dh]
  _DWORD *v9; // [rsp+58h] [rbp-79h] BYREF
  _DWORD v10[18]; // [rsp+60h] [rbp-71h] BYREF

  v2 = 0;
  v9 = v10;
  v10[0] = 0;
  v3 = (int)*a2;
  v7 = (int)a2[1];
  v4 = (int)a2[2];
  v8 = (int)a2[3];
  if ( v3 >= v4 || v7 >= v8 )
  {
    v10[0] = 0;
  }
  else
  {
    v10[0] = 2;
    v10[1] = v3;
    v10[2] = v4;
    v10[3] = v7;
    v10[4] = 16;
    v10[7] = v3;
    v10[8] = v4;
    v10[5] = v8;
    v10[6] = 16;
  }
  v5 = FastRegion::CRegion::Union(this, (const struct CRegion *)&v9);
  if ( v5 < 0 )
    v2 = v5;
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v9);
  return v2;
}
