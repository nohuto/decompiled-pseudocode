/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C0021EEC
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1C0019AD0 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1C0019BC0 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C0019C00 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C0019DE0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C0019E40 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0019E90 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x1C001DB10 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C0021E4C (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx

  v2 = a2 + 2;
  v4 = (_QWORD *)a2[2];
  v6 = (__int64)(v4 - 1);
  v7 = *v4 - 8LL;
  if ( v2 != v4 )
  {
    do
    {
      v8 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v9 = (_QWORD *)v4[1], (_QWORD *)*v9 != v4) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1, v6);
      v6 = v7;
      v7 = *(_QWORD *)(v7 + 8) - 8LL;
      v4 = (_QWORD *)(v6 + 8);
    }
    while ( v2 != (_QWORD *)(v6 + 8) );
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *a2);
}
