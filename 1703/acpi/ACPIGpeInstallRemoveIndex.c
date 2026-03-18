/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x1C00200DC
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C001F900 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorConnect @ 0x1C0058DB0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0058F70 (ACPIVectorDisconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_dDD @ 0x1C0020200 (WPP_RECORDER_SF_dDD.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C002029C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeValidIndex @ 0x1C00202D8 (ACPIGpeValidIndex.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(__int64 a1, int a2, int a3, _BYTE *a4)
{
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // r9d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  char v14; // bl

  v7 = a1;
  if ( *((_BYTE *)AcpiInformation + 85) )
  {
    if ( (unsigned __int8)ACPIGpeValidIndex(a1) )
    {
      v8 = 1 << (v7 & 7);
      v9 = ACPIGpeIndexToGpeRegister(v7);
      v10 = *((unsigned __int16 *)AcpiInformation + 51);
      if ( v9 < v10 )
      {
        if ( a2 == 2 )
        {
          if ( *a4 )
          {
            *((_BYTE *)GpeHandlerRegistered + v9) |= v8;
            *((_BYTE *)GpeEnable + v9) |= v8;
            *((_BYTE *)GpeCurEnable + v9) |= v8;
            *((_BYTE *)GpeHandlerType + v9) |= v8;
          }
          else
          {
            v14 = ~(_BYTE)v8;
            *((_BYTE *)GpeHandlerRegistered + v9) &= v14;
            *((_BYTE *)GpeEnable + v9) &= v14;
            *((_BYTE *)GpeCurEnable + v9) &= v14;
            *((_BYTE *)GpeHandlerType + v9) &= v14;
          }
          v11 = 11;
          goto LABEL_12;
        }
        if ( ((unsigned __int8)v8 & *((_BYTE *)GpeHandlerRegistered + v9)) == 0 )
        {
          *a4 = 0;
LABEL_7:
          *((_BYTE *)GpeHandlerRegistered + v9) |= v8;
          *((_BYTE *)GpeEnable + v9) |= v8;
          *((_BYTE *)GpeCurEnable + v9) |= v8;
          if ( a2 == 1 )
            *((_BYTE *)GpeIsLevel + v9) |= v8;
          else
            *((_BYTE *)GpeIsLevel + v9) &= ~(_BYTE)v8;
          if ( a3 == 1 )
            *((_BYTE *)GpeHandlerType + v9) |= v8;
          else
            *((_BYTE *)GpeHandlerType + v9) &= ~(_BYTE)v8;
          v11 = 12;
LABEL_12:
          WPP_RECORDER_SF_dDD(WPP_GLOBAL_Control->DeviceExtension, v10, v9, v11);
          return 1;
        }
        if ( ((unsigned __int8)v8 & *((_BYTE *)GpeHandlerType + v9)) != 0 )
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
      LODWORD(PoolWithTag[1].List.Flink) = v7;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ACPIGpeInstallRemoveIndexErrorWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 0;
}
