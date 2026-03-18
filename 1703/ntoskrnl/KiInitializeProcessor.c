/*
 * XREFs of KiInitializeProcessor @ 0x140412130
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     KeInitializeGate @ 0x140035EB4 (KeInitializeGate.c)
 *     KiInitializeDpcList @ 0x14003C630 (KiInitializeDpcList.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     KeInitializeThreadedDpc @ 0x14015D280 (KeInitializeThreadedDpc.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  PVOID PoolWithTag; // rax
  size_t v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 22656);
    KiInitializeDpcList((_QWORD *)(a1 + 11816));
    *(_QWORD *)(a1 + 11832) = 0LL;
    *(_DWORD *)(a1 + 11840) = 0;
  }
  if ( KeDpcWatchdogPeriod )
  {
    KeInitializeThreadedDpc((PRKDPC)(a1 + 24568), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
    v4 = *(_DWORD *)(a1 + 36);
    *(_BYTE *)(a1 + 24569) = 2;
    if ( !*(_QWORD *)(a1 + 24624) )
      *(_WORD *)(a1 + 24570) = v4 + 640;
    KeInitializeTimerEx((PKTIMER)(a1 + 24632), NotificationTimer);
    v5 = KeMaximumIncrement;
    v6 = KeMaximumIncrement;
    v7 = (KeMaximumIncrement + 10000 * (unsigned __int64)(unsigned int)KeDpcWatchdogPeriod - 1) / KeMaximumIncrement;
    if ( v7 > 0xFFFFFFFF )
      v7 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 22764) = 0;
    *(_DWORD *)(a1 + 22760) = v7;
    v8 = v7 * v6 / 0x4E20;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    KeSetCoalescableTimer((PKTIMER)(a1 + 24632), (LARGE_INTEGER)-v5, v8, 0xFAu, (PKDPC)(a1 + 24568));
  }
  if ( KiDPCTimeout )
  {
    v2 = (10000LL * (unsigned int)KiDPCTimeout + (unsigned __int64)KeMaximumIncrement - 1) / KeMaximumIncrement;
    if ( v2 > 0xFFFFFFFF )
      LODWORD(v2) = -1;
    *(_DWORD *)(a1 + 23460) = v2;
  }
  if ( KiDpcWatchdogProfileArrayLength )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    8LL * (unsigned int)KiDpcWatchdogProfileArrayLength,
                    0x5057694Bu);
    *(_QWORD *)(a1 + 25256) = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25264) = PoolWithTag;
      memset(PoolWithTag, 0, v10);
      v11 = KeMaximumIncrement;
      v12 = (10000LL * (unsigned int)KiDpcWatchdogProfileCumulativeDpcThreshold
           + (unsigned __int64)KeMaximumIncrement
           - 1)
          / KeMaximumIncrement;
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      *(_DWORD *)(a1 + 22772) = v12;
      v13 = (10000LL * (unsigned int)KiDpcWatchdogProfileSingleDpcThreshold + v11 - 1) / v11;
      if ( v13 > 0xFFFFFFFF )
        LODWORD(v13) = -1;
      *(_DWORD *)(a1 + 23644) = v13;
    }
    else
    {
      *(_DWORD *)(a1 + 22772) = 0;
      *(_DWORD *)(a1 + 23644) = 0;
      *(_QWORD *)(a1 + 25264) = 0LL;
    }
  }
  return 0LL;
}
