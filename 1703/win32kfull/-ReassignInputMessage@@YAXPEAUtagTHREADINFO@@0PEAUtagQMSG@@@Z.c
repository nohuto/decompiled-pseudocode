/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CCF90 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F2A40 (GetAppCompatFlags2QuadWord.c)
 *     IsPointerInputClientMessage @ 0x1C0131C58 (IsPointerInputClientMessage.c)
 *     DelegateCoalescePointerMessage @ 0x1C01C9AC4 (DelegateCoalescePointerMessage.c)
 *     GetPointerMsgFrameId @ 0x1C01CA02C (GetPointerMsgFrameId.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v3; // r14
  __int64 v7; // rax
  __int64 *v8; // rsi
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // ecx
  unsigned int FrameIdFromPointerMsgId; // ebx
  bool v13; // cc
  unsigned int PointerMsgFrameId; // eax
  unsigned int v15; // edx
  int v16; // ecx
  __int64 v17; // rdx

  v3 = *((_QWORD *)a2 + 48);
  DelQEntry(*((_QWORD *)a1 + 48), (__int64)a3, 0);
  v7 = *((_QWORD *)a1 + 48);
  if ( *(struct tagQMSG **)(v7 + 48) == a3 )
    *(_QWORD *)(v7 + 48) = 0LL;
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  v8 = *(__int64 **)v3;
  if ( !*(_QWORD *)v3 )
    goto LABEL_41;
  do
  {
    if ( *((_DWORD *)v8 + 12) > *((_DWORD *)a3 + 12) )
      break;
    if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)v8 + 6))
      && (unsigned int)IsPointerInputClientMessage(*((unsigned int *)a3 + 6))
      && v10 != 595
      && v11 != 595 )
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v8[5]);
        v13 = FrameIdFromPointerMsgId <= CTouchProcessor::GetFrameIdFromPointerMsgId(
                                           gpTouchProcessor,
                                           *((_QWORD *)a3 + 5));
      }
      else
      {
        GetPointerMsgFrameId(v8[5]);
        PointerMsgFrameId = GetPointerMsgFrameId(*((_QWORD *)a3 + 5));
        v13 = v15 <= PointerMsgFrameId;
      }
      if ( !v13 )
        break;
    }
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( v8 )
  {
    v9 = (_QWORD *)v8[1];
    if ( v9 )
      *v9 = a3;
    else
      *(_QWORD *)v3 = a3;
    *(_QWORD *)a3 = v8;
    *((_QWORD *)a3 + 1) = v8[1];
    v8[1] = (__int64)a3;
  }
  else
  {
LABEL_41:
    if ( *(_QWORD *)v3 )
    {
      **(_QWORD **)(v3 + 8) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v3 + 8);
    }
    else
    {
      *(_QWORD *)v3 = a3;
    }
    *(_QWORD *)(v3 + 8) = a3;
  }
  ++*(_DWORD *)(v3 + 16);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v16 = *((_DWORD *)a3 + 25);
      if ( (v16 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 48) + 104LL) )
        {
          v17 = *((_QWORD *)a3 + 1);
          if ( v17 )
          {
            if ( *(_DWORD *)(v17 + 24) == 512
              && *(_QWORD *)(v17 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v3 + 48) != v17
              && (v16 & 0x100) == 0 )
            {
              DelQEntry(v3, v17, 1);
            }
          }
        }
      }
    }
    WakeSomeone(v3, (__int64)a2, *((unsigned int *)a3 + 6), (__int64)a3);
  }
}
