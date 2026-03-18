/*
 * XREFs of ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C01A50EC (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A5CC0 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB530 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB5EC (-IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01CB688 (-IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB838 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01CC00C (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01CC0D0 (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01CC7A4 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CD184 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ValidatePointerOffset @ 0x1C01D63E0 (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D6548 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F6020 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F6320 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F63C8 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
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
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rdx
  struct tagPOINTERINFONODE *v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  struct tagPOINT *v25; // r8
  ULONG_PTR v26; // rsi
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  struct tagWND *v30; // rax
  PointerList *v31; // rcx
  const struct tagPOINT *v32; // r8
  struct tagQ *NodeQueue; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  unsigned int v38; // r12d
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // ecx
  bool v44; // zf
  struct tagWND *v45; // rsi
  __int64 v46; // r8
  __int64 v47; // r9
  struct tagWND *v48; // rax
  PointerList *v49; // rcx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  struct tagWND *v55; // rax
  PointerList *v56; // rcx
  int v57; // eax
  unsigned int v58; // r13d
  __int64 v59; // r8
  __int64 v60; // r12
  unsigned int v61; // r10d
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 ThreadWin32Thread; // rax
  struct _LIST_ENTRY *v69; // rax
  struct tagPOINT *v70; // [rsp+28h] [rbp-D8h]
  unsigned int v71; // [rsp+50h] [rbp-B0h]
  unsigned int v72; // [rsp+54h] [rbp-ACh] BYREF
  struct tagWND *v73; // [rsp+58h] [rbp-A8h] BYREF
  int v74; // [rsp+60h] [rbp-A0h]
  unsigned int v75; // [rsp+64h] [rbp-9Ch]
  int v76; // [rsp+68h] [rbp-98h]
  unsigned int v77; // [rsp+6Ch] [rbp-94h]
  struct tagQ *QueueForCurrentNode; // [rsp+70h] [rbp-90h]
  struct tagPOINTERINFONODE *v79; // [rsp+80h] [rbp-80h]
  struct tagPOINT v80; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v81[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagTHREADINFO *v82; // [rsp+98h] [rbp-68h]
  int *v83; // [rsp+A0h] [rbp-60h]
  int v84; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-50h]
  _QWORD v86[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v87[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v88[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v89[80]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v90; // [rsp+140h] [rbp+40h]
  int v91; // [rsp+14Ch] [rbp+4Ch]

  v4 = a1;
  v82 = a1;
  v83 = a4;
  *a4 = 0;
  v5 = a3;
  v75 = a3;
  v80 = 0LL;
  if ( a3 == 595 )
    return 1LL;
  if ( a2 )
  {
    FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
    v9 = (__int64)FrameById;
    if ( FrameById )
    {
      v10 = 1;
      _InterlockedAdd((volatile signed __int32 *)&FrameById[2].Flink + 1, 1u);
      if ( ((__int64)FrameById[4].Blink & 0x20) != 0 )
      {
LABEL_110:
        UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v9);
        return v10;
      }
      v11 = (*((_DWORD *)v4 + 296) >> 13) & 1;
      v79 = (struct tagPOINTERINFONODE *)((char *)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32));
      v76 = IsNodeMessageDelegated(v79, v5);
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v76, v12);
      PushW32ThreadLock(v9, v88, (__int64)DereferencePointerInputFrame, v13);
      v71 = 0;
      v14 = 1;
      v74 = 1;
      v15 = gptiCurrent;
      v16 = *(struct tagPOINTERINFONODE **)(gptiCurrent + 392LL);
      v86[0] = v16;
      *(_QWORD *)(gptiCurrent + 392LL) = v86;
      v86[1] = 0LL;
      v17 = *(_QWORD *)(v9 + 88);
      if ( !*(_DWORD *)(v9 + 40) )
      {
LABEL_103:
        ThreadUnlock1(v16, v15);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67);
        *(_QWORD *)(ThreadWin32Thread + 16) = v88[0];
        if ( v14 && (*(_DWORD *)(v9 + 72) & 0x20) == 0 && v74 && !v11 )
        {
          v69 = FindFrameById(*(_DWORD *)(v9 + 32));
          if ( v69 )
          {
            _InterlockedAdd((volatile signed __int32 *)&v69[2].Flink + 1, 1u);
            LODWORD(v69[4].Blink) |= 0x20u;
            UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v69);
          }
        }
        v10 = v14;
        goto LABEL_110;
      }
      v18 = 0;
      while ( 1 )
      {
        if ( v11 && (*((_DWORD *)v4 + 296) & 0x2000) == 0 )
        {
LABEL_102:
          v14 = 1;
          goto LABEL_103;
        }
        if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v17) )
          goto LABEL_99;
        if ( !(unsigned int)IsTargetSetForRetrieval(v4, (const struct tagPOINTERINFONODE *)v17) )
          break;
        xxxHandleMTNodeTargetWindow((struct tagPOINTERINFONODE *)v17, v15, v19, v20);
        v23 = *(_DWORD *)(v17 + 4);
        if ( (v23 & 0x200) != 0 && (v23 & 0x800) == 0 && *(_DWORD *)(v17 + 56) == 2 )
        {
          LOBYTE(v15) = 1;
          v24 = HMValidateHandleNoSecure(*(_QWORD *)(v17 + 80), v15, v21, v22);
          v73 = (struct tagWND *)v24;
          v26 = v24;
          if ( v24 && *(struct tagTHREADINFO **)(v24 + 16) == v4 )
          {
            if ( (*(_DWORD *)(v17 + 68) & 0x10000) != 0 )
            {
              *(_DWORD *)(v17 + 4) |= 0x800u;
              LOBYTE(v27) = IsMessageOnlyWindow(v24);
              if ( !v27 )
              {
                ThreadLockExchange(v26, (__int64)v86);
                xxxPerformTargetingWithinPwnd(v26);
                QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v75, v76, v79);
                if ( !QueueForCurrentNode )
                  goto LABEL_101;
                if ( (unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v17) )
                {
                  LOBYTE(v15) = 1;
                  v30 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v17 + 80), v15, v28, v29);
                  v31 = *(PointerList **)(v17 + 16);
                  v73 = v30;
                  if ( (unsigned int)RecheckPointerCapture(v31, v11, &v73, (int *)&v72) )
                    ThreadLockExchange((__int64)v73, (__int64)v86);
                  if ( (unsigned int)ValidatePointerOffset(*(_QWORD *)(v17 + 88), v17 + 48, *(_QWORD *)v81, v81) )
                  {
                    PointerList::SetPointerOffset(
                      (PointerList *)*(unsigned __int16 *)(v17 + 60),
                      (unsigned __int16)v81,
                      v32);
                    *(_QWORD *)(v17 + 36) = *(_QWORD *)v81;
                  }
                }
              }
            }
            else
            {
              PointerList::GetPointerOffset((PointerList *)*(unsigned __int16 *)(v17 + 60), (unsigned __int16)v87, v25);
              v16 = *(struct tagPOINTERINFONODE **)v87;
              *(_QWORD *)(v17 + 36) = *(_QWORD *)v87;
            }
          }
          goto LABEL_98;
        }
LABEL_99:
        ++v18;
        v17 += 216LL;
        v71 = v18;
        if ( v18 >= *(_DWORD *)(v9 + 40) )
          goto LABEL_102;
        v5 = v75;
      }
      v16 = v79;
      if ( *(_DWORD *)(v17 + 8) != *((_DWORD *)v79 + 2)
        || (struct tagPOINTERINFONODE *)v17 != v79
        && (!v11 && !(unsigned int)IsAnyNodeMessageNonDelegated((const struct tagPOINTERINFONODE *)v17)
         || (NodeQueue = GetNodeQueue((const struct tagPOINTERINFONODE *)v17, &v84), v84)
         || NodeQueue && NodeQueue != QueueForCurrentNode) )
      {
        v74 = 0;
        goto LABEL_99;
      }
      if ( (*((_DWORD *)v4 + 296) & 0x2000) != 0 )
      {
        if ( (unsigned int)RecheckPointerCapture(*(PointerList **)(v17 + 16), v11, &v73, (int *)&v72) )
        {
          v39 = (__int64)v73;
          v38 = v72;
          goto LABEL_44;
        }
        v37 = *(_QWORD *)(v17 + 24);
        v38 = 1;
        v72 = 1;
        if ( v37 )
        {
          LOBYTE(v34) = 1;
          v39 = HMValidateHandleNoSecure(v37, v34, v35, v36);
          v73 = (struct tagWND *)v39;
        }
        else
        {
          v39 = 0LL;
          v73 = 0LL;
        }
        if ( v39 )
          goto LABEL_114;
        xxxPointerSpeedHitTest(0, (struct tagINPUTDEST *)v89);
        if ( v91 == 2 )
          v39 = v90;
        v73 = (struct tagWND *)v39;
LABEL_44:
        if ( v39 )
        {
LABEL_114:
          if ( *(_QWORD *)(v39 + 328) )
          {
            LODWORD(v70) = 0;
            PointerFrameList::SetPointerInfoNodeTarget(
              (PointerFrameList *)v9,
              (const struct tagPOINTERINPUTFRAME *)v71,
              (struct tagWND *)v39,
              (struct tagWND *)v38,
              &v80,
              v70,
              0,
              1,
              1);
            v74 = 0;
            if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v17) )
            {
              v40 = *(_DWORD *)(v17 + 68);
              if ( (v40 & 0x2000) != 0 && (v40 & 0x10000) != 0 )
                PostEventMessageEx(
                  *(struct tagTHREADINFO **)(v39 + 16),
                  *(_QWORD *)(*(_QWORD *)(v39 + 16) + 408LL),
                  0x14u,
                  v39,
                  0,
                  0LL,
                  *(_QWORD *)(v17 + 16),
                  0LL);
            }
            goto LABEL_98;
          }
        }
        v5 = v75;
      }
      v41 = *(unsigned int *)(v17 + 8);
      v42 = *(_QWORD *)(v9 + 96);
      v43 = *(_DWORD *)(v42 + 40 * v41 + 20);
      if ( (v43 & 1) != 0 && (*((_DWORD *)v4 + 296) & 0x2000) == 0 )
        *(_DWORD *)(v42 + 40 * v41 + 20) = v43 & 0xFFFFFFFE;
      v44 = *(_DWORD *)(v17 + 56) == 5;
      v72 = 1;
      if ( !v44 )
      {
        v45 = xxxDeterminePointerTargetWindow(
                v4,
                (const struct tagPOINTERINFONODE *)v17,
                QueueForCurrentNode,
                v11,
                (int *)&v72,
                &v80);
        v73 = v45;
        goto LABEL_58;
      }
      if ( !(unsigned int)xxxDetermineTouchpadPointerTargetWindow(
                            v4,
                            (const struct tagPOINTERINPUTFRAME *)v9,
                            (const struct tagPOINTERINFONODE *)v17,
                            QueueForCurrentNode,
                            v71,
                            v11,
                            (int *)&v72,
                            &v80,
                            &v73) )
        goto LABEL_98;
      v45 = v73;
LABEL_58:
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v76, v79);
      if ( !QueueForCurrentNode )
        goto LABEL_101;
      if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v17) )
        goto LABEL_98;
      ThreadLockExchange((__int64)v45, (__int64)v86);
      if ( v45 )
      {
        if ( (*(_DWORD *)(v17 + 68) & 0x10000) != 0 && *(_DWORD *)(v17 + 56) != 5 && (*(_DWORD *)(v17 + 4) & 0x80u) == 0 )
        {
          xxxPointerParentNotify(v45, (const struct tagPOINTERINFONODE *)v17);
          QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v76, v79);
          if ( !QueueForCurrentNode )
            goto LABEL_101;
          if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v17) )
            goto LABEL_98;
          LOBYTE(v15) = 1;
          v48 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v45, v15, v46, v47);
          v49 = *(PointerList **)(v17 + 16);
          v73 = v48;
          v50 = RecheckPointerCapture(v49, v11, &v73, (int *)&v72);
          v45 = v73;
          if ( v50 )
            ThreadLockExchange((__int64)v73, (__int64)v86);
        }
        if ( v45 )
        {
          v51 = *(_DWORD *)(v17 + 68);
          if ( (v51 & 0x10000) != 0 && (v51 & 0x2000) != 0 )
          {
            if ( (*(_DWORD *)(v17 + 4) & 0x80u) == 0
              || (LOBYTE(v52) = IsMessageOnlyWindow((__int64)v45), v52) && GetCompositionInputWindowUIOwner(v45)
              || (*((_BYTE *)v45 + 307) & 4) != 0 )
            {
              *(_DWORD *)(216LL * v71 + *(_QWORD *)(v9 + 88) + 32) = v72;
              xxxPointerActivateInternal(
                v45,
                -__CFSHR__(*(_DWORD *)(v17 + 4), 8),
                *(_WORD *)(v17 + 32),
                *(_QWORD *)(v17 + 16),
                (const struct tagPOINTEREVENTINT *)(v17 + 48));
              QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v76, v79);
              if ( QueueForCurrentNode )
              {
                if ( (unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v17) )
                {
                  LOBYTE(v15) = 1;
                  v55 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v45, v15, v53, v54);
                  v56 = *(PointerList **)(v17 + 16);
                  v73 = v55;
                  v57 = RecheckPointerCapture(v56, v11, &v73, (int *)&v72);
                  v45 = v73;
                  if ( v57 )
                    ThreadLockExchange((__int64)v73, (__int64)v86);
                  goto LABEL_79;
                }
LABEL_98:
                v18 = v71;
                goto LABEL_99;
              }
LABEL_101:
              v14 = 0;
              *v83 = 1;
              goto LABEL_103;
            }
          }
        }
      }
LABEL_79:
      LODWORD(v70) = 0;
      v58 = v72;
      PointerFrameList::SetPointerInfoNodeTarget(
        (PointerFrameList *)v9,
        (const struct tagPOINTERINPUTFRAME *)v71,
        v45,
        (struct tagWND *)v72,
        &v80,
        v70,
        0,
        1,
        0);
      if ( !v45 )
        goto LABEL_85;
      if ( (*(_DWORD *)(v17 + 68) & 0x10000) != 0 )
      {
        v59 = 1LL;
      }
      else
      {
        if ( v5 != 593 )
          goto LABEL_85;
        v59 = 2LL;
      }
      PointerList::SetPointerCapture(*(_QWORD *)(v17 + 16), v45, v59, v58, v11);
LABEL_85:
      if ( *(_DWORD *)(v17 + 56) != 5 || (*(_DWORD *)(v17 + 68) & 0x2000) == 0 || (v77 = 0, !v71) )
      {
LABEL_97:
        v4 = v82;
        goto LABEL_98;
      }
      v60 = 0LL;
      v16 = 0LL;
      v85 = 0LL;
      while ( 1 )
      {
        if ( !(unsigned int)IsPointerInfoNodeValid((struct tagPOINTERINFONODE *)((char *)v16 + *(_QWORD *)(v9 + 88))) )
          goto LABEL_96;
        LODWORD(v70) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          (PointerFrameList *)v9,
          (const struct tagPOINTERINPUTFRAME *)v61,
          v45,
          (struct tagWND *)v58,
          &v80,
          v70,
          0,
          1,
          0);
        if ( !v45 )
          goto LABEL_96;
        v62 = *(_QWORD *)(v9 + 88);
        if ( (*(_DWORD *)(v60 + v62 + 68) & 0x10000) != 0 )
          break;
        if ( v75 == 593 )
        {
          v63 = *(_QWORD *)(v17 + 16);
          v64 = 2LL;
          goto LABEL_95;
        }
LABEL_96:
        v16 = (struct tagPOINTERINFONODE *)(v85 + 216);
        ++v77;
        v60 += 216LL;
        v85 += 216LL;
        if ( v77 >= v71 )
          goto LABEL_97;
      }
      v63 = *(_QWORD *)(v60 + v62 + 16);
      v64 = 1LL;
LABEL_95:
      PointerList::SetPointerCapture(v63, v45, v64, v58, v11);
      goto LABEL_96;
    }
  }
  return 0LL;
}
