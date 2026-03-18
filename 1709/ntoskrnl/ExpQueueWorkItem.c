/*
 * XREFs of ExpQueueWorkItem @ 0x140061500
 * Callers:
 *     ExQueueWorkItemEx @ 0x14002197C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14002346C (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x1402871AC (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140287208 (ExQueueWorkItemToPrivatePool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExpNewThreadNecessary @ 0x140061F60 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x140061FA0 (ExpIsPoolReadyForWork.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140062020 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     MmGetNextNode @ 0x14010F668 (MmGetNextNode.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 a1, _QWORD *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 v5; // r11
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // r12
  _KNODE *ParentNode; // r9
  unsigned int NextNode; // ecx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // r10d
  __int64 v17; // rsi
  _QWORD **v18; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // ecx
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  int v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v36 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    a4 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = a4;
  if ( a4 < (unsigned __int16)KeNumberNodes )
  {
    v14 = a5;
    while ( 1 )
    {
      v15 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (_UNKNOWN *)v15 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * (unsigned __int16)NextNode) )
        v15 = 0LL;
      v34 = v15;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v15, (unsigned int)v14) )
        break;
      NextNode = MmGetNextNode(v16, &v36);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_24;
    }
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146)) + 8 * v14);
    if ( (v17 & 1) != 0 )
      v17 = 0LL;
    v18 = (_QWORD **)(v17 + 8);
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( (*(_DWORD *)v17 & 0x80u) != 0 );
    }
    if ( *v18 != v18 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v17 || CurrentThread->WaitReason != 15) )
    {
      v21 = 32LL;
      v22 = v17 + 664;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v22 - 4);
        v22 -= 4LL;
        v7 += v23;
        --v21;
        v24 = *(_DWORD *)(v17 + 664);
        if ( v7 >= v24 )
          break;
        if ( v21 <= v6 )
        {
          if ( v7 >= v24 )
            break;
          v25 = *v18;
          while ( 1 )
          {
            v26 = v25;
            v25 = (_QWORD *)*v25;
            v27 = *v26;
            v28 = (_QWORD *)v26[1];
            if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v28 != v26 )
              __fastfail(3u);
            *v28 = v27;
            *(_QWORD *)(v27 + 8) = v28;
            if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v26, a2, (unsigned int)v6) )
              goto LABEL_21;
            if ( v25 == v18 )
              goto LABEL_26;
          }
        }
      }
    }
LABEL_26:
    ++*(_DWORD *)(v17 + 4);
    v30 = v17 + 16 * v6 + 24;
    v31 = *(_QWORD **)(v30 + 8);
    if ( *v31 != v30 )
      __fastfail(3u);
    *a2 = v30;
    a2[1] = v31;
    *v31 = a2;
    *(_QWORD *)(v30 + 8) = a2;
LABEL_21:
    _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v33);
    if ( (unsigned __int8)ExpNewThreadNecessary(v17, *(unsigned int *)(v17 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(v34 + 146)) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_24:
  __writecr8(CurrentIrql);
  return v5;
}
