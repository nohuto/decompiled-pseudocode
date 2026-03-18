/*
 * XREFs of PspConvertSiloToServerSilo @ 0x140714DA8
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1407154E4 (PspQueueDeferredWorkAndWait.c)
 *     PspJobHasChildren @ 0x140717A38 (PspJobHasChildren.c)
 *     EtwTraceJobServerSiloStateChange @ 0x140745B74 (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, char a2, ULONG_PTR a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx

  v6 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x480uLL, 0x476C6953u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x480uLL);
  v9[272] = 0;
  v9[273] = 259;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(
                                  a3,
                                  2,
                                  (__int64)ExEventObjectType,
                                  a2,
                                  1698982227,
                                  (_QWORD *)v9 + 137,
                                  0LL,
                                  0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v9 + 266), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, (__int64)CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo(v12)
       ? (!(unsigned __int8)PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1256) = v9, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJob(a1, (__int64)CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
    PspDeleteServerSiloGlobals(v9);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1, 0LL);
    if ( (int)PspQueueDeferredWorkAndWait(v13, a1) < 0 )
      return (unsigned int)-1073740955;
    return v6;
  }
}
