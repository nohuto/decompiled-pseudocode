/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C0036380
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C000EFB0 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqq @ 0x1C0024104 (McTemplateK0pqq.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0034D44 (RaidAdapterSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, int a2)
{
  __int64 v4; // rcx
  KIRQL v5; // bl
  __int64 v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq(a1, &EventAdapterActiveConditionStart, 0LL, **(_QWORD **)(a1 + 5088), v7, a2);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1);
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v5 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1);
    KeLowerIrql(v5);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v8) = a2;
      LODWORD(v6) = *(_DWORD *)(a1 + 56);
      McTemplateK0pqq(v4, &EventAdapterActiveConditionStop, 0LL, **(_QWORD **)(a1 + 5088), v6, v8);
    }
  }
}
