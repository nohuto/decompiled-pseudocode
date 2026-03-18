/*
 * XREFs of HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C0019DB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDeviceFromUCX @ 0x1C0021E20 (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0021F98 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  return 4077LL;
}
