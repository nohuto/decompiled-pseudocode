/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180073C54
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        FastRegion::CRegion *this,
        float *a2)
{
  unsigned int v2; // edi
  int v3; // r10d
  int v4; // r11d
  int v5; // r14d
  int v7; // [rsp+2Ch] [rbp-DCh]
  int v8; // [rsp+34h] [rbp-D4h]
  _DWORD *v9; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v10[18]; // [rsp+70h] [rbp-98h] BYREF

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
