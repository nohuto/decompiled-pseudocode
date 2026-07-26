/*
 * XREFs of NdisGetProcessorInformation @ 0x1C00C5FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisGetProcessorInformation(PNDIS_SYSTEM_PROCESSOR_INFO SystemProcessorInfo)
{
  NDIS_STATUS v1; // r8d
  _LIST_ENTRY *Flink; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r11d
  _IO_ALLOCATION_ACTION (__fastcall *DeviceRoutine)(_DEVICE_OBJECT *, _IRP *, void *, void *); // r10
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
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  SystemProcessorInfo->Flags = HIDWORD(WPP_MAIN_CB.Queue.ListEntry.Flink->Flink);
  SystemProcessorInfo->ProcessorVendor = (_NDIS_PROCESSOR_VENDOR)Flink->Blink;
  SystemProcessorInfo->NumPhysicalPackages = HIDWORD(Flink->Blink);
  SystemProcessorInfo->NumCores = (unsigned int)Flink[1].Flink;
  SystemProcessorInfo->NumCoresPerPhysicalPackage = HIDWORD(Flink[1].Flink);
  SystemProcessorInfo->MaxHyperThreadingCpusPerCore = (unsigned int)Flink[1].Blink;
  SystemProcessorInfo->RssBaseCpu = ndisRssBaseCpu;
  v4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  SystemProcessorInfo->RssCpuCount = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  if ( SystemProcessorInfo->RssProcessors )
  {
    v5 = 0;
    if ( v4 )
    {
      DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
      v7 = v4;
      do
      {
        if ( *(_WORD *)DeviceRoutine )
        {
          --SystemProcessorInfo->RssCpuCount;
        }
        else
        {
          v8 = v5++;
          SystemProcessorInfo->RssProcessors[v8] = *((_BYTE *)DeviceRoutine + 2);
        }
        DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))((char *)DeviceRoutine + 4);
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
  v11 = (unsigned int *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 4LL);
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
