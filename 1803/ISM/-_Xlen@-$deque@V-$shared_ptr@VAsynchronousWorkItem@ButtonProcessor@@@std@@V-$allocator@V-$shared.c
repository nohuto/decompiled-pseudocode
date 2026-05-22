/*
 * XREFs of ?_Xlen@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEBAXXZ @ 0x180057DA8
 * Callers:
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x180057BC8 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800922B8 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$sha.c)
 *     ?_Growmap@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAX_K@Z @ 0x1800D9D44 (-_Growmap@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$all.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
