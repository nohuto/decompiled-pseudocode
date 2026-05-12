/*
 * XREFs of StorPortAdapterIdleState @ 0x1C0036C50
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     Template_pqqq @ 0x1C002FDBC (Template_pqqq.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0035BA4 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 */

NTSTATUS __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v6; // rcx
  bool v7; // cf
  __int64 v8; // rax
  NTSTATUS result; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    Template_pqqq(a1, &EventAdapterIdleStateStart, 0LL, **(_QWORD **)(a1 + 5088), *(_DWORD *)(a1 + 56), a2, a3);
  if ( a3 )
  {
    v7 = *(_BYTE *)(a1 + 108) < 0x80u;
    *(_QWORD *)(a1 + 5384) = MEMORY[0xFFFFF78000000008];
    v8 = *(_QWORD *)(a1 + 5088);
    if ( v7 )
      *(_DWORD *)(v8 + 20) &= ~0x10u;
    else
      *(_DWORD *)(v8 + 20) |= 0x10u;
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
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    RaidAdapterSendPoFxIdleStateToMiniport(a1);
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v13) = a3;
      LODWORD(v12) = a2;
      LODWORD(v11) = *(_DWORD *)(a1 + 56);
      return Template_pqqq(v10, &EventAdapterIdleStateStop, 0LL, **(_QWORD **)(a1 + 5088), v11, v12, v13);
    }
  }
  return result;
}
