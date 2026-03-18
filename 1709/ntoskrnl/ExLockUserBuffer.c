/*
 * XREFs of ExLockUserBuffer @ 0x14056EEE8
 * Callers:
 *     ExpGetLookasideInformation @ 0x1402834C0 (ExpGetLookasideInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140754220 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407542B8 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140754350 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407543C4 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407591A4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14075C71C (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14075CA24 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14075CF8C (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140115AC0 (MmSizeOfMdl.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
