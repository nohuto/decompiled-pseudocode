/*
 * XREFs of ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00EFDB0
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C008EBFC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00EFDEC (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsY(PDEVOBJ *this)
{
  char CurrentThreadDpiAwarenessContext; // al
  bool v3; // cc
  __int64 result; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2196LL);
  v3 = (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1;
  result = 96LL;
  if ( v3 )
    return *(unsigned int *)(*(_QWORD *)this + 2196LL);
  return result;
}
