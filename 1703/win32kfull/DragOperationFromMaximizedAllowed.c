/*
 * XREFs of DragOperationFromMaximizedAllowed @ 0x1C0139664
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0139694 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C03257DC & 1) == 0 || (dword_1C03257DC & 2) == 0 )
    return 0LL;
  return result;
}
