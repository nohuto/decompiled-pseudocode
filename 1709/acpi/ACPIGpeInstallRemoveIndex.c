/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x1C00138C0
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00136F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorConnect @ 0x1C0059800 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0059A90 (ACPIVectorDisconnect.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C001054C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeValidIndex @ 0x1C0010588 (ACPIGpeValidIndex.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00139E4 (WPP_RECORDER_SF_dDD.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(unsigned int a1, int a2, int a3, _BYTE *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // r9d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  char v16; // bl

  if ( *((_BYTE *)AcpiInformation + 85) )
  {
    if ( ACPIGpeValidIndex(a1) )
    {
      v10 = 1 << (a1 & 7);
      v11 = ACPIGpeIndexToGpeRegister(a1, v8, v9);
      v12 = *((unsigned __int16 *)AcpiInformation + 51);
      if ( v11 < v12 )
      {
        if ( a2 == 2 )
        {
          if ( *a4 )
          {
            *((_BYTE *)GpeHandlerRegistered + v11) |= v10;
            *((_BYTE *)GpeEnable + v11) |= v10;
            *((_BYTE *)GpeCurEnable + v11) |= v10;
            *((_BYTE *)GpeHandlerType + v11) |= v10;
          }
          else
          {
            v16 = ~(_BYTE)v10;
            *((_BYTE *)GpeHandlerRegistered + v11) &= v16;
            *((_BYTE *)GpeEnable + v11) &= v16;
            *((_BYTE *)GpeCurEnable + v11) &= v16;
            *((_BYTE *)GpeHandlerType + v11) &= v16;
          }
          v13 = 11;
          goto LABEL_12;
        }
        if ( ((unsigned __int8)v10 & *((_BYTE *)GpeHandlerRegistered + v11)) == 0 )
        {
          *a4 = 0;
LABEL_7:
          *((_BYTE *)GpeHandlerRegistered + v11) |= v10;
          *((_BYTE *)GpeEnable + v11) |= v10;
          *((_BYTE *)GpeCurEnable + v11) |= v10;
          if ( a2 == 1 )
            *((_BYTE *)GpeIsLevel + v11) |= v10;
          else
            *((_BYTE *)GpeIsLevel + v11) &= ~(_BYTE)v10;
          if ( a3 == 1 )
            *((_BYTE *)GpeHandlerType + v11) |= v10;
          else
            *((_BYTE *)GpeHandlerType + v11) &= ~(_BYTE)v10;
          v13 = 12;
LABEL_12:
          WPP_RECORDER_SF_dDD(WPP_GLOBAL_Control->DeviceExtension, v12, v11, v13);
          return 1;
        }
        if ( ((unsigned __int8)v10 & *((_BYTE *)GpeHandlerType + v11)) != 0 )
        {
          *a4 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag[1].List.Flink) = a1;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ACPIGpeInstallRemoveIndexErrorWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 0;
}
