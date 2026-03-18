/*
 * XREFs of MmUnmapViewOfSection @ 0x140479E90
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0LL);
}
