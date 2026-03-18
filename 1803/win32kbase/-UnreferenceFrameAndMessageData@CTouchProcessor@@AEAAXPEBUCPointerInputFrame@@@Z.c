/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DFA0
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0110700 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01121B4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011594C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0116770 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CInputThread *v4; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  int v18; // edi
  __int64 *PrevMsgId; // rax

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v8 = *((unsigned int *)gptiCurrent + 120);
  if ( (v8 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6);
  v9 = *((unsigned int *)a2 + 12);
  v10 = 0;
  for ( i = *((_QWORD *)a2 + 12); v10 < (unsigned int)v9; i += 576LL )
  {
    v12 = *((_QWORD *)a2 + 12) + 576 * v9;
    if ( i >= v12 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v6);
    if ( (*((_DWORD *)a2 + 20) & 1) != 0 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v6);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i, v6) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
        CTouchProcessor::FreePointerInfoNodeInt(this, a2, v10);
      }
    }
    else
    {
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12);
      if ( !CurrentProcess
        || CurrentProcess != g_pepDwm
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v17 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v16,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 51),
              ((unsigned __int8)v17 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v6, *((_DWORD *)a2 + 10), v10);
        }
        else
        {
          v18 = *(_DWORD *)(i + 244) & 2;
          if ( (*(_DWORD *)(i + 244) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v17, *(__int64 **)(i + 16));
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)PrevMsgId + 9) & 0x20) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
            }
          }
          if ( !v18 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v9 = *((unsigned int *)a2 + 12);
    ++v10;
  }
  CTouchProcessor::UnreferenceFrame(this, a2);
}
