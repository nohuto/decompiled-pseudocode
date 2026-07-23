/*
 * XREFs of sub_18001F704 @ 0x18001F704
 * Callers:
 *     RtlRestoreContext @ 0x18000B1B0 (RtlRestoreContext.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180050068 @ 0x180050068 (sub_180050068.c)
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800F2E10 @ 0x1800F2E10 (sub_1800F2E10.c)
 * Callees:
 *     <none>
 */

__int64 sub_18001F704()
{
  __int64 result; // rax

  if ( !LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    return 0LL;
  result = 1LL;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 || (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) != 3 )
    return 0LL;
  return result;
}
