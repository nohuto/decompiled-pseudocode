/*
 * XREFs of ExpQueueWorkItem @ 0x1400FD5D0
 * Callers:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x140101978 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14013C56C (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14025D62C (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MmGetNextNode @ 0x140067EB0 (MmGetNextNode.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ExpNewThreadNecessary @ 0x1400FC9E0 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1400FD850 (ExpIsPoolReadyForWork.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400FD8B0 (KiTryUnwaitThreadWithPriority.c)
 *     ExpQueueWorkItemNode @ 0x14025D868 (ExpQueueWorkItemNode.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 *a1, int a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // r11
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // r15
  unsigned int v8; // r10d
  unsigned __int8 CurrentIrql; // r13
  _KNODE *ParentNode; // rdi
  unsigned int NextNode; // ecx
  char *v13; // r9
  __int64 v14; // r14
  int v15; // r10d
  __int64 v16; // rsi
  _QWORD **v17; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  _QWORD *v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v28; // rcx
  __int64 **v29; // rax
  int v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  struct _KEVENT *v32; // [rsp+40h] [rbp-38h]
  int v33; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a4;
  v6 = 0;
  v7 = a2;
  v33 = 0;
  v8 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    v8 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = v8;
  v13 = (char *)&KiNodeInit;
  if ( v8 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v14 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (char *)v14 == &v13[320 * (unsigned __int16)NextNode] )
        v14 = 0LL;
      v32 = (struct _KEVENT *)v14;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v14, (unsigned int)v5) )
        break;
      NextNode = MmGetNextNode(v15, &v33);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_31;
    }
    v16 = *(_QWORD *)(v14 + 8 * v5 + 320);
    if ( (v16 & 1) != 0 )
      v16 = 0LL;
    v17 = (_QWORD **)(v16 + 8);
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v16, 7u) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( (*(_DWORD *)v16 & 0x80u) != 0 );
    }
    if ( *v17 != v17 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v16 || CurrentThread->WaitReason != 15) )
    {
      v20 = 32LL;
      v21 = v16 + 664;
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 - 4);
        v21 -= 4LL;
        v6 += v22;
        --v20;
        if ( v6 >= *(_DWORD *)(v16 + 664) )
          break;
        if ( v20 <= v7 )
        {
          if ( v6 >= *(_DWORD *)(v16 + 664) )
            break;
          v23 = *v17;
          while ( 1 )
          {
            v24 = v23;
            v23 = (_QWORD *)*v23;
            v25 = *v24;
            v26 = (_QWORD *)v24[1];
            if ( *(_QWORD **)(*v24 + 8LL) != v24 || (_QWORD *)*v26 != v24 )
              __fastfail(3u);
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
            if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v24, a1, (unsigned int)v7) )
              goto LABEL_20;
            if ( v23 == v17 )
              goto LABEL_25;
          }
        }
      }
    }
LABEL_25:
    ++*(_DWORD *)(v16 + 4);
    v28 = v16 + 16 * v7 + 24;
    v29 = *(__int64 ***)(v28 + 8);
    if ( *v29 != (__int64 *)v28 )
      __fastfail(3u);
    *a1 = v28;
    a1[1] = (__int64)v29;
    *v29 = a1;
    *(_QWORD *)(v28 + 8) = a1;
LABEL_20:
    _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, v31);
    if ( ExpNewThreadNecessary(v16, *(_DWORD *)(v16 + 712)) )
      KeSetEvent(v32 + 76, 0, 0);
    goto LABEL_22;
  }
LABEL_31:
  if ( (char *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] != &v13[320 * ParentNode->Affinity.Reserved[0]]
    && (*(_DWORD *)&ParentNode[6].MaximumProcessors & 2) != 0 )
  {
    ExpQueueWorkItemNode(a1, (unsigned int)v7, ParentNode, (unsigned int)v5);
LABEL_22:
    v4 = 1;
  }
  __writecr8(CurrentIrql);
  return v4;
}
