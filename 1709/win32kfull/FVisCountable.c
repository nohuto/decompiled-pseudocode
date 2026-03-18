/*
 * XREFs of FVisCountable @ 0x1C0093070
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C0092CD4 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0092F98 (DecVisWindows.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9

  return *(char *)(a1 + 59) >= 0
      && ((*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D
       || (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v1 + 71) & 0x20) == 0);
}
