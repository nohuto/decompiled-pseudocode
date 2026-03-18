/*
 * XREFs of IoAllocateMdl @ 0x1401176F0
 * Callers:
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     MiCreateMdl @ 0x14005C370 (MiCreateMdl.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     HvlGetCoverageData @ 0x1401E4A10 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x14020FC10 (MmAllocateMdlForIoSpace.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14068EED8 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1406A2354 (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407137E0 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140768F90 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int64 v5; // r14
  CSHORT v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v12; // r12d
  _GENERAL_LOOKASIDE *P; // rdi
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PMDL i; // rdx

  v5 = Length;
  v6 = 0;
  v7 = (unsigned __int16)VirtualAddress & 0xFFF;
  v10 = (v7 + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v10 > 0x11 )
  {
    v12 = 8 * v10 + 48;
  }
  else
  {
    v6 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 184;
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
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x206C644Du);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->ByteCount = v5;
  result->Size = 8 * (((unsigned __int64)(v7 + v5 + 4095) >> 12) + 6);
  result->MdlFlags = v6;
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = (unsigned __int16)VirtualAddress & 0xFFF;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      for ( i = Irp->MdlAddress; i->Next; i = i->Next )
        ;
      i->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
