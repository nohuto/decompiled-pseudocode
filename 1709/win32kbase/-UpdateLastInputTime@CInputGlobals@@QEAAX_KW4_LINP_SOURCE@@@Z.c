/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011690
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C0078110 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C00987FC (PowerConnectionEvent.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C001139C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
