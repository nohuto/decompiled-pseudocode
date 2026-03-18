/*
 * XREFs of ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C5400 (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01C57EC (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6ABC (-IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01C6FC8 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01C7544 (-ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C8FA8 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01C9A8C (CalcManipulationInputInfoSize.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D54CC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01EA114 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     xxxClientCallManipulationThread @ 0x1C01FF9F0 (xxxClientCallManipulationThread.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessagesCore(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const struct tagPOINTERINPUTFRAME *a4)
{
  __int16 v5; // r14
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 ThreadWin32Thread; // rax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  const struct tagPOINTERINFONODE *v13; // rdi
  __int64 v14; // rsi
  int MessagesForNode; // eax
  bool v16; // zf
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // ebp
  int *v27; // rdi
  int v28; // ebx
  int v29; // r12d
  unsigned int v30; // esi
  unsigned __int64 v31; // rdx
  __int64 PrevMsgId; // rax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // edi
  __int64 i; // rbx
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // esi
  __int64 j; // rdi
  __int64 v43; // rbx
  __int64 v44; // rbp
  struct tagINPUTPOINTERNODE *NodeById; // rax
  _QWORD **v46; // rax
  _QWORD *k; // rcx
  _QWORD *v48; // rdx
  _QWORD *v49; // rax
  unsigned int v50; // r12d
  unsigned int v51; // ebx
  unsigned int v52; // eax
  int v53; // edi
  unsigned int v54; // edi
  __int64 v55; // rbx
  unsigned int v56; // ebx
  __int64 m; // rdi
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // r12
  const struct tagPOINTERINFONODE *v61; // rcx
  int v62; // r8d
  unsigned int v63; // r10d
  __int16 v64; // r9
  int v65; // esi
  unsigned int v66; // ebx
  int v67; // edi
  unsigned __int16 v68; // r9
  __int64 v69; // rax
  unsigned int v71; // [rsp+40h] [rbp-68h]
  int v72; // [rsp+44h] [rbp-64h]
  int v73; // [rsp+48h] [rbp-60h]
  unsigned __int64 v74; // [rsp+50h] [rbp-58h]
  _QWORD v75[10]; // [rsp+58h] [rbp-50h] BYREF
  int v78; // [rsp+C8h] [rbp+20h]

  HIBYTE(v5) = 0;
  v74 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( gptiCurrent == gptiDit && gptiManipulationThread )
  {
    if ( !a3 )
    {
      v8 = CountMTNodesReadyForRouting(a4);
      if ( v8 )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
        PushW32ThreadLock((__int64)a4, v75, (__int64)DereferencePointerInputFrameAndMessageData);
        v9 = CalcManipulationInputInfoSize(v8);
        xxxClientCallManipulationThread(glpfnManipulationThreadCallback, a4, v9);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v75[0];
      }
      goto LABEL_13;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_13;
  }
  v11 = *((_DWORD *)a4 + 10);
  v12 = 0;
  v13 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a4 + 11);
  if ( v11 )
  {
    v14 = v11;
    do
    {
      MessagesForNode = ShouldGenerateMessagesForNode(a4, v13);
      v13 = (const struct tagPOINTERINFONODE *)((char *)v13 + 216);
      v16 = MessagesForNode == 0;
      v17 = v12 + 1;
      if ( v16 )
        v17 = v12;
      v12 = v17;
      --v14;
    }
    while ( v14 );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a4 + 8), v12);
LABEL_13:
  v18 = *((_DWORD *)a4 + 18);
  v19 = !__CFSHR__(v18, 2);
  if ( !__CFSHR__(v18, 2) && (v18 & 0x10) != 0 && !a3 )
  {
    PushW32ThreadLock((__int64)a4, v75, (__int64)DereferencePointerInputFrameAndMessageData);
    xxxProcessPointerPrimaryDown(a4);
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v20 + 16) = v75[0];
    if ( a1 )
    {
      if ( gpqForeground )
      {
        v21 = *(_QWORD *)(gptiCurrent + 376LL);
        v22 = *(_QWORD *)(gpqForeground + 380LL);
        v23 = *(_QWORD *)(v21 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v23 <= (unsigned int)v22 )
          {
            if ( (_DWORD)v23 != (_DWORD)v22
              || (v24 = HIDWORD(v23), v25 = HIDWORD(v22), (_DWORD)v24 != (_DWORD)v25)
              && (_DWORD)v24 != -1
              && (_DWORD)v25 != -1 )
            {
              if ( *(int *)(v21 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
              {
                EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                v19 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( v19 )
  {
    if ( (*((_DWORD *)a4 + 18) & 4) != 0 )
      v19 = a3 != 0 ? v19 : 0;
    if ( v19 )
    {
      EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
      v26 = 0;
      v27 = (int *)*((_QWORD *)a4 + 11);
      v28 = 0;
      v72 = 0;
      v29 = 0;
      v71 = 0;
      v30 = 0;
      v73 = 0;
      v78 = 0;
      if ( *((_DWORD *)a4 + 10) )
      {
        do
        {
          if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v27) )
          {
            PrevMsgId = PointerList::GetPrevMsgId(*((PointerList **)v27 + 2), v31);
            ProcessAndUnreferencePreviousInput((const struct tagPOINTERINFONODE *)v27, PrevMsgId, v74, a1, a2);
            v33 = *v27;
            if ( (*v27 & 0x1000) == 0 )
            {
              if ( (v33 & 8) != 0 )
              {
                ++v26;
              }
              else if ( (v33 & 0x40) != 0 )
              {
                ++v29;
              }
              v34 = v27[17];
              v35 = v28 + 1;
              if ( (v34 & 1) == 0 )
                v35 = v28;
              v28 = v35;
              v36 = v72 + 1;
              if ( (v34 & 2) != 0 )
                v36 = v72;
              v72 = v36;
              if ( (v34 & 0x10000) != 0 )
              {
                ++v71;
              }
              else
              {
                v72 = v36;
                if ( (v34 & 0x40000) != 0 )
                  ++v78;
                else
                  ++v73;
              }
            }
          }
          v27 += 54;
          ++v30;
        }
        while ( v30 < *((_DWORD *)a4 + 10) );
        if ( v26 || v29 || v28 )
        {
          v37 = 0;
          for ( i = *((_QWORD *)a4 + 11); v37 < *((_DWORD *)a4 + 10); ++v37 )
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)i)
              && (*(_DWORD *)i & 0x1000) == 0 )
            {
              if ( (v39 = *((_QWORD *)a4 + 11) + 216LL * v37, (*(_DWORD *)(v39 + 68) & 1) != 0)
                || (v40 = *(_DWORD *)v39, (*(_DWORD *)v39 & 4) == 0) && (v40 & 8) != 0
                || (v40 & 0x40) != 0 )
              {
                GeneratePointerMessage(
                  (const struct tagPOINTERINFONODE *)v39,
                  *(_QWORD *)(i + 16),
                  0x249u,
                  v74,
                  a1,
                  a2,
                  0LL);
              }
            }
            i += 216LL;
          }
          if ( v29 )
          {
            v41 = 0;
            for ( j = *((_QWORD *)a4 + 11); v41 < *((_DWORD *)a4 + 10); ++v41 )
            {
              if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)j) )
              {
                if ( (*(_DWORD *)j & 0x1000) == 0 )
                {
                  v43 = *((_QWORD *)a4 + 11) + 216LL * v41;
                  if ( (*(_DWORD *)v43 & 0x40) != 0 )
                  {
                    GeneratePointerMessage(
                      (const struct tagPOINTERINFONODE *)(*((_QWORD *)a4 + 11) + 216LL * v41),
                      *(_QWORD *)(j + 16),
                      0x251u,
                      v74,
                      a1,
                      a2,
                      0LL);
                    v44 = *(_QWORD *)(v43 + 80);
                    NodeById = FindNodeById(*(_WORD *)(v43 + 60), 0, 0);
                    if ( NodeById )
                    {
                      v46 = (_QWORD **)((char *)NodeById + 136);
                      for ( k = *v46; k != v46; k = (_QWORD *)*k )
                      {
                        if ( k[2] == v44 )
                        {
                          v48 = (_QWORD *)*k;
                          v49 = (_QWORD *)k[1];
                          if ( *(_QWORD **)(*k + 8LL) != k || (_QWORD *)*v49 != k )
                            __fastfail(3u);
                          *v49 = v48;
                          v48[1] = v49;
                          Win32FreePool(k);
                          break;
                        }
                      }
                    }
                  }
                }
              }
              j += 216LL;
            }
          }
        }
      }
      v50 = a1;
      if ( IsTouchpadDevice(*((_QWORD *)a4 + 7)) )
      {
        v51 = 0;
        v52 = v71;
        if ( (*((_DWORD *)a4 + 18) & 0x10) != 0 && v71 > 1 )
        {
          v51 = 0x2000;
          GeneratePointerInputMessages(a4, v74, a1, a2, 0x2000u, 0, a3);
          v52 = v71;
        }
        v53 = v78;
        if ( !v73 && v52 && v78 )
        {
          GeneratePointerInputMessages(a4, v74, a1, a2, 0x10000u, v51, a3);
          v51 |= 0x10000u;
        }
        GeneratePointerInputMessages(a4, v74, a1, a2, 0, v51, a3);
      }
      else
      {
        GeneratePointerInputMessages(a4, v74, a1, a2, 0, 0, a3);
        v53 = v78;
      }
      if ( v53 )
      {
        v54 = 0;
        v55 = *((_QWORD *)a4 + 11);
        if ( *((_DWORD *)a4 + 10) )
        {
          do
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v55)
              && (*(_DWORD *)v55 & 0x1000) == 0
              && (*(_DWORD *)(v55 + 68) & 0x40000) != 0 )
            {
              ProcessLostCaptureList(
                *(_WORD *)(v55 + 60),
                1,
                a4,
                v54,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            }
            v55 += 216LL;
            ++v54;
          }
          while ( v54 < *((_DWORD *)a4 + 10) );
          v50 = a1;
        }
      }
      if ( v72 )
      {
        v56 = 0;
        for ( m = *((_QWORD *)a4 + 11); v56 < *((_DWORD *)a4 + 10); ++v56 )
        {
          if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)m) )
          {
            v58 = *(_QWORD *)(m + 16);
            v59 = *((_QWORD *)a4 + 11) + 216LL * v56;
            if ( (*(_DWORD *)(v59 + 68) & 2) == 0 )
            {
              if ( (*(_DWORD *)v59 & 0x1000) == 0 )
                GeneratePointerMessage((const struct tagPOINTERINFONODE *)v59, v58, 0x24Au, v74, v50, a2, 0LL);
              UnreferenceMsgData(v58, 1u, 0LL);
            }
          }
          m += 216LL;
        }
      }
      EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)a4 + 13) + 24LL) != 7 && ((*((_DWORD *)a4 + 18) & 8) != 0 || word_1C032C3B0) )
  {
    v60 = *((_QWORD *)a4 + 11);
    if ( *((_DWORD *)a4 + 10) )
    {
      while ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v60)
           || (*(_DWORD *)v60 & 0x1000) != 0
           || !(unsigned int)IsPointerInfoNodePrimary(v61) && v64 != *(_WORD *)(v60 + 60) )
      {
        v60 += 216LL;
        if ( v62 + 1 >= v63 )
          goto LABEL_112;
      }
    }
    else
    {
LABEL_112:
      v60 = 0LL;
    }
    if ( v60 && (unsigned int)NodeMatchesMTGeneration((const struct tagPOINTERINFONODE *)v60) )
    {
      LOBYTE(v5) = a1 != 0;
      v65 = (*(_DWORD *)v60 >> 13) & 4;
      v66 = (*(_DWORD *)v60 & 0x40u) >> 2;
      v67 = (*(_DWORD *)v60 >> 13) & 8;
      PushW32ThreadLock((__int64)a4, v75, (__int64)DereferencePointerInputFrameAndMessageData);
      PointerPromotion::xxxProcessPointerInputAsMouse(
        (PointerPromotion *)(v60 + 56),
        (const struct tagPOINTER_INFO *)*(unsigned __int16 *)(v60 + 48),
        v67 | v66 | v65 | (a2 != 0 ? 2 : 0) | v5,
        v68);
      v69 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v69 + 16) = v75[0];
    }
  }
  return 1LL;
}
