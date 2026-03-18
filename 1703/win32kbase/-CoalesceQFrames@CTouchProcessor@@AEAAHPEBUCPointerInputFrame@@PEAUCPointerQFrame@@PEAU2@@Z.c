/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011D528 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C006E050 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00D98E0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00D9E40 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B61C (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B678 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011BD68 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C011E5AC (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A50 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127FB8 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C013A3DC (ApiSetEditionDelQEntry.c)
 */

__int64 __fastcall CTouchProcessor::CoalesceQFrames(
        __int64 this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  struct CPointerInputFrame *v6; // r10
  CTouchProcessor *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  CPointerInfoNode *v13; // rbx
  unsigned int v14; // edi
  int v15; // r13d
  unsigned int v16; // r12d
  int v17; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  struct CPointerInputFrame *v19; // rdx
  unsigned int v20; // ebp
  unsigned int v21; // r13d
  struct CPointerInfoNode *v22; // r12
  __int64 v23; // rbp
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct tagQ *v27; // [rsp+38h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-48h]
  int CanCoalesceNodeWithPrevious; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  struct CPointerInputFrame *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v4 = *((_DWORD *)a3 + 54);
  v5 = this + 328;
  *(_DWORD *)(this + 332) = 0;
  v6 = a4;
  v9 = (CTouchProcessor *)this;
  if ( *(_DWORD *)(this + 328) < v4 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( v4 )
    {
      this = 0xFFFFFFFFLL;
      v10 = 16LL * v4;
      if ( v10 <= 0xFFFFFFFF )
      {
        if ( (_DWORD)v10 )
        {
          *((_QWORD *)v9 + 42) = Win32AllocPoolZInit((unsigned int)v10, 1885631317LL);
          *(_DWORD *)v5 = v4;
        }
      }
    }
    v6 = v31;
  }
  v11 = v5 & -(__int64)(*((_QWORD *)v9 + 42) != 0LL);
  v28 = v11;
  if ( !v11 )
    return 0LL;
  v13 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  v14 = 1;
  v15 = 0;
  CanCoalesceNodeWithPrevious = 1;
  v16 = 0;
  v30 = 1;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_28;
  while ( 1 )
  {
    if ( *((_DWORD *)v13 + 2) != *(_DWORD *)a3 )
      goto LABEL_18;
    if ( (*(_DWORD *)v13 & 0x2000) != 0 || (unsigned int)CPointerInfoNode::IsFullyReleased(v13) )
      break;
    v27 = 0LL;
    NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v13, v17, &v27);
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
      v14 = 0;
      goto LABEL_42;
    }
    *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * *(unsigned int *)(v11 + 4)) = v27;
    v19 = v31;
    *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v11 + 4))++ + 8) = NodeQueuedMessage;
    CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                    v9,
                                    v19,
                                    v13,
                                    NodeQueuedMessage,
                                    a3,
                                    (enum CPointerCoalesce *)&v30);
    v14 = CanCoalesceNodeWithPrevious;
    if ( !CanCoalesceNodeWithPrevious )
      goto LABEL_27;
    v15 = 1;
LABEL_18:
    ++v16;
    v13 = (CPointerInfoNode *)((char *)v13 + 608);
    if ( v16 >= *((_DWORD *)a2 + 12) )
      goto LABEL_24;
    v6 = v31;
  }
  if ( (unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(
                       (CTouchProcessor *)this,
                       v6,
                       v13,
                       (enum CPointerCoalesce *)&v30) )
    goto LABEL_18;
  v14 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_24:
  if ( !v14 )
  {
LABEL_27:
    v20 = v30;
    goto LABEL_42;
  }
  if ( !v15 )
  {
LABEL_28:
    v14 = 0;
    v20 = 19;
    CanCoalesceNodeWithPrevious = 0;
    goto LABEL_29;
  }
  v20 = v30;
LABEL_29:
  v30 = v20;
  if ( v14 )
  {
    if ( *((_DWORD *)a3 + 54) != *(_DWORD *)(*((_QWORD *)a3 + 29) + 216LL) )
    {
      v20 = 17;
      v14 = 0;
      v30 = 17;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v14 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 1);
      v21 = 0;
      v22 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
      if ( *((_DWORD *)a2 + 12) )
      {
        v23 = v28;
        v24 = 0;
        do
        {
          if ( *((_DWORD *)v22 + 2) == *(_DWORD *)a3
            && (*(_DWORD *)v22 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased(v22) )
          {
            v25 = *(_QWORD *)(v23 + 8);
            v27 = *(struct tagQ **)(v25 + 16LL * v24);
            v26 = *(_QWORD *)(v25 + 16LL * v24 + 8);
            CTouchProcessor::CoalesceNodeWithPrevious(v9, a2, v31, v22, v21, 1);
            ApiSetEditionDelQEntry(v27, v26);
            ++v24;
          }
          ++v21;
          v22 = (struct CPointerInfoNode *)((char *)v22 + 608);
        }
        while ( v21 < *((_DWORD *)a2 + 12) );
        v14 = CanCoalesceNodeWithPrevious;
        v20 = v30;
      }
      EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 1);
    }
  }
LABEL_42:
  *((_DWORD *)a3 + 55) = *((_DWORD *)a3 + 55) & 0xFFFFFFF9 | (2 * ((2 * (v14 & 1)) | v14 & 1));
  CTouchProcessor::TrackCoalesceOnReassign(v9, a3, v20, a4);
  return v14;
}
