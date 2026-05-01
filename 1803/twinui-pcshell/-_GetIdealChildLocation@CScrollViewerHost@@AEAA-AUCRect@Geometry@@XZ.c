/*
 * XREFs of ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1802913A8
 * Callers:
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180291420 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180291648 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 * Callees:
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x180290C48 (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

__int64 __fastcall CScrollViewerHost::_GetIdealChildLocation(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  int v3; // eax
  _OWORD *v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // r9
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v2;
  a2[3] = v3;
  v4 = (_OWORD *)RelativeMargins::ApplyMargins((double *)(a1 + 416), (__int64)v8, a2);
  *(_OWORD *)v5 = *v4;
  *(_DWORD *)v5 += v6[99];
  *(_DWORD *)(v5 + 8) -= v6[100];
  *(_DWORD *)(v5 + 4) += v6[101];
  *(_DWORD *)(v5 + 12) -= v6[102];
  return v5;
}
