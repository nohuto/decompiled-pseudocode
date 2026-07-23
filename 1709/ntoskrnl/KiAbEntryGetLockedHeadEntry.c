/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x14005E0E0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x1400AA850 (KiAbCompareSnappedEntryState.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140113D90 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char *__fastcall KiAbEntryGetLockedHeadEntry(char *Node, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // r14
  int v4; // r12d
  char *v5; // rbx
  unsigned __int64 v6; // rax
  volatile LONG *v7; // rdi
  int v8; // ebp
  _RTL_RB_TREE *v9; // r15
  signed __int32 v10; // ett
  _RTL_BALANCED_NODE *Root; // rsi
  unsigned __int64 v12; // rax
  unsigned int ParentValue; // eax
  char *v14; // r15
  char v15; // cl
  BOOLEAN v16; // al
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  BOOLEAN v19; // r8
  _RTL_BALANCED_NODE *v20; // rdx
  _RTL_RB_TREE *v21; // rcx
  char *v22; // rdx
  char v24; // al
  char v25; // cl
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  _RTL_BALANCED_NODE *v29; // rcx
  _RTL_BALANCED_NODE *v30; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-78h] BYREF
  int v32; // [rsp+28h] [rbp-70h]
  __int128 v33; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = Node;
  if ( (Node[27] & 1) != 0 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(Node + 80);
    KxAcquireQueuedSpinLock(a3);
    if ( (v5[27] & 1) != 0 )
      return v5;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v3);
  }
  v33 = *((_OWORD *)v5 + 2);
  if ( (__int64)v33 >= 0 && !v4 )
    return 0LL;
  v31 = v33 & 0x7FFFFFFFFFFFFFFCLL;
  v6 = ((((unsigned __int64)v33 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v7 = (volatile LONG *)((char *)&KiAbTreeArray + v6 + 16);
  v8 = 0;
  v32 = DWORD2(v33);
  v9 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v6);
  while ( 1 )
  {
    if ( v8 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7, a2);
    }
    else
    {
      _m_prefetchw((const void *)v7);
      v10 = *v7 & 0x7FFFFFFF;
      if ( v10 != _InterlockedCompareExchange(v7, v10 + 1, v10) )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v7, a2);
      }
    }
    Root = v9->Root;
    if ( v9->Root )
    {
      while ( 1 )
      {
        v12 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v12 > v31 )
          goto LABEL_74;
        if ( v12 < v31 )
          goto LABEL_81;
        ParentValue = Root[1].ParentValue;
        if ( ParentValue == DWORD2(v33) )
          goto LABEL_13;
        if ( ParentValue < DWORD2(v33) )
        {
LABEL_81:
          v30 = Root->Children[1];
          if ( (*(_BYTE *)&v9->0 & 1) != 0 && v30 )
          {
LABEL_96:
            Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v30 ^ (unsigned __int64)Root);
            goto LABEL_76;
          }
        }
        else
        {
LABEL_74:
          v30 = Root->Children[0];
          if ( (*(_BYTE *)&v9->0 & 1) != 0 && v30 )
            goto LABEL_96;
        }
        Root = v30;
LABEL_76:
        if ( !Root )
        {
LABEL_13:
          v5 = Node;
          v3 = a3;
          break;
        }
      }
    }
    if ( !v4 )
    {
      if ( Root )
      {
        v3->LockQueue.Lock = (unsigned __int64 *volatile)&Root[3].Children[1];
        v3->LockQueue.Next = 0LL;
        v14 = (char *)Root;
        KxAcquireQueuedSpinLock(v3);
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v7);
        if ( v5 == (char *)Root )
          return v14;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
        KxAcquireQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v5, &v31) )
          return v14;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v3);
      }
      else if ( v8 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v7);
      }
      return 0LL;
    }
    if ( Root )
    {
      v3->LockQueue.Lock = (unsigned __int64 *volatile)&Root[3].Children[1];
      v14 = (char *)Root;
      v3->LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(v3, &Root[3].Right);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)&Root[3].Children[1], (__int64)v3) )
      {
        KxWaitForLockOwnerShip(v3);
      }
      if ( v8 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr);
      }
      else
      {
        _InterlockedAnd(v7, 0xBFFFFFFF);
        _InterlockedDecrement(v7);
      }
      if ( *((__int64 *)v5 + 4) >= 0 )
      {
        if ( (v5[25] & 1) == 0 )
        {
          v24 = KiAbOwnerComputeCpuPriorityKey(v5);
          v5[48] = v24;
          v17 = (unsigned __int64)Root[2].Children[0];
          v25 = v24;
          v16 = 0;
          if ( !v17 )
          {
LABEL_56:
            v21 = (_RTL_RB_TREE *)&Root[2];
            goto LABEL_42;
          }
          while ( 1 )
          {
            if ( *(char *)(v17 + 48) > v25 )
            {
              v26 = *(_QWORD *)v17;
              if ( ((__int64)Root[2].Right & 1) != 0 )
              {
                if ( !v26 )
                {
LABEL_88:
                  v16 = 0;
                  v21 = (_RTL_RB_TREE *)&Root[2];
                  goto LABEL_42;
                }
                v26 ^= v17;
              }
              if ( !v26 )
                goto LABEL_88;
            }
            else
            {
              v26 = *(_QWORD *)(v17 + 8);
              if ( ((__int64)Root[2].Right & 1) != 0 )
              {
                if ( !v26 )
                {
LABEL_55:
                  v16 = 1;
                  goto LABEL_56;
                }
                v26 ^= v17;
              }
              if ( !v26 )
                goto LABEL_55;
            }
            v17 = v26;
          }
        }
        v15 = v5[-(unsigned __int16)(16 * (unsigned __int8)v5[24]) + 195];
        if ( v15 > 15 )
          v15 = 15;
        v5[48] = v15;
        v16 = 0;
        v17 = Root[2].ParentValue;
        if ( v17 )
        {
          while ( 1 )
          {
            if ( *(char *)(v17 + 48) < v15 )
            {
              v18 = *(_QWORD *)v17;
              if ( ((__int64)Root[3].Children[0] & 1) != 0 )
              {
                if ( !v18 )
                {
LABEL_49:
                  v16 = 0;
                  break;
                }
                v18 ^= v17;
              }
              if ( !v18 )
                goto LABEL_49;
            }
            else
            {
              v18 = *(_QWORD *)(v17 + 8);
              if ( ((__int64)Root[3].Children[0] & 1) != 0 )
              {
                if ( !v18 )
                {
LABEL_40:
                  v16 = 1;
                  break;
                }
                v18 ^= v17;
              }
              if ( !v18 )
                goto LABEL_40;
            }
            v17 = v18;
          }
        }
        v21 = (_RTL_RB_TREE *)&Root[2].16;
LABEL_42:
        RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)v17, v16, (PRTL_BALANCED_NODE)v5);
        v5[39] |= 0x80u;
        goto LABEL_43;
      }
      return v14;
    }
    if ( v8 )
      break;
    v8 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v7) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v7);
  }
  v19 = 0;
  v20 = v9->Root;
  if ( !v9->Root )
    goto LABEL_34;
  while ( 1 )
  {
    v27 = (__int64)v20[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v27 > v31 || v27 >= v31 && (v28 = v20[1].ParentValue, v28 != DWORD2(v33)) && v28 >= DWORD2(v33) )
    {
      v29 = v20->Children[0];
      if ( (*(_BYTE *)&v9->0 & 1) != 0 )
      {
        if ( !v29 )
        {
LABEL_72:
          v19 = 0;
          goto LABEL_34;
        }
        v29 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v29);
      }
      if ( !v29 )
        goto LABEL_72;
      goto LABEL_89;
    }
    v29 = v20->Children[1];
    if ( (*(_BYTE *)&v9->0 & 1) != 0 )
      break;
LABEL_79:
    if ( !v29 )
      goto LABEL_80;
LABEL_89:
    v20 = v29;
  }
  if ( v29 )
  {
    v29 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v29);
    goto LABEL_79;
  }
LABEL_80:
  v19 = 1;
LABEL_34:
  RtlRbInsertNodeEx(v9, v20, v19, (PRTL_BALANCED_NODE)v5);
  v3->LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
  v14 = v5;
  v3->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, v5 + 80);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v5 + 10, (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  v5[39] |= 0x80u;
  v5[27] |= 1u;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  *((_WORD *)v5 + 45) &= 1u;
LABEL_43:
  v22 = &v5[-(unsigned __int16)(16 * (unsigned __int8)v5[24])];
  if ( (v5[25] & 1) != 0 )
    ++v22[793];
  else
    _InterlockedExchangeAdd8(v22 + 1423, 1u);
  return v14;
}
