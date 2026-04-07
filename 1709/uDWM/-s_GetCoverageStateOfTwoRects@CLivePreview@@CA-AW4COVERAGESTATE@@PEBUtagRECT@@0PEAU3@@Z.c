/*
 * XREFs of ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18006CD54
 * Callers:
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180069EE4 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18006B2A0 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18006BC18 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x18006BEF4 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreview::s_GetCoverageStateOfTwoRects(const RECT *a1, const RECT *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( IntersectRect(a3, a1, a2) )
    return (unsigned int)EqualRect(a3, a2) + 1;
  return v5;
}
