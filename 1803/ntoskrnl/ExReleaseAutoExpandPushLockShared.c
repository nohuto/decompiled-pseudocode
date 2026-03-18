/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140750614 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140750968 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x1407514F0 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockSharedEx @ 0x1400A4E7C (ExfReleasePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x14015A5EC (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v3 + 12));
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 >= 0x80000000 && (*(_DWORD *)(v3 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v4 < (unsigned int)ExpAeCycleCountThreshold
        || (v4 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v4 = (v4 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v3 + 12) = v4;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result == 17 )
    {
LABEL_6:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_8;
    }
    if ( (v4 & ExpAeSamplingPeriodMask) == 0 )
    {
      result = ExfReleasePushLockSharedEx(v3, &v7);
      if ( !v7 )
        goto LABEL_8;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_8;
      result = v7 >> ExpAeCycleCountScaler;
      if ( v7 >> ExpAeCycleCountScaler > 0x1FF )
        result = 511LL;
      v4 = result + v6;
      goto LABEL_6;
    }
    ExfReleasePushLockSharedEx(v3, 0LL);
    result = *(unsigned int *)(v3 + 12);
    if ( (unsigned int)result < 0x80000000 )
    {
      result = (unsigned int)(result + 0x100000);
      *(_DWORD *)(v3 + 12) = result;
    }
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result != 17 )
      result = ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_8:
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(v3);
  return result;
}
