/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x1401038D0
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x1406E7A90 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockSharedEx @ 0x140103A5C (ExfReleasePushLockSharedEx.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x14014A318 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  ULONG_PTR v3; // rbx
  unsigned int v4; // esi
  signed __int64 v5; // rax
  unsigned int v6; // esi
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

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
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( v5 == 17 )
    {
LABEL_6:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_8;
    }
    if ( (v4 & ExpAeSamplingPeriodMask) == 0 )
    {
      LOBYTE(v5) = ExfReleasePushLockSharedEx(v3, &v8);
      if ( !v8 )
        goto LABEL_8;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_8;
      v5 = v8 >> ExpAeCycleCountScaler;
      if ( v8 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v5) = 511;
      v4 = v5 + v6;
      goto LABEL_6;
    }
    ExfReleasePushLockSharedEx(v3, 0LL);
    LODWORD(v5) = *(_DWORD *)(v3 + 12);
    if ( (unsigned int)v5 < 0x80000000 )
    {
      LODWORD(v5) = v5 + 0x100000;
      *(_DWORD *)(v3 + 12) = v5;
    }
  }
  else
  {
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( v5 != 17 )
      LOBYTE(v5) = ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_8:
  if ( (v2 & 2) == 0 )
    LOBYTE(v5) = KeAbPostRelease(v3);
  return v5;
}
