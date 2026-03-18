/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C
 * Callers:
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C00AE668 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     CountNumClipFormatForIL @ 0x1C00AF9F8 (CountNumClipFormatForIL.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // r8
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      *((_QWORD *)a1 + 7) = gptiCurrent;
      v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v10;
      v10[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      v3 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v3 )
        v3 = (_QWORD *)*v3;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (unsigned __int64)v3, 0LL, 1);
      ThreadUnlock1(v5, v4);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 296) )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL);
    if ( v8 )
      v7 = *(_QWORD *)(v8 + 824);
    v9 = CountNumClipFormatForIL(v7, (__int64)a1);
    PostMessage(i, 797LL, v9, 0LL);
  }
}
