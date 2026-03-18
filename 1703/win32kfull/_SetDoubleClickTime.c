/*
 * XREFs of _SetDoubleClickTime @ 0x1C00C6930
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 *     InitTooltipDelay @ 0x1C00C69DC (InitTooltipDelay.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC (safe_cast_fnid_to_PTOOLTIPWND.c)
 */

__int64 __fastcall SetDoubleClickTime(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 i; // r8
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a1;
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 632);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, v4) )
    return 0LL;
  if ( v2 )
  {
    if ( v2 > 0x1388 )
      v2 = 5000;
  }
  else
  {
    v2 = 500;
  }
  gdtDblClk = v2;
  *(_DWORD *)(gpsi + 5388LL) = 4 * v2;
  *(_DWORD *)(gpsi + 5384LL) = *(_DWORD *)(gpsi + 5388LL) / 5u;
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(v7 + 32) )
    {
      v6 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
      InitTooltipDelay(v6);
    }
  }
  return 1LL;
}
