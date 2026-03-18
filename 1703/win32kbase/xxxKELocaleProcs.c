/*
 * XREFs of xxxKELocaleProcs @ 0x1C004E27C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C0130098 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C0130114 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 */

__int64 __fastcall xxxKELocaleProcs(struct tagKE *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = gpKbdTbl;
  if ( (*(_DWORD *)(gpKbdTbl + 80) & 1) != 0 || gbAltGrDown )
  {
    xxxAltGr(a1);
    v1 = gpKbdTbl;
  }
  if ( (gdwKeyboardAttributes & 2) == 0 && (*(_DWORD *)(v1 + 80) & 2) == 0 )
    return 1LL;
  result = xxxShiftLock(a1);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
