/*
 * XREFs of VrpLoadDifferencingHive @ 0x14067DF68
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14067A4F4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14067D9D8 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14067DA28 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14067DA6C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14067DD84 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14067E238 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14067E474 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
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
  int DiffHiveEntryForMountPoint; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rdi
  volatile signed __int64 *v11; // r15
  char v12; // r14
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  HANDLE v15; // rcx
  struct _KTHREAD *v16; // rax
  int v18; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  int v22; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  const void **v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-28h]
  const UNICODE_STRING *v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+F0h] [rbp-18h]
  __int128 v31; // [rsp+F8h] [rbp-10h]

  P = 0LL;
  v6 = 0;
  KeyHandle = 0LL;
  v7 = 0LL;
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(a1, a2, (__int64 *)&P);
  if ( DiffHiveEntryForMountPoint < 0 )
    goto LABEL_36;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (char *)P;
  v11 = (volatile signed __int64 *)((char *)P + 24);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)P + 24, 0LL);
  v12 = 1;
  if ( ++*((_QWORD *)v10 + 4) <= 1uLL )
  {
    _m_prefetchw(v10 + 16);
    v13 = *((_QWORD *)v10 + 2);
    do
    {
      if ( (unsigned __int64)(v13 + 1) <= 1 )
      {
        if ( v13 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 2, v13 + 1, v13);
    }
    while ( v14 != v13 );
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
        goto LABEL_16;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v10);
      ++DiffHiveEntryForMountPoint;
    }
    while ( (unsigned int)DiffHiveEntryForMountPoint < 2 );
    if ( (*((_DWORD *)v10 + 14) & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = *((_DWORD *)v10 + 15);
LABEL_32:
      VrpDecrementDiffHiveEntryHardRefCount((__int64)v10);
      goto LABEL_33;
    }
LABEL_16:
    if ( (*((_DWORD *)v10 + 14) & 1) != 0 )
    {
LABEL_28:
      DiffHiveEntryForMountPoint = 0;
      v12 = 0;
LABEL_29:
      if ( v6 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v10);
      if ( v12 )
        goto LABEL_32;
      goto LABEL_33;
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( a3->Length )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_27;
      v15 = KeyHandle;
      if ( a5 )
        v7 = KeyHandle;
    }
    else
    {
      v15 = KeyHandle;
    }
    v29 = a1;
    v24 = a2;
    v28 = 0LL;
    v23 = 0LL;
    v27 = 48;
    v30 = 576;
    v31 = 0LL;
    v22 = 48;
    v25 = 576;
    v26 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)&v27,
                                   (__int64)&v22,
                                   a4,
                                   v7,
                                   0LL,
                                   0,
                                   0LL,
                                   v18,
                                   v15,
                                   a6 != 0,
                                   0LL,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_27:
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    *((_DWORD *)v10 + 14) = *((_DWORD *)v10 + 14) & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    v10 = (char *)P;
    *((_DWORD *)P + 15) = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_36:
  if ( P )
    VrpDereferenceDiffHiveEntry(P);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
