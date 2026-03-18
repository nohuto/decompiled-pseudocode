/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0137DC8
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CF8DC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FFBC0 (GetAppCompatFlags2QuadWord.c)
 *     DelegateCoalescePointerMessage @ 0x1C01CDE1C (DelegateCoalescePointerMessage.c)
 *     GetPointerMsgFrameId @ 0x1C01CE464 (GetPointerMsgFrameId.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  _QWORD *v14; // rax
  int v15; // ecx
  unsigned int FrameIdFromPointerMsgId; // ebx
  bool v17; // cc
  unsigned int PointerMsgFrameId; // eax
  unsigned int v19; // edx
  int v20; // ecx
  __int64 v21; // rdx

  v3 = *((_QWORD *)a2 + 51);
  DelQEntry((_QWORD *)(*((_QWORD *)a1 + 51) + 24LL), (__int64)a3);
  v7 = *((_QWORD *)a1 + 51);
  if ( *(struct tagQMSG **)(v7 + 80) == a3 )
    *(_QWORD *)(v7 + 80) = 0LL;
  *((_DWORD *)a3 + 25) &= ~0x10u;
  v8 = (_QWORD *)(v3 + 24);
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  v9 = *(__int64 **)(v3 + 24);
  if ( !v9 )
    goto LABEL_43;
  do
  {
    if ( *((_DWORD *)v9 + 12) > *((_DWORD *)a3 + 12) )
      break;
    v13 = *((_DWORD *)v9 + 6);
    if ( (unsigned int)(v13 - 590) <= 9 || (unsigned int)(v13 - 581) <= 7 )
    {
      v15 = *((_DWORD *)a3 + 6);
      if ( (unsigned int)(v15 - 581) <= 0x12 && v15 != 589 && v13 != 595 && v15 != 595 )
      {
        if ( (gdwMitConfig & 4) != 0 )
        {
          FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v9[5]);
          v17 = FrameIdFromPointerMsgId <= CTouchProcessor::GetFrameIdFromPointerMsgId(
                                             gpTouchProcessor,
                                             *((_QWORD *)a3 + 5));
        }
        else
        {
          GetPointerMsgFrameId(v9[5]);
          PointerMsgFrameId = GetPointerMsgFrameId(*((_QWORD *)a3 + 5));
          v17 = v19 <= PointerMsgFrameId;
        }
        if ( !v17 )
          break;
      }
    }
    v9 = (__int64 *)*v9;
  }
  while ( v9 );
  if ( v9 )
  {
    v14 = (_QWORD *)v9[1];
    if ( v14 )
      *v14 = a3;
    else
      *v8 = a3;
    *(_QWORD *)a3 = v9;
    *((_QWORD *)a3 + 1) = v9[1];
    v9[1] = (__int64)a3;
  }
  else
  {
LABEL_43:
    if ( *v8 )
    {
      **(_QWORD **)(v3 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      *v8 = a3;
    }
    *(_QWORD *)(v3 + 32) = a3;
  }
  ++*(_DWORD *)(v3 + 40);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v10, v11, v12) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v20 = *((_DWORD *)a3 + 25);
      if ( (v20 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 51) + 136LL) )
        {
          v21 = *((_QWORD *)a3 + 1);
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 24) == 512
              && *(_QWORD *)(v21 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v3 + 80) != v21
              && (v20 & 0x100) == 0 )
            {
              DelQEntry((_QWORD *)(v3 + 24), v21);
            }
          }
        }
      }
    }
    WakeSomeone(v3, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
