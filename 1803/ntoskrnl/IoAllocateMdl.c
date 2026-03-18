/*
 * XREFs of IoAllocateMdl @ 0x140098CD0
 * Callers:
 *     MiCreateMdl @ 0x140097F84 (MiCreateMdl.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x1400990E8 (MiZeroPageWrite.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x140226864 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x140254980 (MmAllocateMdlForIoSpace.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     HvlUpdateMicrocode @ 0x140717DD0 (HvlUpdateMicrocode.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14071FB28 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140734594 (PnprInitializeMappingReserve.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407B96CC (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 *     VerifierIoAllocateMdl @ 0x140816770 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x140816C70 (VerifierPortIoAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140817DE0 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  CSHORT v5; // r12
  __int64 v6; // r15
  __int16 v7; // si
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rbx
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned int v20; // ecx
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rdx

  v5 = 0;
  v6 = Length;
  v7 = (__int16)VirtualAddress;
  v9 = (unsigned __int16)VirtualAddress & 0xFFF;
  v10 = (v9 + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v10 > 0x11 )
  {
    v20 = 8 * v10 + 48;
  }
  else
  {
    v5 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[3].L;
    ++L->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result
      || (Size = L->Size,
          AllocateEx = L->AllocateEx,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_3:
      LODWORD(result->Next) = CurrentPrcb->Number;
    }
    if ( result )
    {
      LOWORD(Number) = result->Next;
      goto LABEL_6;
    }
    v20 = 184;
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x206C644Du);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v7 & 0xFFF;
  result->ByteCount = v6;
  result->Size = 8 * (((unsigned __int64)(v9 + v6 + 4095) >> 12) + 6);
  result->MdlFlags = v5;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
