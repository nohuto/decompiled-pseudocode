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

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // rbp
  int v4; // esi
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  volatile LONG *v7; // r14
  int v8; // r12d
  char *v9; // r15
  signed __int32 v10; // ett
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  char v18; // cl
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  char v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
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
        v16 = *(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v16 < v30 )
          goto LABEL_74;
        if ( v16 > v30 )
          goto LABEL_72;
        v17 = *(_DWORD *)(v11 + 40);
        if ( v17 == DWORD2(v32) )
          goto LABEL_28;
        if ( v17 < DWORD2(v32) )
        {
LABEL_74:
          v29 = *(_QWORD *)(v11 + 8);
          if ( (v9[8] & 1) != 0 && v29 )
          {
LABEL_95:
            v11 ^= v29;
            goto LABEL_76;
          }
        }
        else
        {
LABEL_72:
          v29 = *(_QWORD *)v11;
          if ( (v9[8] & 1) != 0 && v29 )
            goto LABEL_95;
        }
        v11 = v29;
LABEL_76:
        if ( !v11 )
        {
LABEL_28:
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
        v13 = v11;
        KxAcquireQueuedSpinLock(v3);
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v7);
        if ( v5 == v11 )
          return v13;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
        KxAcquireQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiAbCompareSnappedEntryState((__m128i *)v5, (__int64)&v30) )
          return v13;
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
      v13 = v11;
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
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v7);
      if ( *(__int64 *)(v5 + 32) < 0 )
        return v13;
      if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
      {
        v18 = *(_BYTE *)(v5 - 16LL * *(unsigned __int8 *)(v5 + 24) + 195);
        if ( v18 > 15 )
          v18 = 15;
        *(_BYTE *)(v5 + 48) = v18;
        v19 = 0;
        v20 = *(_QWORD *)(v11 + 64);
        if ( v20 )
        {
          while ( 1 )
          {
            if ( *(char *)(v20 + 48) < v18 )
            {
              v21 = *(_QWORD *)v20;
              if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
              {
                if ( !v21 )
                {
LABEL_48:
                  v19 = 0;
                  break;
                }
                v21 ^= v20;
              }
              if ( !v21 )
                goto LABEL_48;
            }
            else
            {
              v21 = *(_QWORD *)(v20 + 8);
              if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
              {
                if ( !v21 )
                {
LABEL_43:
                  v19 = 1;
                  break;
                }
                v21 ^= v20;
              }
              if ( !v21 )
                goto LABEL_43;
            }
            v20 = v21;
          }
        }
        v22 = v11 + 64;
        goto LABEL_45;
      }
      v23 = KiAbOwnerComputeCpuPriorityKey(v5);
      *(_BYTE *)(v5 + 48) = v23;
      v20 = *(_QWORD *)(v11 + 48);
      v24 = v23;
      v19 = 0;
      if ( !v20 )
        goto LABEL_50;
      while ( 1 )
      {
        if ( *(char *)(v20 + 48) > v24 )
        {
          v25 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(v11 + 56) & 1) != 0 )
          {
            if ( !v25 )
            {
LABEL_84:
              v19 = 0;
              v22 = v11 + 48;
              goto LABEL_45;
            }
            v25 ^= v20;
          }
          if ( !v25 )
            goto LABEL_84;
        }
        else
        {
          v25 = *(_QWORD *)(v20 + 8);
          if ( (*(_BYTE *)(v11 + 56) & 1) != 0 )
          {
            if ( !v25 )
            {
LABEL_56:
              v19 = 1;
LABEL_50:
              v22 = v11 + 48;
LABEL_45:
              RtlRbInsertNodeEx(v22, v20, v19, v5);
              *(_BYTE *)(v5 + 39) |= 0x80u;
              goto LABEL_21;
            }
            v25 ^= v20;
          }
          if ( !v25 )
            goto LABEL_56;
        }
        v20 = v25;
      }
    }
    if ( v8 )
      break;
    v8 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v7) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v7);
  }
  LOBYTE(a3) = 0;
  v12 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_15;
  while ( 1 )
  {
    a3 = v30;
    v26 = *(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL;
    if ( v26 < v30 || v26 <= v30 && ((v27 = *(_DWORD *)(v12 + 40), v27 == DWORD2(v32)) || v27 < DWORD2(v32)) )
    {
      v28 = *(_QWORD *)(v12 + 8);
      if ( (v9[8] & 1) != 0 )
      {
        if ( !v28 )
        {
LABEL_70:
          a3 = 1LL;
          goto LABEL_15;
        }
        v28 ^= v12;
      }
      if ( !v28 )
        goto LABEL_70;
      goto LABEL_88;
    }
    v28 = *(_QWORD *)v12;
    if ( (v9[8] & 1) != 0 )
      break;
LABEL_80:
    if ( !v28 )
      goto LABEL_81;
LABEL_88:
    v12 = v28;
  }
  if ( v28 )
  {
    v28 ^= v12;
    goto LABEL_80;
  }
LABEL_81:
  LOBYTE(a3) = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v12, a3, v5);
  v3->LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 80);
  v13 = v5;
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
LABEL_21:
  v14 = v5 - 16LL * *(unsigned __int8 *)(v5 + 24);
  if ( (*(_BYTE *)(v5 + 25) & 1) != 0 )
    ++*(_BYTE *)(v14 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v14 + 1423), 1u);
  return v13;
}
