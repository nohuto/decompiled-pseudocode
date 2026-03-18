/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020E3CC
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020E2C0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E6AC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0210360 (xxxTrackBox.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, unsigned __int16 a3, unsigned __int16 a4, int a5)
{
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v6) = 0;
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  v10[1] = a2;
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  if ( a1 )
    v6 = *(_QWORD *)a1;
  xxxSendMessage((int)a2, (a5 != 0) + 276, a3 | (a4 << 16), v6);
  xxxWindowEvent(0x800Eu, (__int64 *)a2, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v9, v8);
}
