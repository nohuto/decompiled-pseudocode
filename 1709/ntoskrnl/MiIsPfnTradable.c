/*
 * XREFs of MiIsPfnTradable @ 0x14022A520
 * Callers:
 *     MiMarkNonPagedHiberPhasePages @ 0x14042F440 (MiMarkNonPagedHiberPhasePages.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
