/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007F96C
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  SetOrClrWF(0LL, a1, 264LL, 1LL);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) && (*((_BYTE *)a1 + 56) & 0x40) == 0 )
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    a2 = 1LL;
    SetOrClrWF(0LL, a1, 257LL, 1LL);
  }
  if ( *((char *)a1 + 62) < 0 )
  {
    SetOrClrWF(0LL, a1, 1664LL, 1LL);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage(a1, 133LL, a2, 0LL);
}
