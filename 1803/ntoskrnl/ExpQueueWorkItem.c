/*
 * XREFs of ExpQueueWorkItem @ 0x140125F10
 * Callers:
 *     ExQueueWorkItemEx @ 0x140041E6C (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14008F718 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140154AC0 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1402BB538 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     ExpNewThreadNecessary @ 0x140128240 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x140128280 (ExpIsPoolReadyForWork.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140128300 (KiTryUnwaitThreadWithPriority.c)
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
  int v16; // r10d
  __int64 v17; // rsi
  _QWORD **v18; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // ecx
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]
  int v38; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v38 = 0;
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
      if ( (_UNKNOWN *)v15 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * (unsigned __int16)NextNode) )
        v15 = 0LL;
      v36 = v15;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v15, (unsigned int)v14) )
        break;
      NextNode = MmGetNextNode(v16, &v38);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_24;
    }
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146)) + 8 * v14);
    if ( (v17 & 1) != 0 )
      v17 = 0LL;
    v18 = (_QWORD **)(v17 + 8);
    v35 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
    {
      do
        KeYieldProcessorEx(&v34);
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
            v26 = (_QWORD *)*v25;
            v27 = v25;
            v25 = v26;
            v28 = (_QWORD *)v27[1];
            if ( (_QWORD *)v26[1] != v27 || (_QWORD *)*v28 != v27 )
              __fastfail(3u);
            *v28 = v26;
            v26[1] = v28;
            if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v27, a2, (unsigned int)v6) )
              goto LABEL_21;
            if ( v25 == v18 )
              goto LABEL_26;
          }
        }
      }
    }
LABEL_26:
    ++*(_DWORD *)(v17 + 4);
    v32 = v17 + 16 * v6 + 24;
    v33 = *(_QWORD **)(v32 + 8);
    if ( *v33 != v32 )
      __fastfail(3u);
    *a2 = v32;
    a2[1] = v33;
    *v33 = a2;
    *(_QWORD *)(v32 + 8) = a2;
LABEL_21:
    _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0, 1u, 0, v35);
    if ( (unsigned __int8)ExpNewThreadNecessary(v17, *(unsigned int *)(v17 + 720), v29, v30) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(v36 + 146)) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_24:
  __writecr8(CurrentIrql);
  return v5;
}
