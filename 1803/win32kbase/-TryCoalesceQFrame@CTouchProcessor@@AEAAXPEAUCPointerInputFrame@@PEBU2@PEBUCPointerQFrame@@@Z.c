/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01113C4 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00AB610 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00ABDF0 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C00AC540 (EtwTracePointerNoCoalesce.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C010E714 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C010F7B8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C011DB98 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v7; // rdx
  int v8; // eax
  char v10; // r15
  char v11; // di
  unsigned int v12; // ebp
  CTouchProcessor *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rbx
  int v17; // r13d
  unsigned int i; // r14d
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // rax
  __int16 v22; // dx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  CTouchProcessor *v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]
  char v29; // [rsp+A8h] [rbp+20h]

  v26 = this;
  v4 = *((_QWORD *)a2 + 13);
  v5 = 0;
  v29 = 0;
  v7 = *((unsigned int *)a2 + 12);
  v8 = 0;
  v27 = 0;
  v10 = 1;
  v11 = 0;
  v12 = 0;
  if ( (_DWORD)v7 )
  {
    v13 = this;
    do
    {
      if ( *(_DWORD *)v4 == -1 )
        break;
      if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
      {
        v14 = *(_DWORD *)(v4 + 204);
        if ( (v14 & 1) == 0 || (v14 & 8) != 0 || (v15 = v14, *(_QWORD *)(v4 + 8) == -1LL) )
        {
          v15 = v14;
          if ( (v14 & 2) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v14);
            v15 = *(unsigned int *)(v4 + 204);
          }
        }
        if ( (v15 & 2) == 0 )
          goto LABEL_18;
        this = (CTouchProcessor *)*(unsigned int *)(*(_QWORD *)(v4 + 216) + 200LL);
        if ( *(_DWORD *)(v4 + 200) != (_DWORD)this )
        {
          CTouchProcessor::TrackCoalesceOnArrival((__int64)v13, v4, 17);
          *(_DWORD *)(v4 + 204) &= ~2u;
          v15 = *(unsigned int *)(v4 + 204);
        }
        if ( (v15 & 2) != 0 )
        {
          if ( *(_DWORD *)(v4 + 208) != 1 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v15);
            LODWORD(v15) = *(_DWORD *)(v4 + 204);
          }
          v8 = 1;
          *(_DWORD *)(v4 + 204) = v15 | 4;
          v27 = 1;
        }
        else
        {
LABEL_18:
          v8 = v27;
        }
        v5 = 0;
        *(_QWORD *)(v4 + 216) = 0LL;
      }
      v7 = *((unsigned int *)a2 + 12);
      ++v12;
      v4 += 224LL;
    }
    while ( v12 < (unsigned int)v7 );
    v11 = 0;
  }
  if ( v8 )
  {
    EtwTraceBeginPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v7, 0LL);
    v7 = *((unsigned int *)a2 + 12);
    v5 = 0;
  }
  v16 = (_DWORD *)*((_QWORD *)a2 + 12);
  v17 = 1;
  for ( i = 0; i < (unsigned int)v7; v16 += 144 )
  {
    v19 = *((_QWORD *)a2 + 12) + 576LL * (unsigned int)v7;
    if ( (unsigned __int64)v16 >= v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v7);
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    {
      v20 = *((_QWORD *)a2 + 13) + 224LL * (unsigned int)v16[2];
      if ( (a4 || *(_QWORD *)(v20 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v20 )
      {
        v17 = (*(_BYTE *)(v20 + 204) & 4) != 0 ? v17 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v20 + 204) & 2) != 0 )
        {
          *((_QWORD *)v16 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   (struct _KTHREAD **)v26,
                                   a2,
                                   a3,
                                   (struct CPointerInfoNode *)v16,
                                   i,
                                   v5);
        }
        else
        {
          v17 = v5;
          v21 = CTouchProcessor::CreateAndReferenceMsgData(
                  (struct _KTHREAD **)v26,
                  *((unsigned __int16 *)v16 + 118),
                  *((_DWORD *)a2 + 10),
                  i,
                  v16[61],
                  -__CFSHR__(*v16, 7));
          v22 = *((_WORD *)v16 + 118);
          v23 = *((unsigned __int16 *)v16 + 112);
          *((_QWORD *)v16 + 2) = v21;
          EtwTracePointerNoCoalesce(v23, v22, *(_DWORD *)(v20 + 208), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)v16 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((struct _KTHREAD **)v26, a2, i);
          v5 = 0;
        }
      }
      if ( *(_QWORD *)(v20 + 8) != -1LL )
        v10 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
      {
        v24 = v16[61];
        if ( (v24 & 0x2000) != 0 )
        {
          v29 = 1;
          if ( (v24 & 0x10000) != 0 )
            v11 = 1;
        }
      }
    }
    v7 = *((unsigned int *)a2 + 12);
    ++i;
  }
  if ( v27 != v5 )
    EtwTraceEndPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v7, 0LL);
  v25 = *((_DWORD *)a2 + 20) ^ (*((_DWORD *)a2 + 20) ^ (2 * v17)) & 2;
  *((_DWORD *)a2 + 20) = v25;
  if ( !a4 )
    *((_DWORD *)a2 + 20) = v25 & 0xFFFFFFE3 | (4 * (v10 & 1 | (2 * (v29 & 1 | (2 * (v11 & 1))))));
}
