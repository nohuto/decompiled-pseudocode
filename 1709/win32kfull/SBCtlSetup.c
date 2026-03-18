/*
 * XREFs of SBCtlSetup @ 0x1C0210678
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C020F778 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     CalcSBStuff2 @ 0x1C007736C (CalcSBStuff2.c)
 */

__int64 __fastcall SBCtlSetup(__int64 a1)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  GetRect(*(_QWORD *)a1, v3, 17);
  return CalcSBStuff2((int *)(a1 + 16), v3, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
