/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C011E838
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D168 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int HistoryCount; // edi
  CTouchProcessor *v17; // rsi
  CTouchProcessor *v18; // r12
  unsigned int v19; // ebx
  bool v20; // zf
  char *v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdx
  CTouchProcessor *v24; // rcx

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3, v12);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  v17 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v18 = (CTouchProcessor *)((char *)this + 120);
  v19 = *((_DWORD *)a3 + 96);
  if ( v17 == (CTouchProcessor *)((char *)this + 120) )
  {
LABEL_20:
    v20 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v20 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v21 = (char *)v17 - 8;
      v17 = *(CTouchProcessor **)v17;
      if ( *((_QWORD *)v21 + 8) == *((_QWORD *)a2 + 8) )
      {
        if ( v19 >= *((_DWORD *)v21 + 12) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
        v22 = *((_QWORD *)v21 + 12) + 576LL * v19;
        if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v22) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
        if ( *(_WORD *)(v22 + 236) != *((_WORD *)a3 + 118) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
        if ( *(_QWORD *)(v22 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
        if ( (*(_DWORD *)v22 & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
        CTouchProcessor::SetPointerInfoNodeTargetInt(v24, (struct CPointerInfoNode *)v22, a4, a5, a6, a7, 0, a8, a9);
        v19 = *(_DWORD *)(v22 + 384);
        --HistoryCount;
      }
      if ( v17 == v18 )
        goto LABEL_20;
    }
  }
  if ( !v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
}
