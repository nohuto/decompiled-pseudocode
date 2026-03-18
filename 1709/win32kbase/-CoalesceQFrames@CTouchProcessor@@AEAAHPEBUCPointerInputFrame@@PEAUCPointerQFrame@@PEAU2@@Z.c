/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011C388 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00073D0 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00DFC40 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00E0170 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A3AC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011ABD0 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C011D374 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01220A8 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127818 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C01396B4 (ApiSetEditionDelQEntry.c)
 */

__int64 __fastcall CTouchProcessor::CoalesceQFrames(
        unsigned __int64 this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  struct CPointerInputFrame *v6; // r10
  CTouchProcessor *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  CPointerInfoNode *v13; // rbx
  int v14; // r13d
  unsigned int v15; // r15d
  unsigned int CanCoalesceNodeWithPrevious; // edi
  int v17; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  struct CPointerInputFrame *v19; // rdx
  unsigned int v20; // esi
  unsigned int v21; // r8d
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // r13d
  struct CPointerInfoNode *v25; // r15
  __int64 v26; // rsi
  unsigned int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int v30; // [rsp+30h] [rbp-58h]
  struct tagQ *v31; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+18h]
  struct CPointerInputFrame *v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v4 = *((_DWORD *)a3 + 54);
  v5 = this + 352;
  *(_DWORD *)(this + 356) = 0;
  v6 = a4;
  v9 = (CTouchProcessor *)this;
  if ( *(_DWORD *)(this + 352) < v4 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this, (__int64)a2, (__int64)a3);
    if ( v4 )
    {
      v10 = 16LL * v4;
      this = 0xFFFFFFFFLL;
      if ( v10 <= 0xFFFFFFFF )
      {
        this = (unsigned int)v10;
        if ( (_DWORD)v10 )
        {
          *((_QWORD *)v9 + 45) = Win32AllocPoolZInit((unsigned int)v10, 1885631317LL);
          *(_DWORD *)v5 = v4;
        }
      }
    }
    v6 = v35;
  }
  v11 = v5 & -(__int64)(*((_QWORD *)v9 + 45) != 0LL);
  v32 = v11;
  if ( !v11 )
    return 0LL;
  v13 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  v14 = 0;
  v15 = 0;
  CanCoalesceNodeWithPrevious = 1;
  v33 = 1;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_28;
  while ( 1 )
  {
    if ( *((_DWORD *)v13 + 2) != *(_DWORD *)a3 )
      goto LABEL_18;
    if ( (*(_DWORD *)v13 & 0x2000) != 0 || (unsigned int)CPointerInfoNode::IsFullyReleased(v13) )
      break;
    v31 = 0LL;
    NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v13, v17, &v31);
    a4 = NodeQueuedMessage;
    if ( !NodeQueuedMessage )
    {
      v20 = 15;
      goto LABEL_22;
    }
    if ( !*((_QWORD *)NodeQueuedMessage + 1) )
    {
      v20 = 18;
LABEL_22:
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_44;
    }
    *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * *(unsigned int *)(v11 + 4)) = v31;
    v19 = v35;
    *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v11 + 4))++ + 8) = NodeQueuedMessage;
    CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                    v9,
                                    v19,
                                    v13,
                                    NodeQueuedMessage,
                                    a3,
                                    (enum CPointerCoalesce *)&v33);
    if ( !CanCoalesceNodeWithPrevious )
      goto LABEL_27;
    v14 = 1;
LABEL_18:
    ++v15;
    v13 = (CPointerInfoNode *)((char *)v13 + 608);
    if ( v15 >= *((_DWORD *)a2 + 12) )
      goto LABEL_24;
    v6 = v35;
  }
  if ( (unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(
                       (CTouchProcessor *)this,
                       v6,
                       v13,
                       (enum CPointerCoalesce *)&v33) )
    goto LABEL_18;
  CanCoalesceNodeWithPrevious = 0;
LABEL_24:
  if ( !CanCoalesceNodeWithPrevious )
  {
LABEL_27:
    v20 = v33;
    goto LABEL_44;
  }
  if ( !v14 )
  {
LABEL_28:
    v20 = 19;
    CanCoalesceNodeWithPrevious = 0;
    goto LABEL_29;
  }
  v20 = v33;
LABEL_29:
  v21 = CanCoalesceNodeWithPrevious;
  if ( CanCoalesceNodeWithPrevious )
  {
    v22 = *((_DWORD *)a3 + 54);
    v23 = *(_DWORD *)(*((_QWORD *)a3 + 29) + 216LL);
    if ( v22 != v23 )
      v20 = 17;
    CanCoalesceNodeWithPrevious = 0;
    v30 = v20;
    if ( v22 == v23 )
      CanCoalesceNodeWithPrevious = v21;
    v34 = CanCoalesceNodeWithPrevious;
    if ( CanCoalesceNodeWithPrevious )
    {
      EtwTraceBeginPointerFrameCoalesce(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10),
        *((_DWORD *)a2 + 12),
        (const GUID *)1);
      v33 = 0;
      v24 = 0;
      v25 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
      if ( *((_DWORD *)a2 + 12) )
      {
        v26 = v32;
        v27 = v33;
        do
        {
          if ( *((_DWORD *)v25 + 2) == *(_DWORD *)a3
            && (*(_DWORD *)v25 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased(v25) )
          {
            v28 = *(_QWORD *)(v26 + 8);
            v31 = *(struct tagQ **)(v28 + 16LL * v27);
            v29 = *(_QWORD *)(v28 + 16LL * v27 + 8);
            CTouchProcessor::CoalesceNodeWithPrevious(v9, a2, v35, v25, v24, 1);
            ApiSetEditionDelQEntry((char *)v31 + 24, v29);
            ++v27;
          }
          ++v24;
          v25 = (struct CPointerInfoNode *)((char *)v25 + 608);
        }
        while ( v24 < *((_DWORD *)a2 + 12) );
        CanCoalesceNodeWithPrevious = v34;
        v20 = v30;
      }
      EtwTraceEndPointerFrameCoalesce(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10),
        *((_DWORD *)a2 + 12),
        (const GUID *)1);
    }
  }
LABEL_44:
  *((_DWORD *)a3 + 55) = *((_DWORD *)a3 + 55) & 0xFFFFFFF9 | (2
                                                            * ((2 * (CanCoalesceNodeWithPrevious & 1)) | CanCoalesceNodeWithPrevious & 1));
  CTouchProcessor::TrackCoalesceOnReassign(v9, a3, v20, a4);
  return CanCoalesceNodeWithPrevious;
}
