/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124264 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00DFD20 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00E0070 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00E00A0 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00E0250 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011B8DC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C011D2A0 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DACC (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DF7C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011E104 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011EEA8 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0121690 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0122480 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01225C4 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C012748C (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C0129278 (WPP_RECORDER_SF_LLL.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013A3A4 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C013B450 (ApiSetEditionProcessPointerInputAsMouse.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        PERESOURCE *this,
        int a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  unsigned int v7; // r13d
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  bool v10; // bl
  CTouchProcessor *v11; // rcx
  const GUID *v12; // r8
  unsigned int v14; // eax
  unsigned int v15; // ebx
  const struct CPointerInfoNode *v16; // rdi
  __int64 v17; // r14
  int MessagesForNode; // eax
  unsigned __int64 v19; // rcx
  BOOL v20; // ebx
  int v21; // edx
  CTouchProcessor *v22; // rcx
  int v23; // r14d
  int v24; // ebx
  unsigned int v25; // r13d
  int *v26; // rdi
  unsigned __int64 PrevMsgId; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // r13d
  __int64 *v33; // rbx
  unsigned int v34; // edi
  unsigned int v35; // edi
  __int64 *i; // rbx
  int v37; // edx
  int v38; // r8d
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  int v41; // edi
  int v42; // r14d
  CTouchProcessor *v43; // rcx
  const GUID *v44; // r8
  unsigned int v45; // edi
  __int64 v46; // rbx
  __int64 *v47; // rdi
  unsigned int j; // ebx
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  CTouchProcessor *v50; // rcx
  const struct CPointerInfoNode *v51; // r14
  int *v52; // rdx
  int v53; // edi
  struct _ERESOURCE *v54; // rcx
  int v56; // [rsp+20h] [rbp-88h]
  int v57; // [rsp+40h] [rbp-68h]
  unsigned int v58; // [rsp+44h] [rbp-64h]
  int v59; // [rsp+48h] [rbp-60h]
  int v60; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v61[80]; // [rsp+58h] [rbp-50h] BYREF
  int v64; // [rsp+D0h] [rbp+28h]

  v7 = a2;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x42u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9, 0LL);
  v10 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v9 + 40);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 && gptiManipulationThread )
  {
    if ( !a4 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v11, a5) )
      {
        EtwTraceDwmManipulationFrameStart(
          (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
          *((_DWORD *)a5 + 12),
          v12);
        PushW32ThreadLock(a5, v61, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread((CTouchProcessor *)this, a5);
        PopW32ThreadLock(v61);
      }
      goto LABEL_15;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_15;
  }
  v14 = *((_DWORD *)a5 + 12);
  v15 = 0;
  v16 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 12);
  if ( v14 )
  {
    v17 = v14;
    do
    {
      MessagesForNode = CTouchProcessor::ShouldGenerateMessagesForNode(v11, a5, v16, a4);
      v16 = (const struct CPointerInfoNode *)((char *)v16 + 608);
      v11 = (CTouchProcessor *)(v15 + 1);
      if ( !MessagesForNode )
        v11 = (CTouchProcessor *)v15;
      v15 = (unsigned int)v11;
      --v17;
    }
    while ( v17 );
  }
  EtwTraceDwmManipulationFrameRouted((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10), v15, v12);
LABEL_15:
  v19 = *((unsigned int *)a5 + 20);
  v20 = !__CFSHR__(*((_DWORD *)a5 + 20), 2);
  v21 = v20;
  if ( !__CFSHR__(*((_DWORD *)a5 + 20), 2) && (v19 & 0x10) != 0 && !a4 )
  {
    PushW32ThreadLock(a5, v61, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown((CTouchProcessor *)this, a5);
    PopW32ThreadLock(v61);
    v21 = (unsigned int)ApiSetEditionIsGpqForegroundAccessible(v7) != 0 && v20;
  }
  if ( v21 )
  {
    if ( (*((_DWORD *)a5 + 20) & 4) != 0 )
    {
      v19 = (unsigned int)-(a4 != 0);
      v21 &= v19;
    }
    if ( v21 )
    {
      EtwTraceBeginPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v12);
      v59 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v58 = 0;
      v60 = 0;
      v64 = 0;
      v57 = 0;
      v26 = (int *)*((_QWORD *)a5 + 12);
      if ( *((_DWORD *)a5 + 12) )
      {
        do
        {
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v22, a5, (const struct CPointerInfoNode *)v26, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v22, *((_QWORD *)v26 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)this,
              (const struct CPointerInfoNode *)v26,
              PrevMsgId,
              v8,
              a2,
              a3);
            v28 = *v26;
            if ( (*v26 & 0x1000) == 0 )
            {
              if ( (v28 & 8) != 0 )
              {
                ++v23;
              }
              else if ( (v28 & 0x40) != 0 )
              {
                ++v57;
              }
              v22 = (CTouchProcessor *)(unsigned int)v26[65];
              v29 = v24 + 1;
              if ( ((unsigned __int8)v22 & 1) == 0 )
                v29 = v24;
              v24 = v29;
              v30 = v59 + 1;
              if ( ((unsigned __int8)v22 & 2) != 0 )
                v30 = v59;
              v59 = v30;
              if ( ((unsigned int)v22 & 0x10000) != 0 )
              {
                ++v58;
              }
              else
              {
                v59 = v30;
                if ( ((unsigned int)v22 & 0x40000) != 0 )
                  ++v64;
                else
                  ++v60;
              }
            }
          }
          v31 = *((_DWORD *)a5 + 12);
          v26 += 152;
          ++v25;
        }
        while ( v25 < v31 );
        v32 = v57;
        if ( v23 || v57 || v24 )
        {
          v33 = (__int64 *)*((_QWORD *)a5 + 12);
          v34 = 0;
          if ( v31 )
          {
            do
            {
              if ( (*(_DWORD *)v33 & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v22, a5, (const struct CPointerInfoNode *)v33, a4) )
              {
                CTouchProcessor::GenerateEnterMessages((CTouchProcessor *)this, a5, v34, v33[2], v8);
              }
              v33 += 76;
              ++v34;
            }
            while ( v34 < *((_DWORD *)a5 + 12) );
            v32 = v57;
          }
          if ( v32 )
          {
            v35 = 0;
            for ( i = (__int64 *)*((_QWORD *)a5 + 12); v35 < *((_DWORD *)a5 + 12); ++v35 )
            {
              if ( (*(_DWORD *)i & 0x1000) == 0
                && CTouchProcessor::ShouldGenerateMessagesForNode(v22, a5, (const struct CPointerInfoNode *)i, a4) )
              {
                CTouchProcessor::GenerateCaptureAcquiredMessages((CTouchProcessor *)this, a5, v35, i[2], v8);
              }
              i += 76;
            }
          }
        }
      }
      if ( (unsigned int)CTouchProcessor::IsTouchpadDevice(v22, *((void **)a5 + 8)) )
      {
        v39 = 0;
        v40 = v58;
        if ( (*((_DWORD *)a5 + 20) & 0x10) != 0 && v58 > 1 )
        {
          v41 = v64;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL((unsigned int)this[1], v37, v38, 67, v56, *((_DWORD *)a5 + 10), v58, v64);
          v7 = a2;
          v39 = 0x2000;
          v42 = a3;
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v8, a2, a3, 0x2000u, 0, a4);
          v40 = v58;
        }
        else
        {
          v42 = a3;
          v7 = a2;
          v41 = v64;
        }
        if ( !v60 && v40 && v41 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL((unsigned int)this[1], 0, v38, 68, v56, *((_DWORD *)a5 + 10), v40, v41);
          CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v8, v7, v42, 0x10000u, v39, a4);
          v39 |= 0x10000u;
        }
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v8, v7, v42, 0, v39, a4);
      }
      else
      {
        v7 = a2;
        CTouchProcessor::GeneratePointerInputMessages((CTouchProcessor *)this, a5, v8, a2, a3, 0, 0, a4);
        v41 = v64;
      }
      if ( v41 )
      {
        v45 = 0;
        v46 = *((_QWORD *)a5 + 12);
        if ( *((_DWORD *)a5 + 12) )
        {
          do
          {
            if ( (*(_DWORD *)v46 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v43, a5, (const struct CPointerInfoNode *)v46, a4)
              && (*(_DWORD *)(v46 + 260) & 0x40000) != 0 )
            {
              CTouchProcessor::ProcessLostCaptureList(
                (CTouchProcessor *)this,
                *(_WORD *)(v46 + 252),
                1,
                a5,
                v45,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            }
            v46 += 608LL;
            ++v45;
          }
          while ( v45 < *((_DWORD *)a5 + 12) );
          v7 = a2;
        }
      }
      if ( v59 )
      {
        v47 = (__int64 *)*((_QWORD *)a5 + 12);
        for ( j = 0; j < *((_DWORD *)a5 + 12); ++j )
        {
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v43, a5, (const struct CPointerInfoNode *)v47, a4) )
            CTouchProcessor::GenerateDepartureMessage((CTouchProcessor *)this, a5, j, v47[2], v8);
          v47 += 76;
        }
      }
      EtwTraceEndPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v44);
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v19, a5, (__int64)v12);
  v51 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v50, NodeForPointerPromotion, a4) )
  {
    v53 = *v52;
    PushW32ThreadLock(a5, v61, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    v54 = this[28];
    this[32] = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(v54);
    ApiSetEditionProcessPointerInputAsMouse(
      (char *)v51 + 248,
      *((unsigned __int16 *)v51 + 120),
      (a3 != 0 ? 2 : 0) | (v7 != 0) | (unsigned __int16)(((unsigned __int16)(v53 & 0x8000) >> 13) | ((v53 & 0x10000u) >> 13) | ((unsigned __int8)(v53 & 0x40) >> 2)));
    CInpLockGuard::LockExclusive(this + 28);
    PopW32ThreadLock(v61);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x45u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  return 1LL;
}
