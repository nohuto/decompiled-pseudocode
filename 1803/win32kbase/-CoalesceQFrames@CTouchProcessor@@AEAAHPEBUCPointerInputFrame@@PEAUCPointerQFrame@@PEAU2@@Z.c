/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011051C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00AB610 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00ABDF0 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C010D98C (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C010DA58 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C010E714 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0111860 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0113CDC (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C011733C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C011DBF0 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C013DA98 (ApiSetEditionDelQEntry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  __int64 v8; // rdx
  CTouchProcessor *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned int v17; // edi
  const struct CPointerInfoNode *v18; // rbx
  int v19; // r12d
  unsigned int v20; // r14d
  unsigned __int64 v21; // rcx
  int v22; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagQMSG *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  unsigned int v34; // r12d
  struct CPointerInputFrame *v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // r8d
  struct tagQ *v40; // rcx
  __int64 v41; // rdx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-20h]
  int v43; // [rsp+34h] [rbp-1Ch]
  struct tagQ *v44; // [rsp+38h] [rbp-18h] BYREF
  __int64 v45; // [rsp+40h] [rbp-10h]
  int v47; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v48; // [rsp+A8h] [rbp+58h]

  v48 = a4;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v12 = *((_DWORD *)a3 + 51);
  if ( (v12 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v12 = *((_DWORD *)a3 + 51);
  }
  if ( (v12 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v12 = *((_DWORD *)a3 + 51);
  }
  if ( (v12 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 50));
  v15 = (__int64)result;
  if ( !result )
    return result;
  v16 = *((unsigned int *)a2 + 12);
  v17 = 1;
  v18 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
  v19 = 0;
  CanCoalesceNodeWithPrevious = 1;
  v47 = 1;
  v20 = 0;
  if ( !(_DWORD)v16 )
    goto LABEL_39;
  while ( 1 )
  {
    v21 = *((_QWORD *)a2 + 12) + 576 * v16;
    if ( (unsigned __int64)v18 >= v21 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v14);
    if ( *((_DWORD *)v18 + 2) == *(_DWORD *)a3 )
    {
      if ( (*(_DWORD *)v18 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v18) )
      {
        v44 = 0LL;
        NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v18, v22, &v44);
        v26 = NodeQueuedMessage;
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            if ( !v44 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
            v27 = *(_DWORD *)(v15 + 4);
            if ( v20 < v27 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
              v27 = *(_DWORD *)(v15 + 4);
            }
            if ( v27 >= *(_DWORD *)v15 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
              v27 = *(_DWORD *)(v15 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL * v27) = v44;
            v28 = 2LL * *(unsigned int *)(v15 + 4);
            *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v15 + 4))++ + 8) = v26;
            if ( *(_DWORD *)(v15 + 4) > *(_DWORD *)v15 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, 2LL * v27);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            (CTouchProcessor *)this,
                                            v48,
                                            v18,
                                            v26,
                                            a3,
                                            (enum CPointerCoalesce *)&v47);
            v17 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
            {
              v30 = v47;
              goto LABEL_67;
            }
            v19 = 1;
            goto LABEL_35;
          }
          v30 = 18;
        }
        else
        {
          v30 = 15;
        }
        v17 = 0;
        goto LABEL_67;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v48, v18, (enum CPointerCoalesce *)&v47) )
        break;
    }
LABEL_35:
    v16 = *((unsigned int *)a2 + 12);
    ++v20;
    v18 = (const struct CPointerInfoNode *)((char *)v18 + 576);
    if ( v20 >= (unsigned int)v16 )
    {
      v30 = v47;
      v43 = v47;
      goto LABEL_37;
    }
  }
  v30 = v47;
  v43 = v47;
  if ( v47 != 3 && v47 != 20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v14);
  v17 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_37:
  if ( !v17 )
    goto LABEL_67;
  if ( !v19 )
  {
LABEL_39:
    v30 = 19;
    v17 = 0;
    v43 = 19;
    CanCoalesceNodeWithPrevious = 0;
  }
  if ( v17 )
  {
    v31 = *((unsigned int *)a3 + 50);
    if ( (_DWORD)v31 != *(_DWORD *)(*((_QWORD *)a3 + 27) + 200LL) )
    {
      v30 = 17;
      v17 = 0;
      v43 = 17;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v17 )
    {
      if ( *(_DWORD *)(v15 + 4) > (unsigned int)v31 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v14);
      if ( v30 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v14);
      EtwTraceBeginPointerFrameCoalesce(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10),
        *((_DWORD *)a2 + 12),
        (const GUID *)1);
      v32 = *((unsigned int *)a2 + 12);
      v33 = *((_QWORD *)a2 + 12);
      v34 = 0;
      v47 = 0;
      if ( (_DWORD)v32 )
      {
        v35 = v48;
        do
        {
          v36 = *((_QWORD *)a2 + 12) + 576LL * (unsigned int)v32;
          if ( v33 >= v36 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v32);
          if ( *(_DWORD *)(v33 + 8) == *(_DWORD *)a3
            && (*(_DWORD *)v33 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v33) )
          {
            if ( v39 > v34 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
              v39 = v47;
            }
            if ( v39 >= *(_DWORD *)(v15 + 4) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
              v39 = v47;
            }
            v40 = *(struct tagQ **)(*(_QWORD *)(v15 + 8) + 16LL * v39);
            v44 = v40;
            v45 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL * v39 + 8);
            if ( *(_QWORD *)(v33 + 16) != *(_QWORD *)(v45 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, 2LL * v39);
            CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v35, (struct CPointerInfoNode *)v33, v34, 1);
            if ( *(_QWORD *)(v33 + 16) == *(_QWORD *)(v45 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v41);
            ApiSetEditionDelQEntry((char *)v44 + 24, v45);
            ++v47;
          }
          v32 = *((unsigned int *)a2 + 12);
          ++v34;
          v33 += 576LL;
        }
        while ( v34 < (unsigned int)v32 );
        v30 = v43;
        v17 = CanCoalesceNodeWithPrevious;
      }
      EtwTraceEndPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v32, (const GUID *)1);
    }
  }
LABEL_67:
  *((_DWORD *)a3 + 51) = *((_DWORD *)a3 + 51) & 0xFFFFFFF9 | (2 * ((2 * (v17 & 1)) | v17 & 1));
  CTouchProcessor::TrackCoalesceOnReassign(this, a3, v30);
  return (struct tagCPointerCoalesceInfo *)v17;
}
