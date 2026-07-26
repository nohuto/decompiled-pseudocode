/*
 * XREFs of ndisGetProcessorInfo @ 0x1C01120C0
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisGetLogicalProcessorInformation @ 0x1C011227C (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  SIZE_T v0; // rbx
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v2; // rdi
  _LIST_ENTRY *Flink; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v15; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  WPP_MAIN_CB.Queue.ListEntry.Flink = PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  LODWORD(v2->Flink) = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      LODWORD(v2->Blink) = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    LODWORD(v2->Blink) = 2;
    goto LABEL_6;
  }
  LODWORD(v2->Blink) = 0;
LABEL_6:
  ndisRssProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumRssCpus, 0x2020444Eu);
  if ( !ndisRssProcessors )
    return (unsigned int)-1073741670;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink[2].Flink) = ndisNumberOfActiveProcessorsAtBoot;
  WPP_MAIN_CB.DeviceExtension = &Flink[2].Blink;
  HIDWORD(Flink->Blink) = 1;
  LODWORD(Flink[1].Flink) = 1;
  LODWORD(Flink[1].Blink) = 1;
  HIDWORD(Flink[1].Flink) = 1;
  HIDWORD(Flink[1].Blink) = 40;
  HIDWORD(Flink[2].Flink) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v15 = ndisRssBaseCpu;
    for ( i = 0LL;
          v15 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v15++, (PPROCESSOR_NUMBER)ndisRssProcessors + i);
    }
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = i;
    return 0;
  }
  else
  {
    v10 = ndisRssBaseCpu;
    v11 = 0LL;
    while ( v10 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v11 < ndisMaxNumRssCpus )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + j);
        if ( *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * ProcessorIndexFromNumber + 1) == *((_DWORD *)WPP_MAIN_CB.DeviceExtension
                                                                                            + 5 * v10
                                                                                            + 1)
          && *((_DWORD *)WPP_MAIN_CB.DeviceExtension + 5 * ProcessorIndexFromNumber + 2) == *((_DWORD *)WPP_MAIN_CB.DeviceExtension
                                                                                            + 5 * v10
                                                                                            + 2) )
        {
          break;
        }
      }
      if ( (_DWORD)j == (_DWORD)v11 )
      {
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v10, (PPROCESSOR_NUMBER)ndisRssProcessors + v11);
        v11 = (unsigned int)(v11 + 1);
      }
      ++v10;
    }
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
