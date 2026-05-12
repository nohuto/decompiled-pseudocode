/*
 * XREFs of StorPortAdapterIdleState @ 0x1C0038AD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00187C8 (StorUpdateCrashDumpPowerReady.c)
 *     McTemplateK0pqqq @ 0x1C002BA60 (McTemplateK0pqqq.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0037854 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 */

ULONG __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int Arg2, unsigned int Arg3)
{
  unsigned __int64 v6; // rcx
  bool v7; // sf
  __int64 v8; // rax
  ULONG result; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)a1,
      &EventAdapterIdleStateStart,
      0LL,
      **(const void ***)(a1 + 5088),
      *(_DWORD *)(a1 + 56),
      Arg2,
      Arg3);
  if ( Arg3 )
  {
    v7 = *(char *)(a1 + 108) < 0;
    *(_QWORD *)(a1 + 5384) = MEMORY[0xFFFFF78000000008];
    v8 = *(_QWORD *)(a1 + 5088);
    if ( v7 )
      *(_DWORD *)(v8 + 20) |= 0x10u;
    else
      *(_DWORD *)(v8 + 20) &= ~0x10u;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5420);
    if ( *(_QWORD *)(a1 + 5384) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) & 0x10) != 0 || *(char *)(a1 + 108) < 0 )
      {
        v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5384);
        *(_QWORD *)(a1 + 5392) += v6 / 0x2710;
        if ( v6 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5428);
      }
      *(_QWORD *)(a1 + 5384) = 0LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 16LL) = Arg3;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
  {
    if ( *(_DWORD *)(a1 + 96) && *(_QWORD *)(a1 + 5144) )
      StorUpdateCrashDumpPowerReady(a1);
    RaidAdapterSendPoFxIdleStateToMiniport(a1);
  }
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5088), Arg2);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      return McTemplateK0pqqq(
               v10,
               &EventAdapterIdleStateStop,
               0LL,
               **(const void ***)(a1 + 5088),
               *(_DWORD *)(a1 + 56),
               Arg2,
               Arg3);
  }
  return result;
}
