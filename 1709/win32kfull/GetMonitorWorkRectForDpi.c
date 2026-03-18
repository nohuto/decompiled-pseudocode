/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1C005F4DC
 * Callers:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C0049F64 (-UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z.c)
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C005EC34 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorWorkRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(v7 + 28);
    v9 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(v7 + 66), v8);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v9, v8);
  }
  return a1;
}
