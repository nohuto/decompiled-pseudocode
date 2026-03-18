/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x140060870
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140060810 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14012B770 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopAssignBootDriveLetter @ 0x14084468C (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     PsGetBaseIoPriorityThread @ 0x140060E60 (PsGetBaseIoPriorityThread.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IopProbeAndLockPages @ 0x1400BBC78 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9,
        __int64 a10)
{
  SIZE_T v10; // r15
  int v12; // r13d
  __int64 Irp; // rax
  IRP *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  SIZE_T v18; // rdx
  struct _IRP *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *p_SystemCallNumber; // r14
  LIST_ENTRY *p_ThreadListEntry; // rdi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int64 *v24; // rsi
  struct _LIST_ENTRY *Flink; // rax
  int BaseIoPriorityThread; // eax
  struct _KTHREAD *v27; // rdx
  struct _IRP *Pool; // rax
  int v30; // r15d
  PMDL Mdl; // rax
  int v32; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a4;
  v12 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  if ( a7 )
    *(_BYTE *)(v16 - 72) = 15;
  else
    *(_BYTE *)(v16 - 72) = 14;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = v10;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_14;
    }
    if ( a3 )
    {
      Pool = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v10);
      v15->AssociatedIrp.MasterIrp = Pool;
      if ( !Pool )
        goto LABEL_38;
      memmove(Pool, a3, v10);
      v15->Flags = 48;
      v30 = 0;
    }
    else
    {
      v30 = 0;
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_14;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v15->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v30 = 1;
      IopProbeAndLockPages((_DWORD)Mdl, v32, v30, v12, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_14;
    }
    if ( a3 )
      ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
LABEL_38:
    IoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || Length )
  {
    v18 = (unsigned int)v10;
    if ( (unsigned int)v10 <= Length )
      v18 = Length;
    v19 = (struct _IRP *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v18);
    v15->AssociatedIrp.MasterIrp = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v10);
      v15->Flags = 48;
      v15->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v15->Flags = 112;
      goto LABEL_14;
    }
    goto LABEL_38;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_14:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v15->Tail.Overlay.Thread = CurrentThread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&CurrentThread[1].SystemCallNumber;
  p_ThreadListEntry = &v15->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v24 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v15->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v24, retaddr);
  else
    _InterlockedAnd64(v24, 0LL);
  __writecr8(CurrentIrql);
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(v15->Tail.Overlay.Thread);
  if ( BaseIoPriorityThread < 2 && v27 == KeGetCurrentThread() )
  {
    if ( v27[1].Timer.DueTime.LowPart )
      BaseIoPriorityThread = 2;
  }
  v15->Flags = v15->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  return v15;
}
