/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180067F38
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800328D0 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x1800329DC (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180067FA0 (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18006809C (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // r8

  if ( *(_QWORD *)a1 == *(_QWORD *)a2
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
    && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
    || (*(_DWORD *)(a1 + 8) <= *(_DWORD *)a1 || *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 4))
    && (*(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 || *(_DWORD *)(a2 + 12) <= *(_DWORD *)(a2 + 4)) )
  {
    return 1;
  }
  v2 = ((__int64 (*)(void))TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite)();
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v3) )
      return 1;
  }
  return v4;
}
