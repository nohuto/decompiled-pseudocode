/*
 * XREFs of NdisMPromoteMiniport @ 0x1C005E210
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C007952C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisMPromoteMiniport(NDIS_HANDLE MiniportHandle)
{
  unsigned int v2; // esi
  KIRQL v3; // bp
  bool v4; // zf
  struct _WORK_QUEUE_ITEM *PoolWithTag; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  KIRQL v8; // dl
  __int64 i; // rax

  v2 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x65u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportHandle);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  v4 = (*((_DWORD *)MiniportHandle + 30) & 0x10000000) == 0;
  *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportHandle + 464) = 727516;
  if ( v4
    || *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle
    || (*((_DWORD *)MiniportHandle + 31) & 0x20000) != 0 )
  {
    v2 = -1073741637;
    goto LABEL_15;
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6977444Eu);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_15:
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    *((_DWORD *)MiniportHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v3);
    goto LABEL_16;
  }
  v6 = *((_QWORD *)MiniportHandle + 22);
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = ndisMQueuedPromoteMiniport;
  PoolWithTag->Parameter = MiniportHandle;
  *((_DWORD *)MiniportHandle + 30) &= ~0x10000000u;
  ndisReferenceMiniportNoCheck((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  *((_DWORD *)MiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v3);
  v7 = *((_QWORD *)MiniportHandle + 473);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
  for ( i = *(_QWORD *)(v7 + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_QWORD *)(i + 176) == v6 )
      *(_QWORD *)(i + 176) = MiniportHandle;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v8);
  ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
LABEL_16:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x66u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportHandle);
  NdisTraceLoggingRareMiniportPath(MiniportHandle, 4097LL, v2);
  return v2;
}
