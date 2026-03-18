/*
 * XREFs of MoveWithArrangementAllowed @ 0x1C01EDE38
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0139694 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall MoveWithArrangementAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C03257DC & 1) == 0 || (dword_1C03257DC & 8) == 0 )
    return 0LL;
  return result;
}
