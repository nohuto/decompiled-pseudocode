/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140081250
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x140081210 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopProbeAndLockPages @ 0x140038BFC (IopProbeAndLockPages.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

IRP *__fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _IO_STATUS_BLOCK *a6,
        __int64 a7)
{
  SIZE_T v7; // r12
  __int64 v9; // r15
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v13; // eax
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  PMDL Mdl; // rcx
  struct _IRP *PoolWithTagPriority; // rax

  v7 = a4;
  v9 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = (IRP *)IopAllocateIrpExReturn(v9, a2, 0LL, a7);
  if ( Irp )
  {
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_4:
        Irp->Flags = Irp->Flags & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(Irp->Tail.Overlay.Thread) + 1) << 17);
        Irp->UserIosb = a6;
        return Irp;
      }
    }
    v15 = *(_DWORD *)(v9 + 48);
    if ( (v15 & 4) != 0 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                               NonPagedPoolNxCacheAligned,
                                               v7,
                                               0x20206F49u,
                                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x20206F49u);
      Irp->AssociatedIrp.MasterIrp = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        if ( a1 == 4 )
        {
          memmove(PoolWithTagPriority, a3, v7);
          Irp->Flags = 48;
          goto LABEL_8;
        }
        Irp->Flags = 112;
        goto LABEL_7;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
LABEL_7:
        Irp->UserBuffer = a3;
LABEL_8:
        CurrentStackLocation[-1].Parameters.Read.Length = v7;
        if ( a5 )
          CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a5;
        v16 = *(_DWORD *)(v9 + 72);
        if ( v16 >= 7 && (v16 <= 9 || v16 == 36) )
          IoSetDiskIoAttributionFromThread((__int64)Irp, Irp->Tail.Overlay.Thread);
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v7, 0, 0, 0LL);
      Irp->MdlAddress = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages((__int64)Mdl, v17, a1 == 3, v9, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_8;
      }
    }
    IoFreeIrp(Irp);
  }
  return 0LL;
}
