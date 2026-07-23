/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbCompareSnappedEntryState @ 0x14006373C (KiAbCompareSnappedEntryState.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400B24A0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

PRTL_BALANCED_NODE __fastcall KiAbEntryGetLockedHeadEntry(
        PRTL_BALANCED_NODE Node,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int64 v3; // rdi
  struct _KLOCK_QUEUE_HANDLE *v4; // r13
  unsigned int v7; // esi
  int v8; // r12d
  unsigned __int64 v9; // rax
  volatile LONG *v10; // r14
  _RTL_RB_TREE *v11; // r15
  int v12; // r11d
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  signed __int32 v16; // ett
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v19; // edx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  _RTL_BALANCED_NODE *v22; // rax
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // al
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  _RTL_BALANCED_NODE *v27; // rax
  PRTL_BALANCED_NODE v28; // rsi
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  char v32; // al
  $A511567D9B88DF343F2F4B42DBBCA706 *v33; // rbx
  char v34; // dl
  _RTL_BALANCED_NODE *v35; // rax
  BOOLEAN v36; // r8
  int v37; // ecx
  unsigned __int64 v38; // rax
  char v39; // al
  char v40; // dl
  _RTL_BALANCED_NODE *ParentValue; // rax
  int v42; // ecx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  char *v45; // rdx
  unsigned __int64 v46; // [rsp+20h] [rbp-78h] BYREF
  int v47; // [rsp+28h] [rbp-70h]
  __int128 v48; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v51; // [rsp+A8h] [rbp+10h]

  v51 = a2;
  v3 = 0LL;
  v4 = a3;
  if ( (BYTE3(Node[1].Left) & 1) != 0 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)&Node[3].Children[1];
    KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)&Node[3].Children[1]);
    if ( (BYTE3(Node[1].Left) & 1) != 0 )
      return Node;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    a2 = v51;
  }
  v48 = *(_OWORD *)&Node[1].Right;
  if ( (__int64)v48 >= 0 && !(_DWORD)a2 )
    return 0LL;
  v7 = DWORD2(v48);
  v46 = v48 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0;
  v9 = ((((unsigned __int64)v48 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v47 = DWORD2(v48);
  v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v9);
  while ( 1 )
  {
    v12 = 1;
    if ( v8 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      goto LABEL_21;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, a2);
LABEL_21:
      v12 = 1;
      goto LABEL_22;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)v10);
    v16 = *v10 & 0x7FFFFFFF;
    if ( v16 != _InterlockedCompareExchange(v10, v16 + 1, v16) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(v10, 0xFFu);
      goto LABEL_21;
    }
LABEL_22:
    Min = v11->Min;
    Root = (unsigned __int64)v11->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v11;
      else
        Root = 0LL;
    }
    v19 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      do
      {
        v20 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v20 < v46 )
          goto LABEL_32;
        if ( v20 > v46 )
          goto LABEL_31;
        v21 = *(_DWORD *)(Root + 40);
        if ( v21 == v7 )
          break;
        if ( v21 < v7 )
LABEL_32:
          v22 = *(_RTL_BALANCED_NODE **)(Root + 8);
        else
LABEL_31:
          v22 = *(_RTL_BALANCED_NODE **)Root;
        if ( v19 && v22 )
          Root ^= (unsigned __int64)v22;
        else
          Root = (unsigned __int64)v22;
      }
      while ( Root );
      v4 = a3;
    }
    if ( !v51 )
      break;
    if ( Root )
    {
      v4->LockQueue.Next = 0LL;
      v4->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
      v28 = (PRTL_BALANCED_NODE)Root;
      KxAcquireQueuedSpinLock((__int64)v4, (volatile __int64 *)(Root + 80));
      if ( v8 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v10);
      if ( (__int64)Node[1].Children[1] < 0 )
        return v28;
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      {
        v39 = ((_BYTE *)&Node[8].Left - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0])))[3];
        if ( v39 > 15 )
          v39 = 15;
        v33 = ($A511567D9B88DF343F2F4B42DBBCA706 *)(Root + 64);
        LOBYTE(Node[2].Children[0]) = v39;
        v40 = v39;
        ParentValue = (_RTL_BALANCED_NODE *)v33[1].ParentValue;
        if ( ((unsigned __int8)ParentValue & 1) != 0 )
        {
          if ( v33->ParentValue )
            v3 = v33->ParentValue ^ (unsigned __int64)v33;
        }
        else
        {
          v3 = v33->ParentValue;
        }
        v36 = 0;
        v42 = (unsigned __int8)ParentValue & 1;
        if ( v3 )
        {
          while ( 1 )
          {
            while ( *(char *)(v3 + 48) < v40 )
            {
              v43 = *(_QWORD *)v3;
              if ( v42 )
              {
                if ( !v43 )
                  goto LABEL_91;
                v43 ^= v3;
              }
              if ( !v43 )
              {
LABEL_91:
                v36 = 0;
                goto LABEL_116;
              }
              v3 = v43;
            }
            v44 = *(_QWORD *)(v3 + 8);
            if ( v42 )
            {
              if ( !v44 )
                break;
              v44 ^= v3;
            }
            if ( !v44 )
              break;
            v3 = v44;
          }
LABEL_115:
          v36 = 1;
        }
      }
      else
      {
        v32 = KiAbOwnerComputeCpuPriorityKey((__int64)Node);
        v33 = ($A511567D9B88DF343F2F4B42DBBCA706 *)(Root + 48);
        LOBYTE(Node[2].Children[0]) = v32;
        v34 = v32;
        v35 = (_RTL_BALANCED_NODE *)v33[1].ParentValue;
        if ( ((unsigned __int8)v35 & 1) != 0 )
        {
          if ( v33->ParentValue )
            v3 = v33->ParentValue ^ (unsigned __int64)v33;
        }
        else
        {
          v3 = v33->ParentValue;
        }
        v36 = 0;
        v37 = (unsigned __int8)v35 & 1;
        if ( v3 )
        {
          while ( 1 )
          {
            if ( *(char *)(v3 + 48) <= v34 )
            {
              v38 = *(_QWORD *)(v3 + 8);
              if ( v37 )
              {
                if ( !v38 )
                  goto LABEL_115;
                v38 ^= v3;
              }
              if ( !v38 )
                goto LABEL_115;
            }
            else
            {
              v38 = *(_QWORD *)v3;
              if ( v37 )
              {
                if ( !v38 )
                  goto LABEL_91;
                v38 ^= v3;
              }
              if ( !v38 )
                goto LABEL_91;
            }
            v3 = v38;
          }
        }
      }
LABEL_116:
      RtlRbInsertNodeEx((PRTL_RB_TREE)v33, (PRTL_BALANCED_NODE)v3, v36, Node);
      HIBYTE(Node[1].Right) |= 0x80u;
LABEL_117:
      v45 = (char *)Node - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0]));
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
        ++v45[793];
      else
        _InterlockedExchangeAdd8(v45 + 1423, 1u);
      return v28;
    }
    if ( v8 || (v8 = v12, ExTryConvertSharedSpinLockExclusive(v10)) )
    {
      v23 = (unsigned __int64)v11->Root;
      if ( ((__int64)v11->Min & 1) != 0 )
      {
        if ( v23 )
          v23 ^= (unsigned __int64)v11;
        else
          v23 = 0LL;
      }
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v25 < v46 || v25 <= v46 && ((v26 = *(_DWORD *)(v23 + 40), v26 == v7) || v26 < v7) )
          {
            v27 = *(_RTL_BALANCED_NODE **)(v23 + 8);
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v27 )
                goto LABEL_63;
              v27 = (_RTL_BALANCED_NODE *)(v23 ^ (unsigned __int64)v27);
            }
            if ( !v27 )
            {
LABEL_63:
              v24 = 1;
              break;
            }
          }
          else
          {
            v27 = *(_RTL_BALANCED_NODE **)v23;
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v27 )
                goto LABEL_57;
              v27 = (_RTL_BALANCED_NODE *)(v23 ^ (unsigned __int64)v27);
            }
            if ( !v27 )
            {
LABEL_57:
              v24 = 0;
              break;
            }
          }
          v23 = (unsigned __int64)v27;
        }
      }
      RtlRbInsertNodeEx(v11, (PRTL_BALANCED_NODE)v23, v24, Node);
      v4->LockQueue.Next = 0LL;
      v4->LockQueue.Lock = (unsigned __int64 *volatile)&Node[3].Children[1];
      v28 = Node;
      KxAcquireQueuedSpinLock((__int64)v4, (volatile __int64 *)&Node[3].Children[1]);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
        else
          *v10 = 0;
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v31 = v30[5] - 1;
            v30[5] = v31;
            if ( !v31 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
              KiPerformUnboostKick(v29);
          }
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v10);
      }
      HIBYTE(Node[1].Right) |= 0x80u;
      BYTE3(Node[1].Left) |= 1u;
      Node[2].Children[0] = 0LL;
      Node[2].Children[1] = 0LL;
      Node[2].ParentValue = 0LL;
      Node[3].Children[0] = 0LL;
      *((_WORD *)&Node[3].1 + 1) &= 1u;
      goto LABEL_117;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  if ( !Root )
  {
    if ( v8 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v10);
    return 0LL;
  }
  v4->LockQueue.Next = 0LL;
  v4->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
  v28 = (PRTL_BALANCED_NODE)Root;
  KxAcquireQueuedSpinLock((__int64)v4, (volatile __int64 *)(Root + 80));
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( Node != (PRTL_BALANCED_NODE)Root )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&Node[3].Children[1];
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Node[3].Children[1]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( !KiAbCompareSnappedEntryState((__m128i *)Node, (__int64)&v46) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      return 0LL;
    }
  }
  return v28;
}
