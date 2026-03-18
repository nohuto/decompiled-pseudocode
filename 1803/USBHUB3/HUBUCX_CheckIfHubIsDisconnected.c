/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1C0022A30
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B150 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 536))(*(_QWORD *)(a1 + 240));
}
