/*
 * XREFs of sub_180030138 @ 0x180030138
 * Callers:
 *     sub_1800014DC @ 0x1800014DC (sub_1800014DC.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 *     sub_180073184 @ 0x180073184 (sub_180073184.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_180030138()
{
  return LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]
      && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
