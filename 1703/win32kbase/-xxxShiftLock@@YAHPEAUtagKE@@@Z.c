/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C0130114
 * Callers:
 *     xxxKELocaleProcs @ 0x1C004E27C (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  signed __int16 v1; // r10
  __int16 v4; // ax

  v1 = *((_WORD *)a1 + 1);
  if ( v1 < 0 )
    return 1LL;
  v4 = (unsigned __int8)*((_WORD *)a1 + 1);
  if ( v4 == 20 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
      return 0LL;
  }
  else if ( (v4 == 16 || (unsigned __int16)(v4 - 160) <= 1u) && (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    xxxKeyEvent(v1, *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    xxxKeyEvent(0x14u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    xxxKeyEvent(0x8014u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    return 0LL;
  }
  return 1LL;
}
