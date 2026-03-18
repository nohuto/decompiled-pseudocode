/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14004A740
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14004AAA0 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140135BE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407FAA40 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 * Callees:
 *     IopProbeAndLockPages @ 0x140038BFC (IopProbeAndLockPages.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x14004AA70 (PsGetBaseIoPriorityThread.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG NumberOfBytes,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9,
        __int64 a10)
{
  SIZE_T v10; // r15
  __int64 Irp; // rax
  IRP *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  SIZE_T v18; // rdx
  struct _IRP *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *p_FirstArgument; // r14
  LIST_ENTRY *p_ThreadListEntry; // rdi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int64 *v24; // rsi
  struct _LIST_ENTRY *Flink; // rax
  int BaseIoPriorityThread; // edx
  struct _KTHREAD *v27; // r8
  struct _IRP *PoolWithTagPriority; // rax
  unsigned int v30; // r15d
  __int64 v31; // rdx
  PMDL Mdl; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a4;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  if ( a7 )
    *(_BYTE *)(v16 - 72) = 15;
  else
    *(_BYTE *)(v16 - 72) = 14;
  *(_DWORD *)(v16 - 64) = NumberOfBytes;
  *(_DWORD *)(v16 - 56) = v10;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_16;
    }
    if ( a3 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                               NonPagedPoolNxCacheAligned,
                                               v10,
                                               0x20206F49u,
                                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v10, 0x20206F49u);
      v15->AssociatedIrp.MasterIrp = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        goto LABEL_42;
      memmove(PoolWithTagPriority, a3, v10);
      v15->Flags = 48;
      v30 = 0;
    }
    else
    {
      v30 = 0;
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_16;
    Mdl = IoAllocateMdl(VirtualAddress, NumberOfBytes, 0, 0, 0LL);
    v15->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v30 = 1;
      IopProbeAndLockPages((__int64)Mdl, v31, v30, a2, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_16;
    }
    if ( a3 )
      ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
LABEL_42:
    IoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || NumberOfBytes )
  {
    v18 = (unsigned int)v10;
    if ( (unsigned int)v10 <= NumberOfBytes )
      v18 = NumberOfBytes;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                     NonPagedPoolNxCacheAligned,
                                     v18,
                                     0x20206F49u,
                                     (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = (struct _IRP *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v18, 0x20206F49u);
    v15->AssociatedIrp.MasterIrp = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( a3 )
        memmove(PoolWithTag, a3, v10);
      v15->Flags = 48;
      v15->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v15->Flags = 112;
      goto LABEL_16;
    }
    goto LABEL_42;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_16:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v15->Tail.Overlay.Thread = CurrentThread;
  p_FirstArgument = (struct _LIST_ENTRY *)&CurrentThread[1].FirstArgument;
  p_ThreadListEntry = &v15->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v24 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  Flink = p_FirstArgument->Flink;
  if ( p_FirstArgument->Flink->Blink != p_FirstArgument )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v15->ThreadListEntry.Blink = p_FirstArgument;
  Flink->Blink = p_ThreadListEntry;
  p_FirstArgument->Flink = p_ThreadListEntry;
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
