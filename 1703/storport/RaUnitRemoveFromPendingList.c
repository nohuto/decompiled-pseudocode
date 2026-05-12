/*
 * XREFs of RaUnitRemoveFromPendingList @ 0x1C0006C50
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000E264 (RaidUnitDisablePendingTimer.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     StorRemoveEventQueue @ 0x1C00311D4 (StorRemoveEventQueue.c)
 *     Template_qcq @ 0x1C003FB58 (Template_qcq.c)
 */

void __fastcall RaUnitRemoveFromPendingList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  _QWORD v9[2]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  if ( (*(_BYTE *)(v5 + 16) & 2) != 0 )
  {
    StorRemoveEventQueue(*(_QWORD *)(a1 + 208), v5 + 48);
    if ( StorEtwLoggingEnabled )
    {
      v9[0] = 0LL;
      v9[1] = 0LL;
      IoGetActivityIdIrp(a2, v9);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_qcq(v7, v6, (unsigned int)v9, v8, 4);
    }
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1456) + 56LL), 0xFFFFFFFF) == 1 )
        RaidUnitDisablePendingTimer(a1);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    }
  }
}
