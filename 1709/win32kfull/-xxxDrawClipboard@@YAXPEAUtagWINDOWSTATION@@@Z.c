/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6904
 * Callers:
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00C5520 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     CountNumClipFormatForIL @ 0x1C00C67E0 (CountNumClipFormatForIL.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v5 = *((_QWORD *)a1 + 9);
    if ( v5 )
    {
      *((_QWORD *)a1 + 7) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v14;
      v14[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v7 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v7 )
        v7 = (_QWORD *)*v7;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (unsigned __int64)v7, 0LL, 1);
      ThreadUnlock1(v9, v8);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 296) )
  {
    v11 = 0LL;
    v12 = *(_QWORD *)(*(_QWORD *)(i + 16) + 400LL);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 832);
    v13 = CountNumClipFormatForIL(v11, (__int64)a1);
    PostMessage(i, 797LL, v13, 0LL);
  }
}
