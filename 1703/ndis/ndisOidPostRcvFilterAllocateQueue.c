/*
 * XREFs of ndisOidPostRcvFilterAllocateQueue @ 0x1C003D810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003D6F4 (ndisFindReceiveQueueByQueueId.c)
 *     ndisFreeReceiveQueue @ 0x1C003D724 (ndisFreeReceiveQueue.c)
 */

void __fastcall ndisOidPostRcvFilterAllocateQueue(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edx
  __int64 *ReceiveQueueByQueueId; // rdx
  KIRQL v7; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(v1 + 40);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x10u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, v1);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 40) )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( v5 )
        ndisFreeReceiveQueue(v3, v5);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2687931;
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, *(_DWORD *)(v4 + 12));
      *((_DWORD *)ReceiveQueueByQueueId + 13) = 2;
      *((_DWORD *)ReceiveQueueByQueueId + 43) = *(_DWORD *)(v4 + 44);
      if ( *(_BYTE *)(v4 + 1) >= 2u && *(_WORD *)(v4 + 2) >= 0x444u && *(_DWORD *)(v1 + 48) >= 0x444u )
        *((_DWORD *)ReceiveQueueByQueueId + 304) = *(_DWORD *)(v4 + 1088);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x11u, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, *(_DWORD *)(a1 + 40));
}
