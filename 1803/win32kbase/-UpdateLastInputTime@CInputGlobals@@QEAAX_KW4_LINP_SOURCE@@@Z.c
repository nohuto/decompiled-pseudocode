/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036000
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C00A1650 (SetProtocolType.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerConnectionEvent @ 0x1C00A456C (PowerConnectionEvent.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036058 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, unsigned int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
