/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14025D960
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MmEnableProcessSvm @ 0x14020C7C4 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x14025E058 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14025E2A8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14025E500 (ExpSvmDereferenceDevice.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoQueryInterface @ 0x1405C77C0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x14071F11C (ExpAssignPasid.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  struct _EX_RUNDOWN_REF *p_Blink; // r15
  int Interface; // r12d
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rsi
  unsigned int Asid; // r15d
  _QWORD *v13; // rsi
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rcx
  unsigned __int64 **v16; // rax
  unsigned __int8 CurrentIrql; // si
  PRTL_BALANCED_NODE v18; // rax
  signed __int8 v19; // cf
  PRTL_BALANCED_NODE v20; // rsi
  char v21; // r13
  __int64 *v22; // rcx
  __int64 *v23; // rax
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v25; // rcx
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  struct _KTHREAD *v28; // [rsp+40h] [rbp-59h]
  unsigned __int8 v29; // [rsp+48h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-49h] BYREF
  char v31[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v32; // [rsp+78h] [rbp-21h]
  void (__fastcall *v33)(__int64); // [rsp+88h] [rbp-11h]
  unsigned __int64 v36; // [rsp+110h] [rbp+77h] BYREF
  PVOID P; // [rsp+118h] [rbp+7Fh] BYREF

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
  v28 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(v2, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 64, 1, 0LL, v31);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3], 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[3], 0LL) )
      ExfAcquirePushLockExclusiveEx(
        &Process[2].ActiveProcessors.Bitmap[3],
        v10,
        (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
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
    v36 = Process[2].ActiveProcessors.Bitmap[2];
    if ( !v36 )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))HalIommuDispatch[2])(Asid, 0LL, &v36);
      if ( Interface < 0 )
        goto LABEL_15;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
      if ( Process[2].ActiveProcessors.Bitmap[2] )
      {
        v4 = v36;
        v36 = Process[2].ActiveProcessors.Bitmap[2];
      }
      else
      {
        Process[2].ActiveProcessors.Bitmap[2] = v36;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      if ( v4 )
        ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v4);
    }
    v18 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
    v19 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
    v20 = v18;
    if ( v19 )
      ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v18, (ULONG_PTR)&ExpSvmDeviceListLock);
    v21 = 0;
    if ( v20 )
      BYTE2(v20[1].Left) |= 1u;
    v22 = (__int64 *)ExpSvmDevices;
    if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
      goto LABEL_43;
    do
    {
      v23 = v22;
      if ( v22[2] == a1 )
        break;
      v22 = (__int64 *)*v22;
    }
    while ( v22 != &ExpSvmDevices );
    if ( v23[2] != a1 )
      v23 = 0LL;
    P = v23;
    if ( !v23 )
LABEL_43:
      Interface = ExpPrepareNewSvmDevice(a1, v36, v31, &P);
    else
      ++*((_DWORD *)v23 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
    if ( Interface >= 0 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
      v13 = P;
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = (unsigned __int64)P;
        v29 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
        v25 = &Process[2].ActiveProcessors.Bitmap[5];
        v26 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[5];
        if ( v26 == &Process[2].ActiveProcessors.Bitmap[5] )
        {
LABEL_52:
          v27 = *v25;
          if ( *(unsigned __int64 **)(*v25 + 8) != v25 )
            __fastfail(3u);
          *v3 = v27;
          v3[1] = (unsigned __int64)v25;
          *(_QWORD *)(v27 + 8) = v3;
          *v25 = (unsigned __int64)v3;
        }
        else
        {
          while ( *(_QWORD *)(v26[2] + 16) != a1 )
          {
            v26 = (unsigned __int64 *)*v26;
            if ( v26 == v25 )
              goto LABEL_52;
          }
          v21 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(v29);
        if ( v21 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
        }
        else
        {
          MmEnableProcessSvm();
          Interface = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[4])(v36, v13[13]);
          if ( Interface >= 0 )
            Interface = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))HalIommuDispatch[5])(
                          v36,
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
    v13 = P;
LABEL_16:
    v33(v32);
    if ( Interface >= 0 )
    {
      *a2 = Asid;
    }
    else
    {
      if ( v13 )
        ExpSvmDereferenceDevice(v13);
      if ( v3 )
      {
        v14 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &Process[2].ActiveProcessors.Bitmap[4];
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4]);
        v15 = *v3;
        v16 = (unsigned __int64 **)v3[1];
        if ( *(unsigned __int64 **)(*v3 + 8) != v3 || *v16 != v3 )
          __fastfail(3u);
        *v16 = (unsigned __int64 *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(v14);
        ExFreePoolWithTag(v3, 0);
      }
    }
    CurrentThread = v28;
    p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3]);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  ExReleaseRundownProtection(p_Blink);
  return (unsigned int)Interface;
}
