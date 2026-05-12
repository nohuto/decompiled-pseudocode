/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0
 * Callers:
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000A0E4 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 *     Template_zqqqqq @ 0x1C0040394 (Template_zqqqqq.c)
 *     Template_zqqqqqqq @ 0x1C0040480 (Template_zqqqqqqq.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 Pool; // rax
  int v8; // r8d
  struct _SLIST_ENTRY *v9; // rdi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  union _SLIST_HEADER *v13; // rcx
  ULONG TimeIncrement; // eax
  int v15; // r8d
  int v16; // ecx

  v2 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), 1, 0) )
    return 0;
  if ( *(_DWORD *)(a1 + 136) < *(_DWORD *)(a1 + 144) )
  {
    if ( !*(_QWORD *)(a1 + 168) )
      goto LABEL_7;
    if ( MEMORY[0xFFFFF78000000320] >= *(_QWORD *)(a1 + 168) )
    {
      *(_QWORD *)(a1 + 168) = 0LL;
LABEL_7:
      v5 = *(_QWORD *)(a1 + 152);
      v6 = *(_QWORD *)(v5 + 64);
      if ( *(_BYTE *)(a1 + 184) )
        Pool = (__int64)RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a1 + 148), 0x53526152u, v5);
      else
        Pool = StorAllocateContiguousIoResources(*(_DWORD *)(a1 + 148), a2, *(_QWORD **)(v5 + 64));
      v9 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 16) = 523124044;
        *(_DWORD *)(Pool + 760) = *(_DWORD *)(a1 + 180);
        v10 = *(_DWORD *)(a1 + 180);
        if ( v10 )
          *(_QWORD *)(Pool + 776) = Pool + (unsigned int)(*(_DWORD *)(a1 + 148) - v10);
        if ( *(_BYTE *)(a1 + 184) )
          *(_QWORD *)(Pool + 800) = 0LL;
        *(_DWORD *)(a1 + 164) = 0;
        v2 = 1;
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
          Template_zqqqqq(
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 136),
            v8,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 136),
            *(_DWORD *)(a1 + 136) + 1,
            *(_DWORD *)(a1 + 144));
        _InterlockedAdd((volatile signed __int32 *)(a1 + 136), 1u);
        v11 = *(_DWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 28) = v11;
        *(_DWORD *)(a1 + 32) = v11;
        v12 = *(_DWORD *)(a1 + 128);
        if ( v12 )
          v13 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64)
                                        + 8LL
                                        * ((unsigned int)(v12 * HIDWORD(KeGetPcr()[1].LockArray))
                                         / *(_DWORD *)(a1 + 132)));
        else
          v13 = (union _SLIST_HEADER *)(a1 + 64);
        ExpInterlockedPushEntrySList(v13, v9);
      }
      else
      {
        ++*(_DWORD *)(a1 + 160);
        ++*(_DWORD *)(a1 + 164);
        *(_QWORD *)(a1 + 168) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v16 = ++*(_DWORD *)(a1 + 176);
        *(_QWORD *)(a1 + 168) += 30 * (0x989680 / TimeIncrement);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20) != 0 )
          Template_zqqqqqqq(
            v16,
            0x989680 % TimeIncrement,
            v15,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            *(_DWORD *)(a1 + 192),
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 144),
            *(_DWORD *)(a1 + 160),
            *(_DWORD *)(a1 + 164),
            v16);
      }
      goto LABEL_24;
    }
  }
  v2 = 0;
LABEL_24:
  *(_DWORD *)(a1 + 188) = 0;
  return v2;
}
