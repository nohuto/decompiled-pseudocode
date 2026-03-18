/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C013D6D4
 * Callers:
 *     ?VirtualizedPrimaryRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C012FD70 (-VirtualizedPrimaryRect@COutputConfig@@QEBA-AUtagRECT@@XZ.c)
 *     _GetClientRect @ 0x1C013D708 (_GetClientRect.c)
 * Callees:
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRect(_OWORD *a1)
{
  __int128 v2; // xmm0
  _OWORD *result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *GetMonitorRect(&v4, *(_QWORD *)(gpDispInfo + 88));
  result = a1;
  *a1 = v2;
  return result;
}
