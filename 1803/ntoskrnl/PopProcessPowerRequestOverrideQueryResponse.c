/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PopQueuePowerRequestCallbacks @ 0x140076748 (PopQueuePowerRequestCallbacks.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140524B6C (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestFindEntryById @ 0x140524BC0 (PopPowerRequestFindEntryById.c)
 *     PopProcessDisplayRequiredChange @ 0x140524F6C (PopProcessDisplayRequiredChange.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r13d
  void *v3; // rsi
  unsigned int v4; // r12d
  __int64 *EntryById; // rax
  __int64 v6; // rbx
  int *v7; // rdx
  bool v8; // zf
  unsigned int v9; // r15d
  LONG_PTR result; // rax
  int v11; // edi
  int v12; // r14d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[2];
  v3 = 0LL;
  v4 = 0;
  PopAcquirePowerRequestPushLock(0LL);
  EntryById = (__int64 *)PopPowerRequestFindEntryById(*a1);
  if ( EntryById )
  {
    v6 = *EntryById;
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    v8 = *(_DWORD *)(v6 + 24) == v1;
    v9 = *(_DWORD *)(v6 + 24) ^ v1;
    *(_DWORD *)(v6 + 24) = v1;
    if ( !v8 )
    {
      v7 = PopPowerRequestAttributes;
      do
      {
        _BitScanForward((unsigned int *)&v11, v9);
        v12 = 1 << v11;
        if ( *(_DWORD *)(v6 + 4LL * v11 + 32) )
        {
          if ( !v11 && *(_QWORD *)(v6 + 96) )
          {
            v3 = *(void **)(v6 + 96);
            ObfReferenceObjectWithTag(v3, 0x72506F50u);
            v7 = PopPowerRequestAttributes;
          }
          v13 = PopPowerRequestAttributes[4 * v11];
          if ( (v12 & v1) != 0 )
          {
            v14 = v13 - 1;
            v4 = 2;
            PopPowerRequestAttributes[4 * v11] = v14;
            if ( !v11 || v11 == 3 || !v14 )
              --*(_BYTE *)(v6 + v11 + 72);
          }
          else
          {
            v4 = 1;
            if ( v13 != -1 )
            {
              v15 = v13 + 1;
              PopPowerRequestAttributes[4 * v11] = v15;
              if ( !v11 || v11 == 3 || v15 == 1 )
                ++*(_BYTE *)(v6 + v11 + 72);
            }
          }
        }
        v9 &= ~v12;
      }
      while ( v9 );
    }
    LOBYTE(v7) = 1;
    PopQueuePowerRequestCallbacks(v6, v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  result = PopReleasePowerRequestPushLock();
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
