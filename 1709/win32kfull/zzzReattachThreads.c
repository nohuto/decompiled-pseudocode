/*
 * XREFs of zzzReattachThreads @ 0x1C00CA9AC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C470C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0086074 (zzzInputFocusReceivedWindowEvent.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00C8CC4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C9610 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C976C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CACF0 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00CAD88 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CAE68 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C00CB2A8 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C00CC1C0 (SetNewForegroundQueue.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0142520 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, struct _LIST_ENTRY **a3)
{
  struct tagTHREADINFO *v3; // rsi
  int v4; // ebp
  int v7; // r12d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v24; // rdx
  struct tagTHREADINFO *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  struct tagQMSG *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v37; // [rsp+40h] [rbp-38h]
  char v38; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
    v37 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v37 = *(struct tagTHREADINFO **)(v9 + 96);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v38);
  if ( v8 )
    goto LABEL_51;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v4 && !a3 )
  {
LABEL_51:
    UnpackAffectedThreadList(v12, v11, v13);
    if ( v8 )
      goto LABEL_10;
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v14 = gpqForeground;
  if ( !gpqForeground )
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_DWORD *)(v14 + 384) != 1 )
  {
    ++*(_DWORD *)(v14 + 388);
    goto LABEL_11;
  }
LABEL_10:
  v14 = 0LL;
LABEL_11:
  v15 = 0LL;
  if ( gpqForeground && (v16 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v17 = *(_QWORD *)(v16 + 16);
    v15 = *(_QWORD *)(v17 + 632);
    if ( !v15 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
      v15 = *(_QWORD *)(v34 + 408);
  }
  else
  {
    v7 = 0;
  }
  v18 = 0LL;
  if ( gpqForegroundPrev )
  {
    v19 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      v18 = *(_QWORD *)(v20 + 632);
      if ( !v18 && !InAffectedThreadList((const struct tagTHREADINFO *)v20) )
        v18 = *(_QWORD *)(v35 + 408);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry )
    {
      v24 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 79);
      if ( v24 == *((struct tagQ **)RecalcPtiFromListEntry + 51) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 79) = 0LL;
      }
      else if ( v24 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 79) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v24);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v14 )
  {
    v31 = *(struct tagQMSG **)(v14 + 24);
    --*(_DWORD *)(v14 + 388);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    RedistributeInput(v31, (struct tagQ *)v14, v37, v27);
    v32 = *(_DWORD *)(v14 + 384);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v14 + 88);
      if ( v33 && v14 != *(_QWORD *)(v33 + 408) )
      {
        *(_DWORD *)(v14 + 384) = v32 + 1;
        zzzDestroyQueue(v14, v33);
      }
      v25 = *(struct tagTHREADINFO **)(v14 + 96);
      if ( !v25 || v14 == *((_QWORD *)v25 + 51) )
        goto LABEL_24;
      ++*(_DWORD *)(v14 + 384);
    }
    else
    {
      *(_DWORD *)(v14 + 384) = 1;
      v25 = v3;
    }
    zzzDestroyQueue(v14, v25);
  }
LABEL_24:
  if ( *(_QWORD *)(gptiCurrent + 432LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v15);
    gpqForegroundPrev = v18;
    v30 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4u);
    UnpackAffectedThreadList(v30, v28, v29);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v38);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 408LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList(grpdeskRitInput, v25, v26);
    UserAtomicCheck::Detach((UserAtomicCheck *)&v38);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v38);
  }
}
