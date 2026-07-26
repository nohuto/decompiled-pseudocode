/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x1C0061F80
 * Callers:
 *     NdisMAllocateSharedMemoryAsyncEx @ 0x1C00620E0 (NdisMAllocateSharedMemoryAsyncEx.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  int v9; // ebx
  NDIS_HANDLE v10; // rsi
  NDIS_HANDLE v11; // rcx

  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_qD(0x20u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportAdapterHandle, Length);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x7361444Eu);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v10 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v11 = MiniportAdapterHandle;
    if ( !v10 || !*((_QWORD *)v10 + 3) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v10 + 5) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 473) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v10 = MiniportAdapterHandle,
             v11 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 3))
         || !*((_QWORD *)MiniportAdapterHandle + 5) )
  {
LABEL_11:
    v9 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_13;
  }
  if ( !ndisReferenceMiniport((__int64)v11) )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 18);
  PoolWithTag[1].List.Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(PoolWithTag[1].List.Blink) = Length;
  BYTE4(PoolWithTag[1].List.Blink) = Cached;
  PoolWithTag[1].Parameter = Context;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedAllocateSharedHandler;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
  v9 = 259;
LABEL_13:
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_d(0x21u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, v9);
  return v9;
}
