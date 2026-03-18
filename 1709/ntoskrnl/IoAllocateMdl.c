/*
 * XREFs of IoAllocateMdl @ 0x1400BBD50
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     MiCreateMdl @ 0x1400B5D3C (MiCreateMdl.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x14011F014 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     HvlGetCoverageData @ 0x1401E96F4 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x140216F70 (MmAllocateMdlForIoSpace.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1406BAB9C (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1406CCBF4 (PnprInitializeMappingReserve.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140752930 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1407AAC50 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int64 v5; // r15
  CSHORT v6; // r12
  __int16 v7; // si
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rbx
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PMDL i; // rdx

  v5 = Length;
  v6 = 0;
  v7 = (__int16)VirtualAddress;
  v9 = (unsigned __int16)VirtualAddress & 0xFFF;
  v10 = (v9 + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v10 > 0x11 )
  {
    v11 = 8 * v10 + 48;
  }
  else
  {
    v6 = 8;
    v11 = 184;
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
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x206C644Du);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v7 & 0xFFF;
  result->ByteCount = v5;
  result->Size = 8 * (((unsigned __int64)(v9 + v5 + 4095) >> 12) + 6);
  result->MdlFlags = v6;
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
