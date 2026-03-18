/*
 * XREFs of ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C8D10
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     xxxSendPointerMessageWorker @ 0x1C01BC354 (xxxSendPointerMessageWorker.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6B94 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall xxxPointerParentNotify(struct tagWND *a1, const struct tagPOINTERINFONODE *a2)
{
  struct tagWND *v3; // rbx
  __int64 DesktopWindow; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  char i; // al
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v5 != DesktopWindow && (*(_BYTE *)(v5 + 64) & 4) == 0 )
  {
    v6 = gptiCurrent;
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    v8[1] = 0LL;
    for ( i = *(_BYTE *)(v5 + 71); (i & 0xC0) == 0x40; i = *((_BYTE *)v3 + 71) )
    {
      v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
      ThreadLockExchange((__int64)v3, (__int64)v8);
      xxxSendPointerMessageWorker(v3, 528LL, *((_QWORD *)a2 + 2), 0LL, 0LL, 177);
      if ( !(unsigned int)IsPointerInfoNodeValid(a2) || (unsigned int)IsTargetSetForRetrieval(gptiCurrent, a2) )
        break;
    }
    ThreadUnlock1(v5, v6);
  }
}
