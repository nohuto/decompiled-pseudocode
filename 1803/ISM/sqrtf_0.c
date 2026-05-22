/*
 * XREFs of sqrtf_0 @ 0x1800E3205
 * Callers:
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1800345B0 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1800376EC (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F088 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18005CA10 (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180092D64 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1800AE570 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x1800DBB00 (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x1800E07E0 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1800E09FC (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
