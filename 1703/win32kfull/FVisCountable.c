/*
 * XREFs of FVisCountable @ 0x1C0022140
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C0021DA8 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0022068 (DecVisWindows.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r10

  return *(char *)(a1 + 59) >= 0
      && ((*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D
       || (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v1 + 71) & 0x20) == 0);
}
