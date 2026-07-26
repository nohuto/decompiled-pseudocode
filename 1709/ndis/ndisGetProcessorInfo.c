/*
 * XREFs of ndisGetProcessorInfo @ 0x1C011B794
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisGetLogicalProcessorInformation @ 0x1C011B950 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  SIZE_T v0; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v2; // rdi
  _DWORD *v8; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v15; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  *(_QWORD *)&WPP_MAIN_CB.DeviceType = PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  *v2 = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      v2[2] = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    v2[2] = 2;
    goto LABEL_6;
  }
  v2[2] = 0;
LABEL_6:
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ExAllocatePoolWithTag(
                                                         NonPagedPoolNx,
                                                         4LL * ndisMaxNumRssCpus,
                                                         0x2020444Eu);
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    return (unsigned int)-1073741670;
  v8 = *(_DWORD **)&WPP_MAIN_CB.DeviceType;
  *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 32LL) = ndisNumberOfActiveProcessorsAtBoot;
  WPP_MAIN_CB.DeviceExtension = v8 + 10;
  v8[3] = 1;
  v8[4] = 1;
  v8[6] = 1;
  v8[5] = 1;
  v8[7] = 40;
  v8[9] = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v15 = ndisRssBaseCpu;
    for ( i = 0LL;
          v15 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(
        v15++,
        (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 4 * i));
    }
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = i;
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
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                                                                                   + 4 * j));
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
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(
                                        v10,
                                        (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 4 * v11));
        v11 = (unsigned int)(v11 + 1);
      }
      ++v10;
    }
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
