/*
 * XREFs of VidSchIsContextFlushable @ 0x1C00B4890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  return !*(_DWORD *)(a1 + 780)
      && (!*(_DWORD *)(a1 + 784) || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 976LL));
}
