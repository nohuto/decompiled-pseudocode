/*
 * XREFs of InitTooltipDelay @ 0x1C01142BC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     _SetDoubleClickTime @ 0x1C0114210 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitTooltipDelay(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = gdtDblClk;
    *(_DWORD *)(a1 + 8) = 3 * gdtDblClk;
    result = (unsigned int)(8 * v1);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
