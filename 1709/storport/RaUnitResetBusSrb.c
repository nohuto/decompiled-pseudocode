/*
 * XREFs of RaUnitResetBusSrb @ 0x1C003C6BC
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0qcj @ 0x1C003B86C (McTemplateK0qcj.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
    McTemplateK0qcj(
      a1,
      a2,
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      a1 + 1720);
  return RaidUnitSubmitResetRequest(a1, a2);
}
