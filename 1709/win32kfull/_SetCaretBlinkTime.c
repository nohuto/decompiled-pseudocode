/*
 * XREFs of _SetCaretBlinkTime @ 0x1C011C350
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00861CC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4980LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(v3 + 336) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 288), *(struct tagQ **)(gptiCurrent + 408LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 288), (struct tagQ *)v3);
  }
  return 1LL;
}
