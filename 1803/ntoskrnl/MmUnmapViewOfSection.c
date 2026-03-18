/*
 * XREFs of MmUnmapViewOfSection @ 0x1404D92F0
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0);
}
