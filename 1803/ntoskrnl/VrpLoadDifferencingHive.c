/*
 * XREFs of VrpLoadDifferencingHive @ 0x14070D6EC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140708F80 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14070929C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14070D100 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14070D150 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14070D198 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14070D4FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14070D9D4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14070DC20 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        const UNICODE_STRING *a1,
        const void **a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v6; // r13
  HANDLE v7; // r12
  int DiffHiveEntryForMountPoint; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rdi
  volatile signed __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // si
  signed __int64 v16; // rax
  unsigned __int64 i; // rcx
  signed __int64 v18; // rtt
  HANDLE v19; // rcx
  struct _KTHREAD *v20; // rax
  int v22; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h] BYREF
  const void **v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  __int128 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-28h]
  const UNICODE_STRING *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  __int128 v34; // [rsp+F8h] [rbp-10h]

  P = 0LL;
  v6 = 0;
  KeyHandle = 0LL;
  v7 = 0LL;
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(a1, a2, (__int64 *)&P);
  if ( DiffHiveEntryForMountPoint < 0 )
    goto LABEL_37;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (char *)P;
  v11 = (volatile signed __int64 *)((char *)P + 24);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)P + 24, 0LL);
  v15 = 1;
  if ( ++*((_QWORD *)v10 + 4) <= 1uLL )
  {
    _m_prefetchw(v10 + 16);
    v16 = *((_QWORD *)v10 + 2);
    for ( i = v16 + 1; ; i = v16 + 1 )
    {
      if ( i <= 1 )
      {
        if ( i != 1 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v18 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 2, i, v16);
      if ( v18 == v16 )
        break;
    }
    v10 = (char *)P;
  }
  DiffHiveEntryForMountPoint = 0;
  if ( (*((_DWORD *)v10 + 14) & 1) == 0 )
  {
    do
    {
      if ( (*((_DWORD *)v10 + 14) & 1) != 0 )
        break;
      v6 = VrpBecomeDiffHiveEntryTransitionOwner((__int64)v10);
      if ( v6 )
        goto LABEL_17;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v10);
      ++DiffHiveEntryForMountPoint;
    }
    while ( (unsigned int)DiffHiveEntryForMountPoint < 2 );
    if ( (*((_DWORD *)v10 + 14) & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = *((_DWORD *)v10 + 15);
LABEL_33:
      VrpDecrementDiffHiveEntryHardRefCount((__int64)v10);
      goto LABEL_34;
    }
LABEL_17:
    if ( (*((_DWORD *)v10 + 14) & 1) != 0 )
    {
LABEL_29:
      DiffHiveEntryForMountPoint = 0;
      v15 = 0;
LABEL_30:
      if ( v6 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v10);
      if ( v15 )
        goto LABEL_33;
      goto LABEL_34;
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11, v12, v13, v14);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a3->Length )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_28;
      v19 = KeyHandle;
      if ( a5 )
        v7 = KeyHandle;
    }
    else
    {
      v19 = KeyHandle;
    }
    v32 = a1;
    v27 = a2;
    v31 = 0LL;
    *((_QWORD *)&v26 + 1) = 0LL;
    v30 = 48;
    v33 = 576;
    v34 = 0LL;
    LODWORD(v26) = 48;
    v28 = 576;
    v29 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)&v30,
                                   &v26,
                                   a4,
                                   (__int64)v7,
                                   0LL,
                                   0,
                                   0LL,
                                   v22,
                                   (__int64)v19,
                                   a6 != 0,
                                   0LL,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_28:
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    *((_DWORD *)v10 + 14) = *((_DWORD *)v10 + 14) & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    v10 = (char *)P;
    *((_DWORD *)P + 15) = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_34:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11, v12, v13, v14);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_37:
  if ( P )
    VrpDereferenceDiffHiveEntry(P);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
