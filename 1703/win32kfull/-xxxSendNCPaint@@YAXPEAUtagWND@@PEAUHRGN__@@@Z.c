/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F3E14
 * Callers:
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  SetOrClrWF(0, a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) && (*((_BYTE *)a1 + 56) & 0x40) == 0 )
  {
    SetOrClrWF(1, a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, a1, 0x101u, 1);
  }
  if ( *((char *)a1 + 62) < 0 )
  {
    SetOrClrWF(0, a1, 0x680u, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((int)a1, 133, a2, 0);
}
