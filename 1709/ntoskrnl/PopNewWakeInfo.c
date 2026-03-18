/*
 * XREFs of PopNewWakeInfo @ 0x140431C7C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1402412FC (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x140241444 (PopReleaseWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x1402418E0 (PopWakeInfoDereference.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

LONG PopNewWakeInfo()
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x206D654Du);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    *(_DWORD *)(v1 + 16) = 1;
    *(_QWORD *)(v1 + 8) = v1;
    *(_QWORD *)v1 = v1;
    *(_QWORD *)(v1 + 32) = v1 + 24;
    *(_QWORD *)(v1 + 24) = v1 + 24;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = (_QWORD *)PopPendingWakeInfo;
  if ( PopPendingWakeInfo )
  {
    v3 = PopWakeInfoList;
    if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
      __fastfail(3u);
    PopPendingWakeInfo = 0LL;
    ++PopWakeInfoCount;
    *v2 = PopWakeInfoList;
    v2[1] = &PopWakeInfoList;
    *(_QWORD *)(v3 + 8) = v2;
    PopWakeInfoList = (__int64)v2;
  }
  v4 = (_QWORD *)PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo )
  {
    v5 = PopWakeInfoList;
    if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
      __fastfail(3u);
    PopCurrentWakeInfo = 0LL;
    ++PopWakeInfoCount;
    *v4 = PopWakeInfoList;
    v4[1] = &PopWakeInfoList;
    *(_QWORD *)(v5 + 8) = v4;
    PopWakeInfoList = (__int64)v4;
  }
  if ( v1 )
  {
    PopCurrentWakeInfo = v1;
    if ( PopWakeInfoCount == 1 )
    {
      v6 = (_QWORD *)qword_140366708;
      v7 = *(_QWORD **)(qword_140366708 + 8);
      if ( *(__int64 **)qword_140366708 != &PopWakeInfoList || *v7 != qword_140366708 )
        __fastfail(3u);
      qword_140366708 = *(_QWORD *)(qword_140366708 + 8);
      *v7 = &PopWakeInfoList;
      v6[1] = v6;
      *v6 = v6;
      PopWakeInfoDereference((__int64)v6);
      --PopWakeInfoCount;
    }
  }
  PopReleaseWakeSourceSpinLock(&LockHandle);
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
