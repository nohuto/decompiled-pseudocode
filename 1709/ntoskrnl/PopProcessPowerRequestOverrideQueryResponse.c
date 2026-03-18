/*
 * XREFs of PopProcessPowerRequestOverrideQueryResponse @ 0x1400B0A44
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400B09A8 (PopQueuePowerRequestCallbacks.c)
 *     PopPowerRequestFindEntryById @ 0x1404E7E28 (PopPowerRequestFindEntryById.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E9084 (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x1404F23DC (PopProcessDisplayRequiredChange.c)
 */

LONG_PTR __fastcall PopProcessPowerRequestOverrideQueryResponse(unsigned int *a1)
{
  unsigned int v1; // r13d
  void *v3; // rdi
  unsigned int v4; // r12d
  __int64 *EntryById; // rax
  __int64 v6; // rbx
  bool v7; // zf
  unsigned int v8; // r15d
  LONG_PTR result; // rax
  int v10; // esi
  int v11; // r14d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
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
    v7 = *(_DWORD *)(v6 + 24) == v1;
    v8 = *(_DWORD *)(v6 + 24) ^ v1;
    *(_DWORD *)(v6 + 24) = v1;
    if ( !v7 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v10, v8);
        v11 = 1 << v10;
        if ( *(_DWORD *)(v6 + 4LL * v10 + 32) )
        {
          if ( !v10 && *(_QWORD *)(v6 + 96) )
          {
            v3 = *(void **)(v6 + 96);
            ObfReferenceObjectWithTag(v3, 0x746C6644u);
          }
          v12 = PopPowerRequestAttributes[4 * v10];
          if ( (v11 & v1) != 0 )
          {
            v13 = v12 - 1;
            v4 = 2;
            PopPowerRequestAttributes[4 * v10] = v13;
            if ( !v10 || v10 == 3 || !v13 )
              --*(_BYTE *)(v6 + v10 + 72);
          }
          else
          {
            v4 = 1;
            if ( v12 != -1 )
            {
              v14 = v12 + 1;
              PopPowerRequestAttributes[4 * v10] = v14;
              if ( !v10 || v10 == 3 || v14 == 1 )
                ++*(_BYTE *)(v6 + v10 + 72);
            }
          }
        }
        v8 &= ~v11;
      }
      while ( v8 );
    }
    PopQueuePowerRequestCallbacks(v6, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  result = PopReleasePowerRequestPushLock();
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObject(v3);
  }
  return result;
}
