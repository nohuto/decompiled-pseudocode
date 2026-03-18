/*
 * XREFs of MiIsPfnTradable @ 0x140265120
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140485710 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
