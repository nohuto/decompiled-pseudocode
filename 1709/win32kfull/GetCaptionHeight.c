/*
 * XREFs of GetCaptionHeight @ 0x1C00930D4
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  unsigned int WindowDpiLastNotify; // eax
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
    return 0LL;
  if ( *(char *)(a1 + 64) < 0 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    v2 = 22LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    v2 = 2LL;
  }
  return GetDpiDependentMetric(v2, WindowDpiLastNotify);
}
