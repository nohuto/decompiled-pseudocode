/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C00213F4
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1C0018FA0 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1C0019090 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C00190D0 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C00192B0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C0019310 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0019360 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x1C001D1E0 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C0021354 (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rbx

  v2 = a2 + 2;
  v5 = a2[2] - 8LL;
  v6 = (_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 8);
  while ( 1 )
  {
    v10 = v7 - 8;
    if ( v2 == v6 )
      break;
    v8 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1, v5);
    v5 = v10;
    v7 = *(_QWORD *)(v10 + 8);
    v6 = (_QWORD *)(v5 + 8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *a2);
}
