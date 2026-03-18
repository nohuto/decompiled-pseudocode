/*
 * XREFs of ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CD184
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C0044 (xxxSendPointerMessageWorker.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB838 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall xxxPointerParentNotify(struct tagWND *a1, const struct tagPOINTERINFONODE *a2)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1;
  if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) && (*((_BYTE *)v3 + 64) & 4) == 0 )
  {
    v5 = gptiCurrent;
    v6[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v6;
    v6[1] = 0LL;
    do
    {
      if ( (*((_BYTE *)v3 + 71) & 0xC0) != 0x40 )
        break;
      v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
      ThreadLockExchange((__int64)v3, (__int64)v6);
      xxxSendPointerMessageWorker(v3, 528LL, *((_QWORD *)a2 + 2), 0LL, 0LL, 177);
      if ( !(unsigned int)IsPointerInfoNodeValid(a2) )
        break;
    }
    while ( !(unsigned int)IsTargetSetForRetrieval(gptiCurrent, a2) );
    ThreadUnlock1(v4, v5);
  }
}
