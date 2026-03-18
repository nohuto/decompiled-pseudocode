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

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // r14
  int v4; // r12d
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  volatile LONG *v7; // rdi
  int v8; // ebp
  char *v9; // r15
  signed __int32 v10; // ett
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r15
  char v15; // cl
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v23; // al
  char v24; // cl
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  int v31; // [rsp+28h] [rbp-70h]
  __int128 v32; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE *v36; // [rsp+B0h] [rbp+18h]

  v36 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  v3 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  v4 = a2;
  v5 = a1;
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = a1 + 80;
    KxAcquireQueuedSpinLock(a3);
    if ( (*(_BYTE *)(v5 + 27) & 1) != 0 )
      return v5;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v3);
  }
  v32 = *(_OWORD *)(v5 + 32);
  if ( (__int64)v32 >= 0 && !v4 )
    return 0LL;
  v30 = v32 & 0x7FFFFFFFFFFFFFFCLL;
  v6 = ((((unsigned __int64)v32 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v7 = (volatile LONG *)((char *)&KiAbTreeArray + v6 + 16);
  v8 = 0;
  v31 = DWORD2(v32);
  v9 = (char *)&KiAbTreeArray + v6;
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
    v11 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v12 > v30 )
          goto LABEL_74;
        if ( v12 < v30 )
          goto LABEL_81;
        v13 = *(_DWORD *)(v11 + 40);
        if ( v13 == DWORD2(v32) )
          goto LABEL_13;
        if ( v13 < DWORD2(v32) )
        {
LABEL_81:
          v29 = *(_QWORD *)(v11 + 8);
          if ( (v9[8] & 1) != 0 && v29 )
          {
LABEL_96:
            v11 ^= v29;
            goto LABEL_76;
          }
        }
        else
        {
LABEL_74:
          v29 = *(_QWORD *)v11;
          if ( (v9[8] & 1) != 0 && v29 )
            goto LABEL_96;
        }
        v11 = v29;
LABEL_76:
        if ( !v11 )
        {
LABEL_13:
          v5 = a1;
          v3 = v36;
          break;
        }
      }
    }
    if ( !v4 )
    {
      if ( v11 )
      {
        v3->LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 80);
        v3->LockQueue.Next = 0LL;
        v14 = v11;
        KxAcquireQueuedSpinLock(v3);
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v7);
        if ( v5 == v11 )
          return v14;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
        KxAcquireQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v5, &v30) )
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
    if ( v11 )
    {
      v3->LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 80);
      v14 = v11;
      v3->LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(v3, v11 + 80);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v11 + 80), (__int64)v3) )
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
      if ( *(__int64 *)(v5 + 32) >= 0 )
      {
        if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
        {
          v23 = KiAbOwnerComputeCpuPriorityKey(v5);
          *(_BYTE *)(v5 + 48) = v23;
          v17 = *(_QWORD *)(v11 + 48);
          v24 = v23;
          v16 = 0;
          if ( !v17 )
          {
LABEL_56:
            v20 = v11 + 48;
            goto LABEL_42;
          }
          while ( 1 )
          {
            if ( *(char *)(v17 + 48) > v24 )
            {
              v25 = *(_QWORD *)v17;
              if ( (*(_BYTE *)(v11 + 56) & 1) != 0 )
              {
                if ( !v25 )
                {
LABEL_88:
                  v16 = 0;
                  v20 = v11 + 48;
                  goto LABEL_42;
                }
                v25 ^= v17;
              }
              if ( !v25 )
                goto LABEL_88;
            }
            else
            {
              v25 = *(_QWORD *)(v17 + 8);
              if ( (*(_BYTE *)(v11 + 56) & 1) != 0 )
              {
                if ( !v25 )
                {
LABEL_55:
                  v16 = 1;
                  goto LABEL_56;
                }
                v25 ^= v17;
              }
              if ( !v25 )
                goto LABEL_55;
            }
            v17 = v25;
          }
        }
        v15 = *(_BYTE *)(v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24)) + 195);
        if ( v15 > 15 )
          v15 = 15;
        *(_BYTE *)(v5 + 48) = v15;
        v16 = 0;
        v17 = *(_QWORD *)(v11 + 64);
        if ( v17 )
        {
          while ( 1 )
          {
            if ( *(char *)(v17 + 48) < v15 )
            {
              v18 = *(_QWORD *)v17;
              if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
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
              if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
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
        v20 = v11 + 64;
LABEL_42:
        RtlRbInsertNodeEx(v20, v17, v16, v5);
        *(_BYTE *)(v5 + 39) |= 0x80u;
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
  LOBYTE(a3) = 0;
  v19 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_34;
  while ( 1 )
  {
    a3 = v30;
    v26 = *(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL;
    if ( v26 > v30 || v26 >= v30 && (v27 = *(_DWORD *)(v19 + 40), v27 != DWORD2(v32)) && v27 >= DWORD2(v32) )
    {
      v28 = *(_QWORD *)v19;
      if ( (v9[8] & 1) != 0 )
      {
        if ( !v28 )
        {
LABEL_72:
          LOBYTE(a3) = 0;
          goto LABEL_34;
        }
        v28 ^= v19;
      }
      if ( !v28 )
        goto LABEL_72;
      goto LABEL_89;
    }
    v28 = *(_QWORD *)(v19 + 8);
    if ( (v9[8] & 1) != 0 )
      break;
LABEL_79:
    if ( !v28 )
      goto LABEL_80;
LABEL_89:
    v19 = v28;
  }
  if ( v28 )
  {
    v28 ^= v19;
    goto LABEL_79;
  }
LABEL_80:
  a3 = 1LL;
LABEL_34:
  RtlRbInsertNodeEx(v9, v19, a3, v5);
  v3->LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
  v14 = v5;
  v3->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, v5 + 80);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v5 + 80), (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  *(_BYTE *)(v5 + 39) |= 0x80u;
  *(_BYTE *)(v5 + 27) |= 1u;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_WORD *)(v5 + 90) &= 1u;
LABEL_43:
  v21 = v5 - (unsigned __int16)(16 * *(unsigned __int8 *)(v5 + 24));
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    ++*(_BYTE *)(v21 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v21 + 1423), 1u);
  return v14;
}
