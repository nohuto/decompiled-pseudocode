/*
 * XREFs of xxxShowWindow @ 0x1C0020664
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1)
{
  return xxxShowWindowEx(a1);
}
