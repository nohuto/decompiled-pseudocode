/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1C0021F30
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B240 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 536))(*(_QWORD *)(a1 + 240));
}
