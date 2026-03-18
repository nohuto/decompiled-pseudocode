/*
 * XREFs of HUBHSM_GettingRootHub20PortsInfo @ 0x1C00089D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0020A34 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHub20PortsInfo(__int64 a1)
{
  HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
