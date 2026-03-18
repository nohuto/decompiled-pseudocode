/*
 * XREFs of xxxShowWindow @ 0x1C0111E58
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, int a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
