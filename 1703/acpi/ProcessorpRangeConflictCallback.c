/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1C00A59F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ProcessorpRangeConflictCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  bool result; // al
  unsigned int v4; // r8d
  unsigned int v5; // eax

  v2 = *(_QWORD *)(a2 + 16);
  result = v2
        && (*(_BYTE *)(a2 + 33) & 1) != 0
        && *(_BYTE *)(a1 + 14)
        && *(_QWORD *)a1 != *(_QWORD *)(a2 + 24)
        && ((v4 = *(_DWORD *)(a1 + 8), v5 = *(_DWORD *)(v2 + 16), v4 == v5) || v4 >= 0xFFF00000 && v5 >= 0xFFF00000)
        && ((*(_WORD *)(a1 + 12) & 1) == 0 || (*(_BYTE *)(a2 + 32) & 2) != 0)
        && ((*(_WORD *)(a1 + 12) & 1) != 0 || (*(_BYTE *)(a2 + 32) & 1) != 0);
  return result;
}
