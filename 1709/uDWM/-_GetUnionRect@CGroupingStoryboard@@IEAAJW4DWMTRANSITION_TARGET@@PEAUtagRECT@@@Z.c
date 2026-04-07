/*
 * XREFs of ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x180095B68
 * Callers:
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180095FA4 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180096354 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977E0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x180095BC8 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_GetUnionRect(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  *a3 = 0LL;
  v5 = -2147024809;
  a3[1] = 0LL;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, a2, &v7) >= 0 )
  {
    v5 = 0;
    *(_OWORD *)a3 = *(_OWORD *)(56LL * v7 + *(_QWORD *)(a1 + 120) + 4);
  }
  return v5;
}
