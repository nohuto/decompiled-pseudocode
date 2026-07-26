/*
 * XREFs of NdisGetProcessorInformation @ 0x1C00C3190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  NDIS_STATUS v1; // r8d
  __int64 v3; // rcx
  unsigned int Blink; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned int *v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  if ( SystemProcessorInfo->Header.Size < 0x430u )
    return -1073676266;
  v3 = *(_QWORD *)&WPP_MAIN_CB.DeviceType;
  SystemProcessorInfo->Flags = *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 4LL);
  SystemProcessorInfo->ProcessorVendor = *(_DWORD *)(v3 + 8);
  SystemProcessorInfo->NumPhysicalPackages = *(_DWORD *)(v3 + 12);
  SystemProcessorInfo->NumCores = *(_DWORD *)(v3 + 16);
  SystemProcessorInfo->NumCoresPerPhysicalPackage = *(_DWORD *)(v3 + 20);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = *(_DWORD *)(v3 + 24);
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  Blink = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  SystemProcessorInfo->RssCpuCount = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( SystemProcessorInfo->RssProcessors )
  {
    v5 = 0;
    if ( Blink )
    {
      v6 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      v7 = Blink;
      do
      {
        if ( *(_WORD *)v6 )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          v8 = v5++;
          SystemProcessorInfo->RssProcessors[v8] = *(_BYTE *)(v6 + 2);
        }
        v6 += 4LL;
        --v7;
      }
      while ( v7 );
    }
  }
  v9 = 0;
  v10 = 0;
  if ( !ndisNumberOfActiveProcessorsAtBoot )
    goto LABEL_14;
  v10 = ndisNumberOfActiveProcessorsAtBoot;
  v11 = (unsigned int *)((char *)WPP_MAIN_CB.DeviceExtension + 4);
  v12 = ndisNumberOfActiveProcessorsAtBoot;
  do
  {
    if ( !*((_WORD *)v11 - 2) )
    {
      v13 = v9 + 3LL;
      v14 = v9++;
      *((_DWORD *)&SystemProcessorInfo->Header + 4 * v13) = *((unsigned __int8 *)v11 - 2);
      SystemProcessorInfo->CpuInfo[v14].PhysicalPackageId = *v11;
      SystemProcessorInfo->CpuInfo[v14].CoreId = v11[1];
      SystemProcessorInfo->CpuInfo[v14].HyperThreadID = v11[2];
    }
    v11 += 5;
    --v12;
  }
  while ( v12 );
  while ( v10 < 0x40 )
  {
LABEL_14:
    v15 = 2 * (v10++ + 3LL);
    *((_QWORD *)&SystemProcessorInfo->Header.Type + v15) = 0LL;
    *((_QWORD *)&SystemProcessorInfo->ProcessorVendor + v15) = 0LL;
  }
  return v1;
}
