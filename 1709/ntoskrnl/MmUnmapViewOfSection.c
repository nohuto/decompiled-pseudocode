/*
 * XREFs of MmUnmapViewOfSection @ 0x140584F70
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0);
}
