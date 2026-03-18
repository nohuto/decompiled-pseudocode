/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00FFBC0
 * Callers:
 *     NtUserEnableMouseInPointer @ 0x1C00FFAC0 (NtUserEnableMouseInPointer.c)
 *     W32kCddDisableGdiHwAcceleration @ 0x1C00FFB80 (W32kCddDisableGdiHwAcceleration.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0137DC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01401E0 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01E1AE4 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return *(_QWORD *)(ThreadWin32Thread + 624);
}
