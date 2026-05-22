/*
 * XREFs of ?_Xlen@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEBAXXZ @ 0x18005D2A8
 * Callers:
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18005D120 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAX_K@Z @ 0x180097BA0 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<RayStabilizationResult>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
