/*
 * XREFs of _SetCaretBlinkTime @ 0x1C00BB9A0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00AFDFC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B218C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 5392LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v3 + 296) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 256), *(struct tagQ **)(gptiCurrent + 384LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 256), (struct tagQ *)v3);
  }
  return 1LL;
}
