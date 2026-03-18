/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1801324A0
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (int)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite
      && a1[2] >= SDWORD2(TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite)
      || a1[1] <= SDWORD1(TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite)
      && a1[3] >= SHIDWORD(TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite);
}
