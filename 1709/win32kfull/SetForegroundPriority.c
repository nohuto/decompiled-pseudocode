/*
 * XREFs of SetForegroundPriority @ 0x1C0085D30
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7968 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C0085E70 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(*(_QWORD *)(a1 + 400) + 12LL) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(*(_QWORD *)(a1 + 400), a1, v2);
}
