/*
 * XREFs of MSGLUA_GPQFOREGROUND @ 0x1C004FB70
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000C700 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C004FBB4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C004FED0 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C0050170 (EditionIsGpqForegroundInaccessible.c)
 *     EditionLLMouseButtonHook @ 0x1C00535B0 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C01040E0 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C010DDB0 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     EditionHandleAltTabCancel @ 0x1C01122A0 (EditionHandleAltTabCancel.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C011A230 (EditionReportMouseBreakToAccessibility.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01B4E90 (EditionIsGpqForegroundAccessible.c)
 *     EditionLLMouseWheelHook @ 0x1C01BACA0 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 MSGLUA_GPQFOREGROUND()
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 1);
}
