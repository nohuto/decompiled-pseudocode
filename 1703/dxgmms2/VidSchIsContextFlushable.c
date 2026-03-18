/*
 * XREFs of VidSchIsContextFlushable @ 0x1C00ABED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  return !*(_DWORD *)(a1 + 804)
      && (!*(_DWORD *)(a1 + 808) || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 980LL));
}
