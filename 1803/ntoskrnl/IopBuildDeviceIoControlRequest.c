/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14012A300
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14012A5C0 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14014BCC0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopAssignBootDriveLetter @ 0x1408B73FC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408E3160 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408E3348 (SbpStartLanman.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IopProbeAndLockPages @ 0x140098524 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  SIZE_T v10; // r15
  __int64 Irp; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  SIZE_T v18; // rdx
  PVOID v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *p_SystemCallNumber; // rdi
  _QWORD *v22; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v24; // r14
  __int64 v25; // rax
  PVOID Pool; // rax
  int v28; // eax
  int v29; // r15d
  __int64 v30; // rdx
  PMDL Mdl; // rcx

  v10 = a4;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
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
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v10);
      *(_QWORD *)(v15 + 24) = Pool;
      if ( !Pool )
        goto LABEL_28;
      memmove(Pool, a3, v10);
      v28 = 48;
      v29 = 0;
    }
    else
    {
      v29 = 0;
      v28 = 0;
    }
    *(_DWORD *)(v15 + 16) = v28;
    if ( !VirtualAddress )
      goto LABEL_12;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v15 + 8) = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v29 = 1;
      IopProbeAndLockPages(Mdl, v30, v29, a2, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
LABEL_28:
    IoFreeIrp((PIRP)v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || Length )
  {
    v18 = (unsigned int)v10;
    if ( (unsigned int)v10 <= Length )
      v18 = Length;
    v19 = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v18);
    *(_QWORD *)(v15 + 24) = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
      *(_QWORD *)(v15 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v15 + 16) = 112;
      goto LABEL_12;
    }
    goto LABEL_28;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  *(_QWORD *)(v15 + 72) = a9;
  *(_QWORD *)(v15 + 80) = a8;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v15 + 152) = CurrentThread;
  p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
  v22 = (_QWORD *)(v15 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v24 = (KSPIN_LOCK *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v25 = *(_QWORD *)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber )
    __fastfail(3u);
  *v22 = v25;
  *(_QWORD *)(v15 + 40) = p_SystemCallNumber;
  *(_QWORD *)(v25 + 8) = v22;
  *(_QWORD *)p_SystemCallNumber = v22;
  KxReleaseSpinLock(v24);
  __writecr8(CurrentIrql);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(v15 + 152))
                                                               + 1) << 17);
  return v15;
}
