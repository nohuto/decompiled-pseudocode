/*
 * XREFs of IopMemFindSuitableRange @ 0x1405B5CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall IopMemFindSuitableRange(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL) & 1) != 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  return ArbFindSuitableRange(a1, a2);
}
