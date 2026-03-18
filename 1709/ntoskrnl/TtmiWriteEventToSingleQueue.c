/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x14071102C
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x14070DDBC (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14070FB44 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14070FBC8 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v6; // edx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm1
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
    v6 = 412;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue", v6, -1, v5);
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x716D7454u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    v6 = 425;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x230uLL);
  v9 = 4LL;
  v10 = v8 + 2;
  do
  {
    *(_OWORD *)v10 = *(_OWORD *)a2;
    *((_OWORD *)v10 + 1) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v10 + 2) = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v10 + 3) = *(_OWORD *)(a2 + 48);
    *((_OWORD *)v10 + 4) = *(_OWORD *)(a2 + 64);
    *((_OWORD *)v10 + 5) = *(_OWORD *)(a2 + 80);
    *((_OWORD *)v10 + 6) = *(_OWORD *)(a2 + 96);
    v10 += 16;
    v11 = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    *((_OWORD *)v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *(_OWORD *)a2;
  v10[2] = *(_QWORD *)(a2 + 16);
  *((_DWORD *)v10 + 6) = *(_DWORD *)(a2 + 24);
  v12 = *(_QWORD **)(a1 + 160);
  if ( *v12 != a1 + 152 )
    __fastfail(3u);
  v8[1] = v12;
  *v8 = a1 + 152;
  *v12 = v8;
  *(_QWORD *)(a1 + 160) = v8;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
