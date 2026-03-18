/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124C0C (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00D99C0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00D9D40 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00D9D70 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00D9F20 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011B574 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011CA78 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C011E4D8 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011EC24 (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F0D4 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F264 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0120040 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01220C0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0122E28 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C0122F74 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0124108 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0127E00 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C012992C (WPP_RECORDER_SF_LLL.c)
 *     ApiSetClientCallManipulationThread @ 0x1C0139E1C (ApiSetClientCallManipulationThread.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013B0E0 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C013C228 (ApiSetEditionProcessPointerInputAsMouse.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        CTouchProcessor *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  unsigned int v7; // r15d
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdi
  bool v11; // bl
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  int v15; // edi
  struct _ERESOURCE *v16; // rcx
  CTouchProcessor *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  const struct CPointerInfoNode *v22; // rdi
  int MessagesForNode; // eax
  unsigned __int64 v24; // rcx
  int v25; // ebx
  int v26; // edx
  CTouchProcessor *v27; // rcx
  int *v28; // rbx
  int v29; // r15d
  int v30; // edi
  unsigned int v31; // ebp
  unsigned __int64 PrevMsgId; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ebp
  unsigned int v37; // edi
  __int64 *v38; // rbx
  unsigned int v39; // edi
  __int64 *i; // rbx
  int v41; // edx
  int v42; // r8d
  unsigned int v43; // ebx
  unsigned int v44; // ecx
  int v45; // edi
  int v46; // ebp
  int v47; // r15d
  int v48; // r8d
  CTouchProcessor *v49; // rcx
  unsigned int v50; // edi
  __int64 j; // rbx
  int v52; // eax
  unsigned int v53; // ebx
  __int64 *k; // rdi
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  _DWORD *v56; // rdx
  CTouchProcessor *v57; // rcx
  const struct CPointerInfoNode *v58; // r12
  __int16 v59; // r15
  int v60; // esi
  unsigned int v61; // edi
  struct _ERESOURCE *v62; // rcx
  int v64; // [rsp+20h] [rbp-88h]
  int v65; // [rsp+40h] [rbp-68h]
  unsigned int v66; // [rsp+44h] [rbp-64h]
  int v67; // [rsp+48h] [rbp-60h]
  int v68; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v69[88]; // [rsp+50h] [rbp-58h] BYREF
  int v71; // [rsp+B8h] [rbp+10h]
  int v73; // [rsp+D0h] [rbp+28h]

  v71 = a2;
  v7 = a2;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  LODWORD(v9) = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      66,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v10, 0LL);
  v11 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v10 + 40);
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 && gptiManipulationThread )
  {
    if ( !a4 )
    {
      v15 = CTouchProcessor::CountMTNodesReadyForRouting(v12, a5);
      if ( v15 )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)a5 + 10), *((_DWORD *)a5 + 12), v13);
        PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        v16 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
        *((_QWORD *)this + 29) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(v16);
        v18 = CTouchProcessor::CalcManipulationInputInfoSize(v17, v15);
        ApiSetClientCallManipulationThread(v19, a5, v18);
        CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
        PopW32ThreadLock(v69);
      }
      goto LABEL_15;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_15;
  }
  v20 = *((_DWORD *)a5 + 12);
  v21 = 0;
  v22 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 12);
  if ( v20 )
  {
    v9 = v20;
    do
    {
      MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode(v12, a5, v22, a4);
      v22 = (const struct CPointerInfoNode *)((char *)v22 + 608);
      v12 = (CTouchProcessor *)(v21 + 1);
      if ( !MessagesForNode )
        v12 = (CTouchProcessor *)v21;
      v21 = (unsigned int)v12;
      --v9;
    }
    while ( v9 );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a5 + 10), v21, v13);
LABEL_15:
  v24 = *((unsigned int *)a5 + 20);
  v25 = v9;
  LOBYTE(v25) = !__CFSHR__(*((_DWORD *)a5 + 20), 2);
  v26 = v25;
  if ( !__CFSHR__(*((_DWORD *)a5 + 20), 2) && (v24 & 0x10) != 0 && !a4 )
  {
    PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown(this, a5);
    PopW32ThreadLock(v69);
    v26 = (unsigned int)ApiSetEditionIsGpqForegroundAccessible(v7) != 0 ? v25 : 0;
  }
  if ( v26 )
  {
    if ( (*((_DWORD *)a5 + 20) & 4) != 0 )
    {
      v24 = (unsigned int)-(a4 != 0);
      v26 &= v24;
    }
    if ( v26 )
    {
      EtwTraceBeginPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v13);
      v28 = (int *)*((_QWORD *)a5 + 12);
      v29 = v9;
      v30 = v9;
      v67 = v9;
      v66 = v9;
      v68 = v9;
      v73 = v9;
      v65 = v9;
      v31 = 0;
      if ( *((_DWORD *)a5 + 12) )
      {
        do
        {
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v27, a5, (const struct CPointerInfoNode *)v28, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v27, *((_QWORD *)v28 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              this,
              (const struct CPointerInfoNode *)v28,
              PrevMsgId,
              v8,
              v71,
              a3);
            v33 = *v28;
            if ( (*v28 & 0x1000) == 0 )
            {
              if ( (v33 & 8) != 0 )
              {
                ++v29;
              }
              else if ( (v33 & 0x40) != 0 )
              {
                ++v65;
              }
              v27 = (CTouchProcessor *)(unsigned int)v28[65];
              v34 = v30 + 1;
              if ( ((unsigned __int8)v27 & 1) == 0 )
                v34 = v30;
              v30 = v34;
              v35 = v67 + 1;
              if ( ((unsigned __int8)v27 & 2) != 0 )
                v35 = v67;
              v67 = v35;
              if ( ((unsigned int)v27 & 0x10000) != 0 )
              {
                ++v66;
              }
              else
              {
                v67 = v35;
                if ( ((unsigned int)v27 & 0x40000) != 0 )
                  ++v73;
                else
                  ++v68;
              }
            }
          }
          v28 += 152;
          ++v31;
        }
        while ( v31 < *((_DWORD *)a5 + 12) );
        v36 = v65;
        if ( v29 || v65 || v30 )
        {
          v37 = 0;
          v38 = (__int64 *)*((_QWORD *)a5 + 12);
          if ( *((_DWORD *)a5 + 12) )
          {
            do
            {
              if ( (*(_DWORD *)v38 & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v27, a5, (const struct CPointerInfoNode *)v38, a4) )
              {
                CTouchProcessor::GenerateEnterMessages(this, a5, v37, v38[2], v8);
              }
              v38 += 76;
              ++v37;
            }
            while ( v37 < *((_DWORD *)a5 + 12) );
            v36 = v65;
          }
          if ( v36 )
          {
            v39 = 0;
            for ( i = (__int64 *)*((_QWORD *)a5 + 12); v39 < *((_DWORD *)a5 + 12); ++v39 )
            {
              if ( (*(_DWORD *)i & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v27, a5, (const struct CPointerInfoNode *)i, a4) )
              {
                CTouchProcessor::GenerateCaptureAcquiredMessages(this, a5, v39, i[2], v8);
              }
              i += 76;
            }
          }
        }
      }
      if ( (unsigned int)CTouchProcessor::IsTouchpadDevice(v27, *((void **)a5 + 8)) )
      {
        v43 = 0;
        v44 = v66;
        if ( (*((_DWORD *)a5 + 20) & 0x10) != 0 && v66 > 1 )
        {
          v45 = v73;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL(*((_QWORD *)this + 1), v41, v42, 67, v64, *((_DWORD *)a5 + 10), v66, v73);
          v46 = a3;
          v43 = 0x2000;
          v47 = v71;
          CTouchProcessor::GeneratePointerInputMessages(this, a5, v8, v71, a3, 0x2000u, 0, a4);
          v44 = v66;
        }
        else
        {
          v46 = a3;
          v47 = v71;
          v45 = v73;
        }
        if ( !v68 && v44 && v45 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL(*((_QWORD *)this + 1), 0, v42, 68, v64, *((_DWORD *)a5 + 10), v44, v45);
          CTouchProcessor::GeneratePointerInputMessages(this, a5, v8, v47, v46, 0x10000u, v43, a4);
          v43 |= 0x10000u;
        }
        CTouchProcessor::GeneratePointerInputMessages(this, a5, v8, v47, v46, 0, v43, a4);
      }
      else
      {
        CTouchProcessor::GeneratePointerInputMessages(this, a5, v8, v71, a3, 0, 0, a4);
        v45 = v73;
      }
      v49 = 0LL;
      if ( v45 )
      {
        v50 = 0;
        for ( j = *((_QWORD *)a5 + 12); v50 < *((_DWORD *)a5 + 12); ++v50 )
        {
          if ( (*(_DWORD *)j & 0x1000) == 0 )
          {
            v52 = CTouchProcessor::ShouldGenerateMessagesForNode(0LL, a5, (const struct CPointerInfoNode *)j, a4);
            v49 = 0LL;
            if ( !v52 || (*(_DWORD *)(j + 260) & 0x40000) == 0 )
              goto LABEL_77;
            CTouchProcessor::ProcessLostCaptureList(
              this,
              *(_WORD *)(j + 252),
              1,
              a5,
              v50,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          v49 = 0LL;
LABEL_77:
          j += 608LL;
        }
      }
      if ( v67 )
      {
        v53 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 12); v53 < *((_DWORD *)a5 + 12); ++v53 )
        {
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v49, a5, (const struct CPointerInfoNode *)k, a4) )
            CTouchProcessor::GenerateDepartureMessage(this, a5, v53, k[2], v8);
          k += 76;
        }
      }
      EtwTraceEndPointerFrameMessageGeneration(*((_DWORD *)a5 + 10), *((_DWORD *)a5 + 12), v48);
      LODWORD(v9) = 0;
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v24, a5, v13);
  v58 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v57, NodeForPointerPromotion, a4) )
  {
    HIBYTE(v59) = BYTE1(v9);
    LOBYTE(v59) = v71 != (_DWORD)v9;
    LODWORD(v9) = (*v56 >> 13) & 4;
    v60 = (*v56 >> 13) & 8;
    v61 = (*v56 & 0x40u) >> 2;
    PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    v62 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
    *((_QWORD *)this + 29) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(v62);
    ApiSetEditionProcessPointerInputAsMouse(
      (char *)v58 + 248,
      *((unsigned __int16 *)v58 + 120),
      (unsigned __int16)(v61 | v60 | v9 | (a3 != 0 ? 2 : 0) | v59));
    CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
    PopW32ThreadLock(v69);
    LOWORD(v9) = 0;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v9 )
  {
    LOBYTE(v56) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v56,
      11,
      69,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  return 1LL;
}
