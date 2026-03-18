/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x1400A7974
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140283F24 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400A7BAC (KiUpdateMinimumWeight.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall KeSetSchedulingGroupWeights(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1;
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( (_DWORD)v4 )
  {
    v7 = a2;
    v8 = a3 - a2;
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
      if ( (v9 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v9 & 0xFFFFFFFE;
        if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 96LL)) )
          KiAssignSchedulingGroupWeights(1LL, 0LL);
      }
      v10 = *(_QWORD **)v7;
      v11 = *(_QWORD *)(v8 + v7);
      v7 += 8LL;
      *v10 = v11;
      --v4;
    }
    while ( v4 );
  }
  LOBYTE(v6) = 1;
  KiUpdateMinimumWeight(0LL, v6, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
  LOBYTE(v12) = 1;
  KiAssignSchedulingGroupWeights(0LL, v12);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
