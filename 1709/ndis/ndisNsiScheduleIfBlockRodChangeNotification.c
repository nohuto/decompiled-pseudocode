/*
 * XREFs of ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D998
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisOidPostPacketFilter @ 0x1C00108F0 (ndisOidPostPacketFilter.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v7; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  KIRQL v11; // bl

  v7 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = PoolWithTag;
    PoolWithTag[10] = a1;
    PoolWithTag[1] = ndisNsiQueuedIfBlockRodChangeNotification;
    PoolWithTag[11] = a2;
    *((_DWORD *)PoolWithTag + 24) = a3;
    *((_DWORD *)PoolWithTag + 25) = a4;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1440), 0xAu);
    ++*(_DWORD *)(a1 + 1304);
    KeReleaseSpinLock(&ndisIfListLock, v11);
    v10[5] = v10;
    v10[4] = ndisWorkItemHandler;
    v10[2] = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v10 + 2), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
