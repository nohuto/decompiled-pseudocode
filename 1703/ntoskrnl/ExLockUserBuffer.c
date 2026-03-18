/*
 * XREFs of ExLockUserBuffer @ 0x14055C224
 * Callers:
 *     ExpGetLookasideInformation @ 0x1402598CC (ExpGetLookasideInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x1404C76E4 (ExGetSessionPoolTagInformation.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140715094 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140715108 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14071517C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407151F0 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407199A0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14071AFF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14071CE24 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14071D114 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14071D67C (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x1401228F0 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v9; // rsi
  SIZE_T v10; // rax
  struct _MDL *PoolWithQuotaTag; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  *P = 0LL;
  *a6 = 0LL;
  v9 = a2;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x6F666E49u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag->Next = 0LL;
    PoolWithQuotaTag->Size = 8 * ((((a1 & 0xFFF) + v9 + 4095) >> 12) + 6);
    PoolWithQuotaTag->MdlFlags = 0;
    PoolWithQuotaTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithQuotaTag->ByteOffset = a1 & 0xFFF;
    PoolWithQuotaTag->ByteCount = v9;
    MmProbeAndLockPages(PoolWithQuotaTag, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
