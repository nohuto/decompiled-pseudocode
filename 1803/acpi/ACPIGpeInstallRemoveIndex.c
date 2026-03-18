/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x1C0027B54
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0027598 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorBuildVectorMasks @ 0x1C003F78C (ACPIVectorBuildVectorMasks.c)
 *     ACPIVectorConnect @ 0x1C003F860 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C003FAF0 (ACPIVectorDisconnect.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeValidIndex @ 0x1C0027DE4 (ACPIGpeValidIndex.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0027E1C (WPP_RECORDER_SF_dDD.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(__int64 a1, int a2, int a3, char *a4)
{
  char v4; // di
  unsigned int v8; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edx
  char v14; // bl
  int v15; // r9d

  v4 = 0;
  v8 = a1;
  if ( !*((_BYTE *)AcpiInformation + 85) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag[1].List.Flink) = v8;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ACPIGpeInstallRemoveIndexErrorWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag->List.Flink = 0LL;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    return 0;
  }
  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    return 0;
  v11 = 1 << (v8 & 7);
  v12 = ACPIGpeIndexToGpeRegister(v8);
  v13 = *((unsigned __int16 *)AcpiInformation + 51);
  if ( v12 >= v13 )
    return 0;
  if ( a2 == 2 )
  {
    if ( *a4 )
    {
      *((_BYTE *)GpeHandlerRegistered + v12) |= v11;
      *((_BYTE *)GpeEnable + v12) |= v11;
      *((_BYTE *)GpeCurEnable + v12) |= v11;
      *((_BYTE *)GpeHandlerType + v12) |= v11;
    }
    else
    {
      v14 = ~(_BYTE)v11;
      *((_BYTE *)GpeHandlerRegistered + v12) &= v14;
      *((_BYTE *)GpeEnable + v12) &= v14;
      *((_BYTE *)GpeCurEnable + v12) &= v14;
      *((_BYTE *)GpeHandlerType + v12) &= v14;
    }
    v15 = 11;
  }
  else
  {
    if ( ((unsigned __int8)v11 & *((_BYTE *)GpeHandlerRegistered + v12)) != 0 )
    {
      if ( ((unsigned __int8)v11 & *((_BYTE *)GpeHandlerType + v12)) == 0 )
        return 0;
      v4 = 1;
    }
    *a4 = v4;
    *((_BYTE *)GpeHandlerRegistered + v12) |= v11;
    *((_BYTE *)GpeEnable + v12) |= v11;
    *((_BYTE *)GpeCurEnable + v12) |= v11;
    if ( a2 == 1 )
      *((_BYTE *)GpeIsLevel + v12) |= v11;
    else
      *((_BYTE *)GpeIsLevel + v12) &= ~(_BYTE)v11;
    if ( a3 == 1 )
      *((_BYTE *)GpeHandlerType + v12) |= v11;
    else
      *((_BYTE *)GpeHandlerType + v12) &= ~(_BYTE)v11;
    v15 = 12;
  }
  WPP_RECORDER_SF_dDD(WPP_GLOBAL_Control->DeviceExtension, v13, v12, v15);
  return 1;
}
