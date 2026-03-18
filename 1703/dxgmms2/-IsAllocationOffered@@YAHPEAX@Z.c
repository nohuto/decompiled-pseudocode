/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C0048680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[116] != 4 && *(_WORD *)(*((_QWORD *)a1 + 65) + 4LL) == 2;
}
