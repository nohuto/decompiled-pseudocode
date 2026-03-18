/*
 * XREFs of PopLogDisabledSleepReason @ 0x1404E8738
 * Callers:
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E89AC (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 */

__int64 PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  unsigned int v2; // esi
  __int64 v3; // rax
  SIZE_T v4; // rbp
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  __int64 v7; // rcx
  _DWORD *v8; // r8

  v0 = 0;
  v1 = 0;
  v2 = 0;
  ExAcquireFastMutex(&PopDisableSleepMutex);
  PopRemoveReasonRecordByReasonCode(13LL);
  v3 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v1 |= *(_DWORD *)(v3 + 20);
      ++v2;
      v3 = *(_QWORD *)v3;
    }
    while ( (__int64 *)v3 != &PopDisableSleepList );
    if ( v1 )
    {
      v4 = 8LL * v2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x66756263u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v7 = PopDisableSleepList;
        v8 = PoolWithTag;
        while ( (__int64 *)v7 != &PopDisableSleepList )
        {
          *v8 = *(_DWORD *)(v7 + 16);
          v8 += 2;
          *(v8 - 1) = *(_DWORD *)(v7 + 20);
          v7 = *(_QWORD *)v7;
        }
        v0 = PopLogSleepDisabled(13LL, v1, PoolWithTag, v4);
        ExFreePoolWithTag(v6, 0x66756263u);
      }
      else
      {
        v0 = -1073741670;
      }
    }
  }
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  return v0;
}
