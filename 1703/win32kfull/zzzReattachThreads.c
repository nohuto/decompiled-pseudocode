/*
 * XREFs of zzzReattachThreads @ 0x1C00B6108
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C0F70 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38 (zzzInputFocusReceivedWindowEvent.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00B649C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00B6534 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00B663C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C00B6A68 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C00B6AD0 (SetNewForegroundQueue.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00B6AF4 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00B6C5C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  int v3; // ebp
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v21; // rdx
  struct tagQMSG *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *NextQueueWindow; // rax
  struct tagTHREADINFO *v29; // [rsp+40h] [rbp-38h]
  char v30; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1 & 2;
  v6 = 1;
  v7 = a1 & 1;
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  v9 = *(_QWORD *)(v8 + 80);
  if ( v9 )
    v29 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v29 = *(struct tagTHREADINFO **)(v8 + 64);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v30);
  if ( v7 )
    goto LABEL_61;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v3 && !a3 )
  {
LABEL_61:
    UnpackAffectedThreadList();
    if ( v7 )
    {
      v10 = gpqForeground;
LABEL_41:
      v11 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v10 = gpqForeground;
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_DWORD *)(v11 + 344) == 1 )
    goto LABEL_41;
  ++*(_DWORD *)(v11 + 348);
LABEL_11:
  v12 = 0LL;
  if ( *(_QWORD *)v10 && (v13 = *(_QWORD *)(*(_QWORD *)v10 + 88LL)) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v12 = *(_QWORD *)(v14 + 576);
    if ( !v12 && !InAffectedThreadList((const struct tagTHREADINFO *)v14) )
      v12 = *(_QWORD *)(v26 + 384);
  }
  else
  {
    v6 = 0;
  }
  v15 = 0LL;
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 96LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v15 = *(_QWORD *)(v17 + 576);
      if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
        v15 = *(_QWORD *)(v27 + 384);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v21 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 72);
      if ( v21 == *((struct tagQ **)RecalcPtiFromListEntry + 48) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 72) = 0LL;
      }
      else if ( v21 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 72) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v21);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v22 = *(struct tagQMSG **)v11;
    --*(_DWORD *)(v11 + 348);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    RedistributeInput(v22, (struct tagQ *)v11, v29);
    v23 = *(_DWORD *)(v11 + 344);
    if ( !v23 )
    {
      *(_DWORD *)(v11 + 344) = 1;
LABEL_26:
      zzzDestroyQueue(v11);
      goto LABEL_27;
    }
    v24 = *(_QWORD *)(v11 + 56);
    if ( v24 && v11 != *(_QWORD *)(v24 + 384) )
    {
      *(_DWORD *)(v11 + 344) = v23 + 1;
      zzzDestroyQueue(v11);
    }
    v25 = *(_QWORD *)(v11 + 64);
    if ( v25 && v11 != *(_QWORD *)(v25 + 384) )
    {
      ++*(_DWORD *)(v11 + 344);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12);
    gpqForegroundPrev = v15;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
      zzzInputFocusReceivedWindowEvent(4);
    UnpackAffectedThreadList();
    if ( !v30 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v30);
    }
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( !gpqForeground && v6 )
    {
      NextQueueWindow = (__int64 *)GetNextQueueWindow(
                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL)
                                               + 112LL),
                                     0LL,
                                     0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          NextQueueWindow[2],
          *(_QWORD *)(NextQueueWindow[2] + 384),
          6u,
          0LL,
          0,
          0LL,
          *NextQueueWindow,
          0LL);
    }
    zzzSetFMouseMoved();
  }
  else
  {
    UnpackAffectedThreadList();
    v30 = 1;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v30);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
}
