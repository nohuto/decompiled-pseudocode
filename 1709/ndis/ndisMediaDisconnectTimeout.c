/*
 * XREFs of ndisMediaDisconnectTimeout @ 0x1C0065850
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        KSPIN_LOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x17u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)FunctionContext);
  KeAcquireSpinLockAtDpcLevel(FunctionContext + 12);
  v5 = FunctionContext + 12;
  FunctionContext[65] = (KSPIN_LOCK)KeGetCurrentThread();
  FunctionContext[65] = 0LL;
  v6 = *((_DWORD *)FunctionContext + 31);
  *((_DWORD *)FunctionContext + 464) = 1704533;
  *((_DWORD *)FunctionContext + 464) = 0;
  if ( (v6 & 8) != 0 )
  {
    *((_DWORD *)FunctionContext + 31) = v6 & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(v5);
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *((_DWORD *)FunctionContext + 31) |= 0x400u;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMediaDisconnectWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Flink = (_LIST_ENTRY *)FunctionContext;
      ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ndisDereferenceMiniport((__int64)FunctionContext, 0xBu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    ndisDereferenceMiniport((__int64)FunctionContext, 0xBu);
    if ( (unsigned __int8)byte_1C0098755 < 4u )
      return;
    WPP_SF_q(0x18u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)FunctionContext);
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x19u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)FunctionContext);
}
