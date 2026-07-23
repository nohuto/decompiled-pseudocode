/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140049DE0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14001C3D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x140030940 (KiAbCompareSnappedEntryState.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14011F10C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char *__fastcall KiAbEntryGetLockedHeadEntry(char *Node, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // rbp
  int v4; // esi
  char *v5; // rbx
  unsigned __int64 v6; // rax
  volatile LONG *v7; // r14
  int v8; // r12d
  _RTL_RB_TREE *v9; // r15
  signed __int32 v10; // ett
  _RTL_BALANCED_NODE *Root; // rdi
  BOOLEAN v12; // r8
  _RTL_BALANCED_NODE *v13; // rdx
  char *v14; // rsi
  char *v15; // rcx
  unsigned __int64 v17; // rcx
  unsigned int ParentValue; // ecx
  char v19; // cl
  BOOLEAN v20; // al
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _RTL_RB_TREE *v23; // rcx
  char v24; // al
  char v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  _RTL_BALANCED_NODE *v29; // rcx
  _RTL_BALANCED_NODE *v30; // rcx
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
        v17 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < v31 )
          goto LABEL_74;
        if ( v17 > v31 )
          goto LABEL_72;
        ParentValue = Root[1].ParentValue;
        if ( ParentValue == DWORD2(v33) )
          goto LABEL_28;
        if ( ParentValue < DWORD2(v33) )
        {
LABEL_74:
          v30 = Root->Children[1];
          if ( (*(_BYTE *)&v9->0 & 1) != 0 && v30 )
          {
LABEL_95:
            Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v30 ^ (unsigned __int64)Root);
            goto LABEL_76;
          }
        }
        else
        {
LABEL_72:
          v30 = Root->Children[0];
          if ( (*(_BYTE *)&v9->0 & 1) != 0 && v30 )
            goto LABEL_95;
        }
        Root = v30;
LABEL_76:
        if ( !Root )
        {
LABEL_28:
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
        if ( KiAbCompareSnappedEntryState((__m128i *)v5, (__int64)&v31) )
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
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v7);
      if ( *((__int64 *)v5 + 4) < 0 )
        return v14;
      if ( (v5[25] & 1) != 0 )
      {
        v19 = v5[-16 * (unsigned __int8)v5[24] + 195];
        if ( v19 > 15 )
          v19 = 15;
        v5[48] = v19;
        v20 = 0;
        v21 = Root[2].ParentValue;
        if ( v21 )
        {
          while ( 1 )
          {
            if ( *(char *)(v21 + 48) < v19 )
            {
              v22 = *(_QWORD *)v21;
              if ( ((__int64)Root[3].Children[0] & 1) != 0 )
              {
                if ( !v22 )
                {
LABEL_48:
                  v20 = 0;
                  break;
                }
                v22 ^= v21;
              }
              if ( !v22 )
                goto LABEL_48;
            }
            else
            {
              v22 = *(_QWORD *)(v21 + 8);
              if ( ((__int64)Root[3].Children[0] & 1) != 0 )
              {
                if ( !v22 )
                {
LABEL_43:
                  v20 = 1;
                  break;
                }
                v22 ^= v21;
              }
              if ( !v22 )
                goto LABEL_43;
            }
            v21 = v22;
          }
        }
        v23 = (_RTL_RB_TREE *)&Root[2].16;
        goto LABEL_45;
      }
      v24 = KiAbOwnerComputeCpuPriorityKey(v5);
      v5[48] = v24;
      v21 = (unsigned __int64)Root[2].Children[0];
      v25 = v24;
      v20 = 0;
      if ( !v21 )
        goto LABEL_50;
      while ( 1 )
      {
        if ( *(char *)(v21 + 48) > v25 )
        {
          v26 = *(_QWORD *)v21;
          if ( ((__int64)Root[2].Right & 1) != 0 )
          {
            if ( !v26 )
            {
LABEL_84:
              v20 = 0;
              v23 = (_RTL_RB_TREE *)&Root[2];
              goto LABEL_45;
            }
            v26 ^= v21;
          }
          if ( !v26 )
            goto LABEL_84;
        }
        else
        {
          v26 = *(_QWORD *)(v21 + 8);
          if ( ((__int64)Root[2].Right & 1) != 0 )
          {
            if ( !v26 )
            {
LABEL_56:
              v20 = 1;
LABEL_50:
              v23 = (_RTL_RB_TREE *)&Root[2];
LABEL_45:
              RtlRbInsertNodeEx(v23, (PRTL_BALANCED_NODE)v21, v20, (PRTL_BALANCED_NODE)v5);
              v5[39] |= 0x80u;
              goto LABEL_21;
            }
            v26 ^= v21;
          }
          if ( !v26 )
            goto LABEL_56;
        }
        v21 = v26;
      }
    }
    if ( v8 )
      break;
    v8 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v7) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v7);
  }
  v12 = 0;
  v13 = v9->Root;
  if ( !v9->Root )
    goto LABEL_15;
  while ( 1 )
  {
    v27 = (__int64)v13[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v27 < v31 || v27 <= v31 && ((v28 = v13[1].ParentValue, v28 == DWORD2(v33)) || v28 < DWORD2(v33)) )
    {
      v29 = v13->Children[1];
      if ( (*(_BYTE *)&v9->0 & 1) != 0 )
      {
        if ( !v29 )
        {
LABEL_70:
          v12 = 1;
          goto LABEL_15;
        }
        v29 = (_RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ (unsigned __int64)v29);
      }
      if ( !v29 )
        goto LABEL_70;
      goto LABEL_88;
    }
    v29 = v13->Children[0];
    if ( (*(_BYTE *)&v9->0 & 1) != 0 )
      break;
LABEL_80:
    if ( !v29 )
      goto LABEL_81;
LABEL_88:
    v13 = v29;
  }
  if ( v29 )
  {
    v29 = (_RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ (unsigned __int64)v29);
    goto LABEL_80;
  }
LABEL_81:
  v12 = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v13, v12, (PRTL_BALANCED_NODE)v5);
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
LABEL_21:
  v15 = &v5[-16 * (unsigned __int8)v5[24]];
  if ( (v5[25] & 1) != 0 )
    ++v15[793];
  else
    _InterlockedExchangeAdd8(v15 + 1423, 1u);
  return v14;
}
