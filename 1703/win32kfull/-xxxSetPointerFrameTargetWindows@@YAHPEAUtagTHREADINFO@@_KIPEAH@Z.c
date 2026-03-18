/*
 * XREFs of ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019915C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C0199550 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019A094 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6824 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C68F0 (-IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01C698C (-IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z.c)
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6AE8 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6B94 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01C73C0 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01C746C (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01C78B0 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01C7B64 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01C884C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C8D10 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ValidatePointerOffset @ 0x1C01D1DE0 (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D1F44 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01EA088 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01EA408 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01EA4B0 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxSetPointerFrameTargetWindows(struct tagTHREADINFO *a1, __int64 a2, unsigned int a3, int *a4)
{
  struct tagTHREADINFO *v4; // r13
  unsigned int v5; // r12d
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v8; // r10
  __int64 v9; // r14
  unsigned int v10; // edi
  unsigned int v11; // r15d
  const struct tagPOINTERINFONODE *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  struct tagPOINTERINFONODE *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  struct tagPOINT *v19; // r8
  __int64 v20; // rsi
  int v21; // eax
  struct tagWND *v22; // rax
  PointerList *v23; // rcx
  const struct tagPOINT *v24; // r8
  struct tagQ *NodeQueue; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // r12d
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool v30; // zf
  struct tagWND *v31; // rsi
  struct tagWND *v32; // rax
  PointerList *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct tagWND *v37; // rax
  PointerList *v38; // rcx
  int v39; // eax
  unsigned int v40; // r13d
  __int64 v41; // r8
  __int64 v42; // r12
  unsigned int v43; // r10d
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagPOINTERINPUTFRAME *v48; // rax
  struct tagPOINT *v49; // [rsp+30h] [rbp-91h]
  unsigned int v50; // [rsp+58h] [rbp-69h]
  unsigned int v51; // [rsp+5Ch] [rbp-65h] BYREF
  struct tagWND *v52; // [rsp+60h] [rbp-61h] BYREF
  int v53; // [rsp+68h] [rbp-59h]
  int v54; // [rsp+6Ch] [rbp-55h]
  unsigned int v55; // [rsp+70h] [rbp-51h]
  struct tagQ *QueueForCurrentNode; // [rsp+78h] [rbp-49h]
  struct tagPOINTERINFONODE *v57; // [rsp+80h] [rbp-41h]
  struct tagPOINT v58; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int16 v59[4]; // [rsp+90h] [rbp-31h] BYREF
  int v60; // [rsp+98h] [rbp-29h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-21h]
  _QWORD v62[3]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned __int16 v63[4]; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v64[10]; // [rsp+C8h] [rbp+7h] BYREF

  v4 = a1;
  v5 = a3;
  *a4 = 0;
  v58 = 0LL;
  if ( a3 == 595 )
    return 1LL;
  if ( !a2 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
  v9 = (__int64)FrameById;
  if ( !FrameById )
    return 0LL;
  v10 = 1;
  _InterlockedAdd((volatile signed __int32 *)&FrameById[2].Flink + 1, 1u);
  if ( ((__int64)FrameById[4].Blink & 0x20) != 0 )
    goto LABEL_103;
  v11 = (*((_DWORD *)v4 + 274) >> 13) & 1;
  v57 = (struct tagPOINTERINFONODE *)((char *)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32));
  v54 = IsNodeMessageDelegated(v57, v5);
  QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v54, v12);
  PushW32ThreadLock(v9, v64, (__int64)DereferencePointerInputFrame);
  v13 = 0;
  v53 = 1;
  v50 = 0;
  v14 = gptiCurrent;
  v15 = *(struct tagPOINTERINFONODE **)(gptiCurrent + 368LL);
  v62[0] = v15;
  *(_QWORD *)(gptiCurrent + 368LL) = v62;
  v62[1] = 0LL;
  v16 = *(_QWORD *)(v9 + 88);
  if ( !*(_DWORD *)(v9 + 40) )
    goto LABEL_97;
  while ( 1 )
  {
    if ( v11 && (*((_DWORD *)v4 + 274) & 0x2000) == 0 )
      goto LABEL_97;
    if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v16) )
      goto LABEL_94;
    if ( !(unsigned int)IsTargetSetForRetrieval(v4, (const struct tagPOINTERINFONODE *)v16) )
      break;
    xxxHandleMTNodeTargetWindow((struct tagPOINTERINFONODE *)v16);
    v17 = *(_DWORD *)(v16 + 4);
    if ( (v17 & 0x200) != 0 && (v17 & 0x800) == 0 && *(_DWORD *)(v16 + 56) == 2 )
    {
      v18 = HMValidateHandleNoSecure(*(_QWORD *)(v16 + 80), 1);
      v52 = (struct tagWND *)v18;
      v20 = v18;
      if ( v18 && *(struct tagTHREADINFO **)(v18 + 16) == v4 )
      {
        if ( (*(_DWORD *)(v16 + 68) & 0x10000) != 0 )
        {
          *(_DWORD *)(v16 + 4) |= 0x800u;
          LOBYTE(v21) = IsMessageOnlyWindow(v18);
          if ( !v21 )
          {
            ThreadLockExchange(v20, (__int64)v62);
            xxxPerformTargetingWithinPwnd(v20);
            QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, a3, v54, v57);
            if ( !QueueForCurrentNode )
              goto LABEL_96;
            if ( (unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
            {
              v22 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v16 + 80), 1);
              v23 = *(PointerList **)(v16 + 16);
              v52 = v22;
              if ( (unsigned int)RecheckPointerCapture(v23, v11, &v52, (int *)&v51) )
                ThreadLockExchange((__int64)v52, (__int64)v62);
              if ( (unsigned int)ValidatePointerOffset(*(_QWORD *)(v16 + 88), v16 + 48, *(_QWORD *)v59, v59) )
              {
                PointerList::SetPointerOffset(
                  (PointerList *)*(unsigned __int16 *)(v16 + 60),
                  (unsigned __int16)v59,
                  v24);
                *(_QWORD *)(v16 + 36) = *(_QWORD *)v59;
              }
            }
          }
        }
        else
        {
          PointerList::GetPointerOffset((PointerList *)*(unsigned __int16 *)(v16 + 60), (unsigned __int16)v63, v19);
          v15 = *(struct tagPOINTERINFONODE **)v63;
          *(_QWORD *)(v16 + 36) = *(_QWORD *)v63;
        }
      }
      goto LABEL_93;
    }
LABEL_94:
    ++v13;
    v16 += 216LL;
    v50 = v13;
    if ( v13 >= *(_DWORD *)(v9 + 40) )
      goto LABEL_97;
    v5 = a3;
  }
  v15 = v57;
  if ( *(_DWORD *)(v16 + 8) != *((_DWORD *)v57 + 2)
    || (struct tagPOINTERINFONODE *)v16 != v57
    && (!v11 && !(unsigned int)IsAnyNodeMessageNonDelegated((const struct tagPOINTERINFONODE *)v16)
     || (NodeQueue = GetNodeQueue((const struct tagPOINTERINFONODE *)v16, &v60), v60)
     || NodeQueue && NodeQueue != QueueForCurrentNode) )
  {
    v53 = 0;
    goto LABEL_94;
  }
  if ( (*((_DWORD *)v4 + 274) & 0x2000) != 0 )
  {
    if ( !(unsigned int)RecheckPointerCapture(*(PointerList **)(v16 + 16), v11, &v52, (int *)&v51) )
    {
      v26 = *(_QWORD *)(v16 + 24);
      v27 = 1;
      v51 = 1;
      if ( v26 )
      {
        v28 = HMValidateHandleNoSecure(v26, 1);
        v52 = (struct tagWND *)v28;
      }
      else
      {
        v28 = 0LL;
        v52 = 0LL;
      }
      if ( !v28 )
      {
        v28 = xxxPointerSpeedHitTest(0);
        v52 = (struct tagWND *)v28;
        goto LABEL_41;
      }
      goto LABEL_42;
    }
    v28 = (__int64)v52;
    v27 = v51;
LABEL_41:
    if ( v28 )
    {
LABEL_42:
      if ( *(_QWORD *)(v28 + 328) )
      {
        LODWORD(v49) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          (PointerFrameList *)v9,
          (const struct tagPOINTERINPUTFRAME *)v50,
          (struct tagWND *)v28,
          (struct tagWND *)v27,
          &v58,
          v49,
          0,
          1,
          1);
        v53 = 0;
        if ( (unsigned int)IsPointerInfoNodePrimaryDown((const struct tagPOINTERINFONODE *)v16) )
          PostEventMessageEx(
            *(_QWORD *)(v28 + 16),
            *(_QWORD *)(*(_QWORD *)(v28 + 16) + 384LL),
            0x14u,
            v28,
            0,
            0LL,
            *(_QWORD *)(v16 + 16),
            0LL);
        goto LABEL_93;
      }
    }
    v5 = a3;
  }
  v29 = *(_QWORD *)(v9 + 96);
  if ( (*(_DWORD *)(v29 + 40LL * *(unsigned int *)(v16 + 8) + 20) & 1) != 0 && (*((_DWORD *)v4 + 274) & 0x2000) == 0 )
    *(_DWORD *)(v29 + 40LL * *(unsigned int *)(v16 + 8) + 20) &= ~1u;
  v30 = *(_DWORD *)(v16 + 56) == 5;
  v51 = 1;
  if ( !v30 )
  {
    v31 = xxxDeterminePointerTargetWindow(
            v4,
            (const struct tagPOINTERINFONODE *)v16,
            QueueForCurrentNode,
            v11,
            (int *)&v51,
            &v58);
    v52 = v31;
    goto LABEL_53;
  }
  if ( !(unsigned int)xxxDetermineTouchpadPointerTargetWindow(
                        v4,
                        (const struct tagPOINTERINPUTFRAME *)v9,
                        (const struct tagPOINTERINFONODE *)v16,
                        QueueForCurrentNode,
                        v50,
                        v11,
                        (int *)&v51,
                        &v58,
                        &v52) )
    goto LABEL_93;
  v31 = v52;
LABEL_53:
  QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v54, v57);
  if ( !QueueForCurrentNode )
    goto LABEL_96;
  if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
    goto LABEL_93;
  ThreadLockExchange((__int64)v31, (__int64)v62);
  if ( !v31 )
    goto LABEL_74;
  if ( (*(_DWORD *)(v16 + 68) & 0x10000) != 0 && *(_DWORD *)(v16 + 56) != 5 && (*(_DWORD *)(v16 + 4) & 0x80u) == 0 )
  {
    xxxPointerParentNotify(v31, (const struct tagPOINTERINFONODE *)v16);
    QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v54, v57);
    if ( !QueueForCurrentNode )
      goto LABEL_96;
    if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
      goto LABEL_93;
    v32 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v31, 1);
    v33 = *(PointerList **)(v16 + 16);
    v52 = v32;
    v34 = RecheckPointerCapture(v33, v11, &v52, (int *)&v51);
    v31 = v52;
    if ( v34 )
      ThreadLockExchange((__int64)v52, (__int64)v62);
  }
  if ( !v31
    || (v35 = *(_DWORD *)(v16 + 68), (v35 & 0x10000) == 0)
    || (v35 & 0x2000) == 0
    || (*(_DWORD *)(v16 + 4) & 0x80u) != 0
    && ((LOBYTE(v36) = IsMessageOnlyWindow((__int64)v31), !v36) || !GetCompositionInputWindowUIOwner(v31))
    && (*((_BYTE *)v31 + 307) & 4) == 0 )
  {
LABEL_74:
    LODWORD(v49) = 0;
    v40 = v51;
    PointerFrameList::SetPointerInfoNodeTarget(
      (PointerFrameList *)v9,
      (const struct tagPOINTERINPUTFRAME *)v50,
      v31,
      (struct tagWND *)v51,
      &v58,
      v49,
      0,
      1,
      0);
    if ( !v31 )
      goto LABEL_80;
    if ( (*(_DWORD *)(v16 + 68) & 0x10000) != 0 )
    {
      v41 = 1LL;
    }
    else
    {
      if ( v5 != 593 )
        goto LABEL_80;
      v41 = 2LL;
    }
    PointerList::SetPointerCapture(*(_QWORD *)(v16 + 16), v31, v41, v40, v11);
LABEL_80:
    if ( *(_DWORD *)(v16 + 56) != 5 || (*(_DWORD *)(v16 + 68) & 0x2000) == 0 || (v55 = 0, !v50) )
    {
LABEL_92:
      v4 = a1;
      goto LABEL_93;
    }
    v42 = 0LL;
    v15 = 0LL;
    v61 = 0LL;
    while ( 1 )
    {
      if ( !(unsigned int)IsPointerInfoNodeValid((struct tagPOINTERINFONODE *)((char *)v15 + *(_QWORD *)(v9 + 88))) )
        goto LABEL_91;
      LODWORD(v49) = 0;
      PointerFrameList::SetPointerInfoNodeTarget(
        (PointerFrameList *)v9,
        (const struct tagPOINTERINPUTFRAME *)v43,
        v31,
        (struct tagWND *)v40,
        &v58,
        v49,
        0,
        1,
        0);
      if ( !v31 )
        goto LABEL_91;
      v44 = *(_QWORD *)(v9 + 88);
      if ( (*(_DWORD *)(v44 + v42 + 68) & 0x10000) != 0 )
        break;
      if ( a3 == 593 )
      {
        v45 = *(_QWORD *)(v16 + 16);
        v46 = 2LL;
        goto LABEL_90;
      }
LABEL_91:
      v15 = (struct tagPOINTERINFONODE *)(v61 + 216);
      ++v55;
      v42 += 216LL;
      v61 += 216LL;
      if ( v55 >= v50 )
        goto LABEL_92;
    }
    v45 = *(_QWORD *)(v44 + v42 + 16);
    v46 = 1LL;
LABEL_90:
    PointerList::SetPointerCapture(v45, v31, v46, v40, v11);
    goto LABEL_91;
  }
  *(_DWORD *)(216LL * v50 + *(_QWORD *)(v9 + 88) + 32) = v51;
  xxxPointerActivateInternal(
    v31,
    -__CFSHR__(*(_DWORD *)(v16 + 4), 8),
    *(_WORD *)(v16 + 32),
    *(_QWORD *)(v16 + 16),
    (const struct tagPOINTEREVENTINT *)(v16 + 48));
  QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v54, v57);
  if ( QueueForCurrentNode )
  {
    if ( (unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
    {
      v37 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v31, 1);
      v38 = *(PointerList **)(v16 + 16);
      v52 = v37;
      v39 = RecheckPointerCapture(v38, v11, &v52, (int *)&v51);
      v31 = v52;
      if ( v39 )
        ThreadLockExchange((__int64)v52, (__int64)v62);
      goto LABEL_74;
    }
LABEL_93:
    v13 = v50;
    goto LABEL_94;
  }
LABEL_96:
  *a4 = 1;
  v10 = 0;
LABEL_97:
  ThreadUnlock1(v15, v14);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v64[0];
  if ( v10 && (*(_DWORD *)(v9 + 72) & 0x20) == 0 && v53 && !v11 )
  {
    v48 = FindAndReferenceFrameById(*(_DWORD *)(v9 + 32));
    if ( v48 )
    {
      *((_DWORD *)v48 + 18) |= 0x20u;
      UnreferenceFrameInt(v48);
    }
  }
LABEL_103:
  UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v9);
  return v10;
}
