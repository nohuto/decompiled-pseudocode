/*
 * XREFs of ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C64F4
 * Callers:
 *     xxxDoSyncPaint @ 0x1C00C648C (xxxDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C64F4 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C64F4 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C65F4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall DoQueuedSyncPaint(struct tagWND *a1, unsigned int a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v5; // r8
  __int64 i; // rbx
  _QWORD **v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rcx

  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( v5 == a3 || (*((_BYTE *)a1 + 57) & 0xA) != 0xA || (*((_BYTE *)a1 + 71) & 0x10) == 0 )
    goto LABEL_5;
  v8 = (_QWORD **)((char *)v5 + 472);
  v9 = *v8;
  if ( *v8 == v8 )
    goto LABEL_16;
  do
  {
    v10 = v9 - 2;
    if ( *((_DWORD *)v9 + 22) == 136 && (struct tagWND *)v10[14] == a1 )
      break;
    v9 = (_QWORD *)*v9;
    v10 = 0LL;
  }
  while ( v9 != v8 );
  if ( !v10 )
  {
LABEL_16:
    QueueNotifyTransformableMessage(a1, 0x88u, a2, 0LL, 1, 0);
    SetOrClrWF(1, a1, 0x280u, 1);
  }
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
LABEL_5:
    if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*((_BYTE *)a1 + 71) & 2) != 0 )
    {
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( (*(_BYTE *)(i + 71) & 0x40) == 0 || a3 == *(struct tagTHREADINFO **)(i + 16) )
          DoQueuedSyncPaint((struct tagWND *)i, a2, a3);
      }
    }
  }
}
