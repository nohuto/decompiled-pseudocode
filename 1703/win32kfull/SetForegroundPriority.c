/*
 * XREFs of SetForegroundPriority @ 0x1C00B5AE0
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01EFAF4 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 12LL) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(*(_QWORD *)(a1 + 376), a1, v2);
}
