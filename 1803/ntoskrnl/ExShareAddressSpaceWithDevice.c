/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1402BB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MmEnableProcessSvm @ 0x140251B6C (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x1402BBEA8 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1402BC0E8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1402BC3A0 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoQueryInterface @ 0x140647DF0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1407C627C (ExpAssignPasid.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  struct _EX_RUNDOWN_REF *p_Blink; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int Interface; // r12d
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int Asid; // r15d
  _QWORD *v16; // rsi
  unsigned __int8 v17; // si
  unsigned __int64 v18; // rcx
  unsigned __int64 **v19; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v21; // rax
  signed __int8 v22; // cf
  __int64 v23; // rsi
  __int64 *v24; // rax
  __int64 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 *v28; // rcx
  unsigned __int64 *PoolWithTag; // rax
  char v30; // r13
  unsigned __int64 *v31; // rcx
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rax
  struct _KTHREAD *v34; // [rsp+40h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-61h] BYREF
  __int64 v36; // [rsp+60h] [rbp-49h]
  char v37[8]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v38; // [rsp+78h] [rbp-31h]
  void (__fastcall *v39)(__int64); // [rsp+88h] [rbp-21h]
  unsigned __int64 v42; // [rsp+120h] [rbp+77h] BYREF
  PVOID P; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = -1;
  v2 = a1;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(v2, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 72, 1, 0LL, v37);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3], 0LL, 0);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[3], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        &Process[2].ActiveProcessors.Bitmap[3],
        v13,
        (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    Asid = Process[2].ActiveProcessors.Bitmap[1];
    if ( !Asid )
    {
      Asid = ExpAllocateAsid();
      if ( !Asid )
      {
        Interface = -1073741709;
        goto LABEL_15;
      }
      if ( !(unsigned int)ExpAssignPasid(Process) )
        Asid = Process[2].ActiveProcessors.Bitmap[1];
    }
    --Asid;
    v42 = Process[2].ActiveProcessors.Bitmap[2];
    if ( !v42 )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))HalIommuDispatch[2])(Asid, 0LL, &v42);
      if ( Interface < 0 )
        goto LABEL_15;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
      if ( Process[2].ActiveProcessors.Bitmap[2] )
      {
        v4 = v42;
        v42 = Process[2].ActiveProcessors.Bitmap[2];
      }
      else
      {
        Process[2].ActiveProcessors.Bitmap[2] = v42;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      if ( v4 )
        ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v4);
    }
    v21 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
    v23 = v21;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v21, (ULONG_PTR)&ExpSvmDeviceListLock);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v24 = (__int64 *)ExpSvmDevices;
    v25 = &ExpSvmDevices;
    if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
      goto LABEL_44;
    v26 = a1;
    do
    {
      v27 = (__int64)v24;
      v28 = v24;
      P = v24;
      if ( v24[2] == a1 )
        break;
      v24 = (__int64 *)*v24;
    }
    while ( v24 != &ExpSvmDevices );
    if ( v28[2] != a1 )
    {
      v28 = 0LL;
      P = 0LL;
      v27 = 0LL;
    }
    if ( !v27 )
LABEL_44:
      Interface = ExpPrepareNewSvmDevice(a1, v42, v37, &P);
    else
      ++*((_DWORD *)v28 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock, v27, v26, (__int64)v25);
    KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
    if ( Interface >= 0 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
      v16 = P;
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = (unsigned __int64)P;
        v30 = 0;
        v36 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
        v31 = &Process[2].ActiveProcessors.Bitmap[5];
        v32 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[5];
        if ( v32 == &Process[2].ActiveProcessors.Bitmap[5] )
        {
LABEL_53:
          v33 = *v31;
          if ( *(unsigned __int64 **)(*v31 + 8) != v31 )
            __fastfail(3u);
          *v3 = v33;
          v3[1] = (unsigned __int64)v31;
          *(_QWORD *)(v33 + 8) = v3;
          *v31 = (unsigned __int64)v3;
        }
        else
        {
          while ( *(_QWORD *)(v32[2] + 16) != a1 )
          {
            v32 = (unsigned __int64 *)*v32;
            if ( v32 == v31 )
              goto LABEL_53;
          }
          v30 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8((unsigned __int8)v36);
        if ( v30 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
        }
        else
        {
          MmEnableProcessSvm();
          Interface = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[4])(v42, v16[14]);
          if ( Interface >= 0 )
            Interface = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))HalIommuDispatch[5])(
                          v42,
                          Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
        }
      }
      else
      {
        Interface = -1073741670;
      }
      goto LABEL_16;
    }
LABEL_15:
    v16 = P;
LABEL_16:
    v39(v38);
    if ( Interface >= 0 )
    {
      *a2 = Asid;
    }
    else
    {
      if ( v16 )
        ExpSvmDereferenceDevice(v16);
      if ( v3 )
      {
        v17 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
        v18 = *v3;
        if ( *(unsigned __int64 **)(*v3 + 8) != v3 || (v19 = (unsigned __int64 **)v3[1], *v19 != v3) )
          __fastfail(3u);
        *v19 = (unsigned __int64 *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(v17);
        ExFreePoolWithTag(v3, 0);
      }
    }
    CurrentThread = v34;
    p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3], v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  ExReleaseRundownProtection(p_Blink);
  return (unsigned int)Interface;
}
