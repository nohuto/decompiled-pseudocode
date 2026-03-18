/*
 * XREFs of HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0021498
 * Callers:
 *     HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C0019280 (HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C00192B0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C0019310 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0019360 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30 @ 0x1C001A7D0 (HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteDefaultEndpointFromUCX(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*a1 + 448LL))(*(_QWORD *)(*a1 + 240LL), a1[3], a1[11]);
  a1[11] = 0LL;
  return result;
}
