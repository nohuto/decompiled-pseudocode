/*
 * XREFs of ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0119F38 (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00AB6F0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00ABCF0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00ABD20 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00ABED0 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C010F774 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01116B8 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0111AD0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01123EC (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0112A84 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011384C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0116770 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01172B0 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0117968 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C0117AFC (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C011A24C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C011D810 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C011F9E0 (WPP_RECORDER_SF_LLL.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C013EB24 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     ApiSetEditionProcessPointerInputAsMouse @ 0x1C013FAC8 (ApiSetEditionProcessPointerInputAsMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessagesCore(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        int a4,
        const struct CPointerInputFrame *a5)
{
  unsigned int v7; // r13d
  PDEVICE_OBJECT v8; // rcx
  unsigned int v9; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  CInputThread *v13; // rdi
  bool v14; // bl
  CTouchProcessor *v15; // rcx
  const GUID *v16; // r8
  unsigned int v17; // edi
  const struct CPointerInfoNode *v18; // rbp
  unsigned int i; // ebx
  unsigned __int64 v20; // rcx
  BOOL v21; // ebx
  int v22; // edx
  __int64 v23; // rdx
  CTouchProcessor *v24; // rcx
  __int64 v25; // rax
  int v26; // ebp
  unsigned int *v27; // rbx
  int v28; // edi
  int v29; // r13d
  CTouchProcessor *v30; // rcx
  unsigned __int64 PrevMsgId; // rax
  int v32; // eax
  unsigned int v33; // eax
  __int64 *v34; // rbx
  unsigned int v35; // edi
  __int64 *v36; // rbx
  unsigned int j; // edi
  int v38; // edx
  int v39; // r8d
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  int v42; // r14d
  unsigned int v43; // edi
  int v44; // ebp
  int v45; // r13d
  unsigned int v46; // ebp
  __int64 v47; // rdx
  const GUID *v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // rbx
  unsigned int v51; // edi
  CTouchProcessor *v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // edi
  __int64 *k; // rbx
  CTouchProcessor *v56; // rcx
  const struct CPointerInfoNode *NodeForPointerPromotion; // rax
  CTouchProcessor *v58; // rcx
  const struct CPointerInfoNode *v59; // r14
  _DWORD *v60; // rdx
  __int64 v61; // rcx
  unsigned __int16 v62; // di
  int v64; // [rsp+20h] [rbp-88h]
  unsigned int v65; // [rsp+40h] [rbp-68h]
  int v66; // [rsp+44h] [rbp-64h]
  int v67; // [rsp+48h] [rbp-60h]
  unsigned __int64 v68; // [rsp+50h] [rbp-58h]
  _BYTE v69[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v70; // [rsp+B0h] [rbp+8h]
  int v71; // [rsp+B8h] [rbp+10h]
  int v73; // [rsp+D0h] [rbp+28h]

  v71 = a2;
  v7 = a2;
  v68 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = WPP_GLOBAL_Control;
  v9 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Eu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)a5 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  v13 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v13, 0LL);
  v14 = CInputThread::_CalledOnInputThread(v13);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 && gptiManipulationThread )
  {
    if ( !a4 )
    {
      if ( (unsigned int)CTouchProcessor::CountMTNodesReadyForRouting(v15, a5) )
      {
        EtwTraceDwmManipulationFrameStart(
          (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
          *((_DWORD *)a5 + 12),
          v16);
        PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
        CTouchProcessor::ForwardInputToManipulationThread(this, a5);
        PopW32ThreadLock(v69);
      }
      goto LABEL_18;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_18;
  }
  v17 = 0;
  v18 = (const struct CPointerInfoNode *)*((_QWORD *)a5 + 12);
  for ( i = 0; i < *((_DWORD *)a5 + 12); ++i )
  {
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, a5, v18, a4) )
      ++v17;
    v18 = (const struct CPointerInfoNode *)((char *)v18 + 576);
  }
  EtwTraceDwmManipulationFrameRouted((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10), v17, v16);
LABEL_18:
  v20 = *((unsigned int *)a5 + 20);
  v21 = !__CFSHR__(*((_DWORD *)a5 + 20), 2);
  v22 = v21;
  if ( !__CFSHR__(*((_DWORD *)a5 + 20), 2) && (v20 & 0x10) != 0 && !a4 )
  {
    PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CTouchProcessor::ProcessPrimaryDown(this, a5);
    PopW32ThreadLock(v69);
    v22 = (unsigned int)ApiSetEditionIsGpqForegroundAccessible(v7) != 0 && v21;
  }
  if ( v22 )
  {
    if ( (*((_DWORD *)a5 + 20) & 4) != 0 )
    {
      v20 = (unsigned int)-(a4 != 0);
      v22 &= v20;
    }
    if ( v22 )
    {
      EtwTraceBeginPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v16);
      v25 = *((unsigned int *)a5 + 12);
      v26 = 0;
      v27 = (unsigned int *)*((_QWORD *)a5 + 12);
      v28 = 0;
      v70 = 0;
      v29 = 0;
      v65 = 0;
      v66 = 0;
      v73 = 0;
      v67 = 0;
      if ( (_DWORD)v25 )
      {
        do
        {
          v30 = (CTouchProcessor *)(*((_QWORD *)a5 + 12) + 576 * v25);
          if ( v27 >= (unsigned int *)v30 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v23);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v30, a5, (const struct CPointerInfoNode *)v27, a4) )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v24, *((_QWORD *)v27 + 2));
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              this,
              (const struct CPointerInfoNode *)v27,
              PrevMsgId,
              v68,
              v71,
              a3);
            v24 = (CTouchProcessor *)*v27;
            if ( ((unsigned __int16)v24 & 0x1000) == 0 )
            {
              if ( ((unsigned __int8)v24 & 8) != 0 )
              {
                if ( __CFSHR__((_DWORD)v24, 7) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
                ++v26;
              }
              else if ( __CFSHR__((_DWORD)v24, 7) )
              {
                ++v29;
              }
              v32 = v28 + 1;
              v24 = (CTouchProcessor *)v27[61];
              if ( ((unsigned __int8)v24 & 1) == 0 )
                v32 = v28;
              v28 = v32;
              v33 = v70 + 1;
              if ( ((unsigned __int8)v24 & 2) != 0 )
                v33 = v70;
              v70 = v33;
              v23 = v33;
              if ( ((unsigned int)v24 & 0x10000) != 0 )
              {
                ++v65;
              }
              else if ( ((unsigned int)v24 & 0x40000) != 0 )
              {
                ++v73;
                v70 = v33;
              }
              else
              {
                if ( ((unsigned int)v24 & 0x20000) == 0 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v33);
                  v23 = v70;
                }
                ++v66;
                v70 = v23;
              }
            }
          }
          v25 = *((unsigned int *)a5 + 12);
          v27 += 144;
          ++v9;
        }
        while ( v9 < (unsigned int)v25 );
        v67 = v29;
        if ( v26 || v29 )
          goto LABEL_52;
      }
      if ( v28 )
      {
LABEL_52:
        v34 = (__int64 *)*((_QWORD *)a5 + 12);
        v35 = 0;
        if ( (_DWORD)v25 )
        {
          do
          {
            v24 = (CTouchProcessor *)(*((_QWORD *)a5 + 12) + 576 * v25);
            if ( v34 >= (__int64 *)v24 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
            if ( (*(_DWORD *)v34 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v24, a5, (const struct CPointerInfoNode *)v34, a4) )
            {
              CTouchProcessor::GenerateEnterMessages(this, a5, v35, v34[2], v68);
            }
            v25 = *((unsigned int *)a5 + 12);
            v34 += 72;
            ++v35;
          }
          while ( v35 < (unsigned int)v25 );
          v29 = v67;
        }
        if ( v29 )
        {
          v36 = (__int64 *)*((_QWORD *)a5 + 12);
          for ( j = 0; j < (unsigned int)v25; ++j )
          {
            v24 = (CTouchProcessor *)(*((_QWORD *)a5 + 12) + 576 * v25);
            if ( v36 >= (__int64 *)v24 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
            if ( (*(_DWORD *)v36 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v24, a5, (const struct CPointerInfoNode *)v36, a4) )
            {
              CTouchProcessor::GenerateCaptureAcquiredMessages(this, a5, j, v36[2], v68);
            }
            v25 = *((unsigned int *)a5 + 12);
            v36 += 72;
          }
        }
      }
      v40 = 0;
      if ( (unsigned int)CTouchProcessor::IsTouchpadDevice(v24, *((void **)a5 + 8)) )
      {
        v41 = v65;
        if ( (*((_DWORD *)a5 + 20) & 0x10) != 0 && v65 > 1 )
        {
          v42 = v73;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL(*((_QWORD *)this + 1), v38, v39, 79, v64, *((_DWORD *)a5 + 10), v65, v73);
          v43 = v68;
          v44 = v71;
          v40 = 0x2000;
          v45 = a3;
          CTouchProcessor::GeneratePointerInputMessages(this, a5, v68, v71, a3, 0x2000u, 0, a4);
          v41 = v65;
        }
        else
        {
          v45 = a3;
          v44 = v71;
          v42 = v73;
          v43 = v68;
        }
        if ( !v66 && v41 && v42 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_LLL(*((_QWORD *)this + 1), 0, v39, 80, v64, *((_DWORD *)a5 + 10), v41, v42);
          CTouchProcessor::GeneratePointerInputMessages(this, a5, v43, v44, v45, 0x10000u, v40, a4);
          v40 |= 0x10000u;
        }
      }
      else
      {
        v42 = v73;
      }
      v46 = v68;
      v7 = v71;
      CTouchProcessor::GeneratePointerInputMessages(this, a5, v68, v71, a3, 0, v40, a4);
      if ( v42 )
      {
        v49 = *((unsigned int *)a5 + 12);
        v50 = *((_QWORD *)a5 + 12);
        v51 = 0;
        if ( (_DWORD)v49 )
        {
          do
          {
            v52 = (CTouchProcessor *)(*((_QWORD *)a5 + 12) + 576 * v49);
            if ( v50 >= (unsigned __int64)v52 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v47);
            if ( (*(_DWORD *)v50 & 0x1000) == 0
              && CTouchProcessor::ShouldGenerateMessagesForNode(v52, a5, (const struct CPointerInfoNode *)v50, a4)
              && (*(_DWORD *)(v50 + 244) & 0x40000) != 0 )
            {
              CTouchProcessor::ProcessLostCaptureList(
                this,
                *(_WORD *)(v50 + 236),
                1,
                a5,
                v51,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            }
            v49 = *((unsigned int *)a5 + 12);
            v50 += 576LL;
            ++v51;
          }
          while ( v51 < (unsigned int)v49 );
          v46 = v68;
          v7 = v71;
        }
      }
      if ( v70 )
      {
        v53 = *((unsigned int *)a5 + 12);
        v54 = 0;
        for ( k = (__int64 *)*((_QWORD *)a5 + 12); v54 < (unsigned int)v53; ++v54 )
        {
          v56 = (CTouchProcessor *)(*((_QWORD *)a5 + 12) + 576 * v53);
          if ( k >= (__int64 *)v56 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v47);
          if ( CTouchProcessor::ShouldGenerateMessagesForNode(v56, a5, (const struct CPointerInfoNode *)k, a4) )
            CTouchProcessor::GenerateDepartureMessage(this, a5, v54, k[2], v46);
          v53 = *((unsigned int *)a5 + 12);
          k += 72;
        }
      }
      EtwTraceEndPointerFrameMessageGeneration(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a5 + 10),
        *((_DWORD *)a5 + 12),
        v48);
    }
  }
  NodeForPointerPromotion = CTouchProcessor::FindNodeForPointerPromotion((CTouchProcessor *)v20, a5);
  v59 = NodeForPointerPromotion;
  if ( NodeForPointerPromotion && CTouchProcessor::NodeMatchesMTGeneration(v58, NodeForPointerPromotion, a4) )
  {
    v61 = (*v60 & 0x8000u) >> 13;
    v62 = (a3 != 0 ? 2 : 0) | (v7 != 0) | v61 | ((*v60 & 0x10000u) >> 13) | ((*v60 & 0x40u) >> 2);
    if ( v60[60] != *((_DWORD *)a5 + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60);
    PushW32ThreadLock(a5, v69, CTouchProcessor::DereferencePointerInputFrameAndMessageData);
    CInpLockGuard::UnLock((PERESOURCE *)this + 9);
    ApiSetEditionProcessPointerInputAsMouse((char *)v59 + 232, *((unsigned __int16 *)v59 + 112), v62);
    CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
    PopW32ThreadLock(v69);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x51u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return 1LL;
}
