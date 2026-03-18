/*
 * XREFs of PspConvertSiloToServerSilo @ 0x1406DE940
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x1406DE24C (PsGetParentSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1406DF064 (PspQueueDeferredWorkAndWait.c)
 *     PspJobHasChildren @ 0x1406E1704 (PspJobHasChildren.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14070ACD0 (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x460uLL, 0x476C6953u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x460uLL);
  v9[264] = 0;
  v9[265] = 259;
  if ( a3 )
  {
    SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(
                              a3,
                              2,
                              (__int64)ExEventObjectType,
                              a2,
                              1698982227,
                              (_QWORD *)v9 + 133,
                              0LL,
                              0LL);
    if ( SiloRootDirectoryPath < 0 )
      goto LABEL_7;
  }
  SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v9 + 258);
  if ( SiloRootDirectoryPath < 0 )
    goto LABEL_7;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PspIsServerSilo(a1) )
  {
    SiloRootDirectoryPath = -1073740536;
  }
  else if ( PsGetParentSilo(v12) )
  {
    SiloRootDirectoryPath = -1073741791;
  }
  else if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    SiloRootDirectoryPath = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x400000) != 0 )
  {
    *(_QWORD *)(a1 + 1256) = v9;
    SiloRootDirectoryPath = 0;
  }
  else
  {
    SiloRootDirectoryPath = -1073741811;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( SiloRootDirectoryPath < 0 )
  {
LABEL_7:
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
